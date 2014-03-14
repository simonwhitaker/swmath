#!/usr/bin/env python

import argparse

functions = [ 
    # Each entry is a tuple containing the base function name
    # (i.e. without f or l suffix) and a tuple of argument 
    # types.
    # 
    # An argument type of __type__ denotes that the argument
    # has the same type as the function's return type.
    # 
    # If a function has only a single __type__ argument, the
    # second tuple entry can be omitted.
    ('acos',),
    ('asin',),
    ('atan',),
    ('atan2', ('__type__', '__type__')),
    ('cos',),
    ('sin',),
    ('tan',),
    ('acosh',),
    ('asinh',),
    ('atanh',),
    ('cosh',),
    ('sinh',),
    ('tanh',),
    ('exp',),
    ('exp2',),
    ('expm1',),
    ('log',),
    ('log10',),
    ('log2',),
    ('log1p',),
    ('logb',),
    ('modf', ('__type__', '__type__ *')),
    ('ldexp', ('__type__', 'int')),
    ('frexp', ('__type__', 'int *')),
    ('ilogb',),
    ('scalbn', ('__type__', 'int')),
    ('scalbln', ('__type__', 'long int')),
    ('fabs',),
    ('cbrt',),
    ('hypot', ('__type__', '__type__')),
    ('pow', ('__type__', '__type__')),
    ('sqrt',),
    ('erf',),
    ('erfc',),
    ('lgamma',),
    ('tgamma',),
    ('ceil',),
    ('floor',),
    ('nearbyint',),
    ('rint',),
    ('lrint',),
    ('round',),
    ('lround',),
    ('llrint',),
    ('llround',),
    ('trunc',),
    ('fmod', ('__type__', '__type__')),
    ('remainder', ('__type__', '__type__')),
    ('remquo', ('__type__', '__type__', 'int *')),
    ('copysign', ('__type__', '__type__')),
    ('nextafter', ('__type__', '__type__')),
    ('nexttoward', ('__type__', 'long double')),
    ('fdim', ('__type__', '__type__')),
    ('fmax', ('__type__', '__type__')),
    ('fmin', ('__type__', '__type__')),
    ('fma', ('__type__', '__type__', '__type__')),
]

def print_output(is_interface):

    if is_interface:
        print """
#ifndef _swmath_h
#define _swmath_h

#if __has_attribute(overloadable)

"""
    else:
        print """
#include <math.h>

"""

    for fn in functions:
        fname = fn[0]
        if len(fn) > 1:
            arg_types = fn[1]
        else:
            arg_types = ('__type__',)

        args_type_and_variable_name = []
        for i, arg_type in enumerate(arg_types, start=1):
            variable_name = 'arg%i' % i
            args_type_and_variable_name.append((arg_type, variable_name))

        if is_interface:
            signature_template = ', '.join([arg_type for arg_type, variable_name in args_type_and_variable_name])
        else:
            signature_template = ', '.join(["%s %s" % (arg_type, variable_name) for arg_type, variable_name in args_type_and_variable_name])
        args = ', '.join([variable_name for arg_type, variable_name in args_type_and_variable_name])

        for ftype, suffix in (('float', 'f'), ('double', ''), ('long double', 'l')):
            signature = signature_template.replace('__type__', ftype)
            config = {
                'type': ftype,
                'fn': fname,
                'suffix': suffix,
                'args': args,
                'signature': signature,
            }
            if is_interface:
                print "{type} __attribute__((overloadable)) sw{fn}({signature});".format(**config)
            else:
                print "{type} __attribute__((overloadable)) sw{fn}({signature}) {{ return {fn}{suffix}({args}); }}".format(**config)
        print

    if is_interface:
        print """
#else
#error swmath requires support for the clang `overrideable` attribute
#endif


#endif
"""

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('-i', '--interface', dest='is_interface', action='store_true', default=False, help='Output the interface (.h) rather than the implementation (.c)')
    args = parser.parse_args()
    print_output(args.is_interface)

if __name__ == '__main__':
    main()