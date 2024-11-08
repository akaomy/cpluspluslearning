# Description
an attempt to make basic compiler for c++ for better understanding how programs run and being translated to machine code

## Language Scope
- basic arithmetics

## Target
x86 Architecture

## Potential Tools
general:
- Scanner generator (lexical)
- Parser Generator (syntax)
- Syntax-directed translation engines
- Code-generators
- Data-flow analysis engines
- Compiler-construction toolkits

specific:
- LLVM or Clang for compiling to machine code
- Lex or Yacc (Flex or Bison) for lexical and syntactic parsers
- ANTLR for parsing

## Stages
1) Lexical Analyzer: read source code and convert it to tokens
2) Parser: build a syntax tree from these tokens
3) Code Generation: produce simple assembly

## Testing
- write test cases for each math operation in scope (+, -, /, *)
- test individual stage before integration

## Supporting resources
- edX / Coursera
- LLVM project
- Book: Compilers: Principles, Techniques, and Tools (the “Dragon Book”)
