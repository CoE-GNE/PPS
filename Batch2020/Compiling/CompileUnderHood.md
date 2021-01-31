## Compilation

### Pre-processing

`cpp` is C Preprocessor

```sh
cpp ../../sum/src/main.c -o main.i
cpp ../../sum/src/sum.c -o sum.i
```

`cc1` is Compiler Proper, and it compiles pre-processed C file to assembly
code.

### Compilation

```sh
/usr/lib/gcc/x86_64-linux-gnu/7/cc1  sum.i 
/usr/lib/gcc/x86_64-linux-gnu/7/cc1 main.i 
```

### Assembling

Assembler `as` convert assemblt code (.s) to machine language, called object
code (.o)

```sh
as sum.s -o sum.o
as main.s -o main.o
```

Various such object files (.o) are linked by linker `ld` to library
functions and other objects.

### Linking

```sh
ld /usr/lib/x86_64-linux-gnu/crt1.o\
/usr/lib/x86_64-linux-gnu/crti.o\
/usr/lib/x86_64-linux-gnu/crtn.o\
main.o sum.o\
-dynamic-linker\
/lib64/ld-linux-x86-64.so.2\
-lc -o main
```

## Execution

```sh
./main
```