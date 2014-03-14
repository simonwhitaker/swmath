# swmath: CGFloat-friendly math functions

Calling `math.h` functions like `floor` and `floorf` on CGFloat variables becomes problematic when compiling the same code for both 32-bit and  64-bit platforms, since CGFloat is double on 64-bit, float on 32-bit.  Hence, if you compile with -Wconversion set, `floorf` will give a warning  on 64-bit, while `floor` gives a warning on 32-bit.

**swmath** offers a set of architecture-independent math functions, written using plain old function overloading which is enabled using the `__attribute__((overloadable))` Clang language extension.

### Refs
 
* http://clang.llvm.org/docs/AttributeReference.html#overloadable
