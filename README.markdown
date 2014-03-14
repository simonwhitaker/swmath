# swmath: CGFloat-friendly math functions

Calling `math.h` functions like `floor` and `floorf` on CGFloat variables becomes problematic when compiling the same code for both 32-bit and  64-bit platforms, since CGFloat is double on 64-bit, float on 32-bit.  Hence, if you compile with -Wconversion set, `floorf` will give a warning  on 64-bit, while `floor` gives a warning on 32-bit.

**swmath** offers a set of architecture-independent math functions, written using plain old function overloading which is enabled using the `__attribute__((overloadable))` Clang language extension.

## Status

Right now this is a very early, mostly untested hack. Feel free to play with it, test it out and see how you get on. 

## What about `tgmath.h`?

I know of `tgmath.h`, but I really liked the idea of using Clang's function overloading instead. If you're happy with `tgmath.h` then by all means stick with it.

## Contributing

Pull requests are very, very welcome. Please note however that `swmath.h` and `swmath.c` are automatically generated; please don't submit changes to those files, since the changes won't persist.

All the magic happens in `scripts/swmath-gen.py`, so that's where you should make improvements. If you don't know Python feel free to open an issue instead, explaining the changes you'd like to see in the C code.

## Known issues

* No unit tests
* No support for `nan`, `nanf` and `nanl` since those three functions share the same signature and hence can't be overridden this way.

## Refs
 
* http://clang.llvm.org/docs/AttributeReference.html#overloadable
