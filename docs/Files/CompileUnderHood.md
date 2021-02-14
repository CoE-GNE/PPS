## Compilation (All-in-one)

Program has 4 files, 2 header (.h) and 2 C source code files (.c)

See files at [https://github.com/CoE-GNE/PPS/tree/master/Batch2020/sum/src](https://github.com/CoE-GNE/PPS/tree/master/Batch2020/sum/src)

```
cd build

// Following commands are issued in build folder

gcc ../src/*.c
hsrai@ubuntu:~/public_html/PPS2020/PPS/Batch2020/sum/build$ ./a.out 
Enter two number: 3 4

Sum: 3.000000 + 4.000000 = 7.000000
```

## Compilation (Step by step)

[![](https://mermaid.ink/img/eyJjb2RlIjoiZ3JhcGggVERcbiAgICBEb3RDX0ZpbGVbL1wibWFpbi5jPGJyLz5Tb3VyY2UgQ29kZSBGaWxlXCIvXSAtLT4gY3BwW1tcIlByZS1wcm9jZXNzb3IgPGJyLz4gY3BwIFwiXV1cbiAgICBEb3RIX0ZpbGVzWy9cIm1haW4uaDxici8-c3RkaW8uaDxici8-I2luY2x1ZGVkPGJyLz5oZWFkZXIgZmlsZXNcIi9dIC0tPiBjcHBcbiAgICBjcHAgLS0-IERvdElfRmlsZVsvXCJtYWluLmk8YnIvPkV4cGFuZGVkPGJyLz5Tb3VyY2UgQ29kZTxici8-RmlsZVwiL11cbiAgICBEb3RJX0ZpbGUgLS0-IENvbXBpbGVyW1tcIkNvbXBpbGVyIDxici8-IGNjMVwiXV1cbiAgICBDb21waWxlciAtLT4gRG90U19GaWxlWy9cIm1haW4uczxici8-QXNzZW1ibGVyIEZpbGVcIi9dXG4gICAgRG90U19GaWxlIC0tPiBBc3NlbWJsZXJbW1wiQXNzZW1ibGVyIDxici8-IGFzXCJdXVxuICAgIEFzc2VtYmxlciAtLT4gRG90T19GaWxlWy9cIm1haW4ubzxici8-T2JqZWN0IENvZGUgRmlsZVwiL11cbiAgICBEb3RPX0ZpbGUgLS0-IExpbmtlcltbXCJMaW5rZXJcIl1dXG4gICAgTGlicmFyeUZ1bmNbL1wiTGlicmFyeSBGdW5jdGlvbnNcIi9dIC0tPiBMaW5rZXJbW1wiTGlua2VyIDxici8-IGxkXCJdXVxuICAgIExpbmtlciAtLT4gRXhlX0ZpbGVbL1wiYS5vdXQgb3IgbWFpbiBvciBtYWluLmV4ZTxici8-RXhlY3V0YWJsZSBGaWxlXCIvXVxuIiwibWVybWFpZCI6W10sInVwZGF0ZUVkaXRvciI6ZmFsc2V9)](https://mermaid-js.github.io/mermaid-live-editor/#/edit/eyJjb2RlIjoiZ3JhcGggVERcbiAgICBEb3RDX0ZpbGVbL1wibWFpbi5jPGJyLz5Tb3VyY2UgQ29kZSBGaWxlXCIvXSAtLT4gY3BwW1tcIlByZS1wcm9jZXNzb3IgPGJyLz4gY3BwIFwiXV1cbiAgICBEb3RIX0ZpbGVzWy9cIm1haW4uaDxici8-c3RkaW8uaDxici8-I2luY2x1ZGVkPGJyLz5oZWFkZXIgZmlsZXNcIi9dIC0tPiBjcHBcbiAgICBjcHAgLS0-IERvdElfRmlsZVsvXCJtYWluLmk8YnIvPkV4cGFuZGVkPGJyLz5Tb3VyY2UgQ29kZTxici8-RmlsZVwiL11cbiAgICBEb3RJX0ZpbGUgLS0-IENvbXBpbGVyW1tcIkNvbXBpbGVyIDxici8-IGNjMVwiXV1cbiAgICBDb21waWxlciAtLT4gRG90U19GaWxlWy9cIm1haW4uczxici8-QXNzZW1ibGVyIEZpbGVcIi9dXG4gICAgRG90U19GaWxlIC0tPiBBc3NlbWJsZXJbW1wiQXNzZW1ibGVyIDxici8-IGFzXCJdXVxuICAgIEFzc2VtYmxlciAtLT4gRG90T19GaWxlWy9cIm1haW4ubzxici8-T2JqZWN0IENvZGUgRmlsZVwiL11cbiAgICBEb3RPX0ZpbGUgLS0-IExpbmtlcltbXCJMaW5rZXJcIl1dXG4gICAgTGlicmFyeUZ1bmNbL1wiTGlicmFyeSBGdW5jdGlvbnNcIi9dIC0tPiBMaW5rZXJbW1wiTGlua2VyIDxici8-IGxkXCJdXVxuICAgIExpbmtlciAtLT4gRXhlX0ZpbGVbL1wiYS5vdXQgb3IgbWFpbiBvciBtYWluLmV4ZTxici8-RXhlY3V0YWJsZSBGaWxlXCIvXVxuIiwibWVybWFpZCI6W10sInVwZGF0ZUVkaXRvciI6ZmFsc2V9)

#### Markdown of flow-chart

```
graph TD
    DotC_File[/"main.c<br/>Source Code File"/] --> cpp[["Pre-processor <br/> cpp "]]
    DotH_Files[/"main.h<br/>stdio.h<br/>#included<br/>header files"/] --> cpp
    cpp --> DotI_File[/"main.i<br/>Expanded<br/>Source Code<br/>File"/]
    DotI_File --> Compiler[["Compiler <br/> cc1"]]
    Compiler --> DotS_File[/"main.s<br/>Assembler File"/]
    DotS_File --> Assembler[["Assembler <br/> as"]]
    Assembler --> DotO_File[/"main.o<br/>Object Code File"/]
    DotO_File --> Linker[["Linker"]]
    LibraryFunc[/"Library Functions"/] --> Linker[["Linker <br/> ld"]]
    Linker --> Exe_File[/"a.out or main or main.exe<br/>Executable File"/]

```

### Pre-processing

`cpp` is C Preprocessor

```sh
cpp <C source file with path> -o <Output file name with path>

cpp ../src/main.c -o main.i
cpp ../src/sum.c -o sum.i
```
You may read resulting file, in any text editor, like

```
nano sum.i
```

`cc1` is Compiler Proper, and it compiles pre-processed C file to assembly
code.

### Compilation

```sh
<cc1 with path> <pre-processed file>

/usr/lib/gcc/x86_64-linux-gnu/7/cc1  sum.i 
/usr/lib/gcc/x86_64-linux-gnu/7/cc1 main.i 
```

You may read resulting file (sum.s and main.s), in any text editor, like


```
nano sum.s
```

### Assembling

Assembler `as` convert assembled code (.s) to machine language, called object
code (.o)

```sh
as sum.s -o sum.o
as main.s -o main.o
```

You can't read it in text editor. In special programs, you may view it as
`0`s and `1`s, as below:

```
00000000: 01111111 01000101 01001100 01000110 00000010 00000001  .ELF..
00000006: 00000001 00000000 00000000 00000000 00000000 00000000  ......
000006e4: 01010011 01100001 01110100 00100000 01010011 01110010  Sat Sr
000006ea: 01101001 00100000 01000001 01101011 01100001 01100001  i Akaa
000006f0: 01101100 00100001 00000000 00000000 00000001 00011011  l!....
000006f6: 00000011 00111011 00111000 00000000 00000000 00000000  .;8...
000006fc: 00000110 00000000 00000000 00000000 00001100 11111110  ......
00000702: 11111111 11111111 10000100 00000000 00000000 00000000  ......
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