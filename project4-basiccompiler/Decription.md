# General info on the main concepts

## Language processing system:
1. source program -> [preprocessor] 
2. modified source program -> [Compiler] (<= my focus)
3. target assembly program -> [assembler] 
4. relocatable machine code - [linker / loader] 
5. target machine code


## Compiler structure (2)
1. Analysis (front end):
   1. breaks up program on to basic pieces
   2. imposes grammatical structure on them
   3. creates intermediate representation based on those pieces
   4. checks for syntax errors
   5. creates symbol-table
2. Synthesis (back end): <br />
creates target program (e.g. assembly) from intermediate 
representation and information in the symbol-table


## Phases of compiler
1. Character stream -> [lexical analyzer]
2. Token stream -> [syntax analyzer]
3. Syntax tree -> [semantic analyzer]
4. Syntax tree -> [intermediate code generator]
5. Intermediate representation -> [machine independent code optimizer]
6. Intermediate representation -> [code generator]
7. Target machine code -> [machine dependent code optimizer] -> target machine code


## Symbol-table


## Lexical Analysis (scanning)
Reads stream of characters that makes up the source 
program and groups them together into meaningful sequences - lexemes.
For each lexeme it outputs token: <token-name, attribute-name>.<br />
e.g. <br />
code:                       position = initial * rate * 60; <br />
after lexical analysis:     <id, 1> <=> <id, 2> <+> <id, 3> <*> <60>

## Syntax Analysis (parsing)
Parsing incoming tokens and gets their <token-name> to create tree-like intermediate representation
-> syntax tree in which each node represents an operation and each child represents arguments of operation.

e.g. of syntax tree: </pre>

            <=>
    <id, 1>         <+>
            <id, 2>         <*>      
                    <id, 3>     <60>


## Semantic Analysis
Uses syntax tree and symbol-table to check for semantic consistency with the language definition


## Intermediate Code Generation
2 properties: easy to produce, easy to translate to target language. <br />
Tree-address code - sequence of assembly-like instructions with three operands per instruction. <br/>
Each operant acts like a register.
e.g. 
<br /> 
<code>
t1 = inttofloat(60)<br />
t3 = id3 * t1<br />
t3 = id2 + t2<br />
id1 = t3<br />
</code>


## Code Optimization
Aims to shorten amount of operations and reduce running time 
of the code produced by previous stage - intermediate code generation.
e.g. 
<br />
from: 
<br/>
<code>
t1 = inttofloat(60)<br />
t3 = id3 * t1<br />
t3 = id2 + t2<br />
id1 = t3<br />
</code>
<br/>
to:
<br/>
<code>
t1 = id3 * 60.0<br />
id1 = id2 + t1<br />
</code>


## Code Generation
Takes generated code on optimization stage and maps it to the target language (e.g. Assembly). <br /> 
e.g. <br />
The first operand of each instruction specifies destination. <br />
The F in each instruction - floating-point numbers. <br />
'#' in 60.0 as an immediate constant.<br />
<pre><code>
LDF R2, id3             // loads the contents of address id3 into register R2 <br />
MULF R2, R2, #60.0      //  multiplies it with floating-point constant 60.0 <br />
LDF R1, id2             // moves id2 into register Rl <br />
ADDF R1, R1, R2         // adds to it the value previously computed in register R2.<br />
STF id1, R1             // value in register R1 is stored into the address of id1
</code></pre>
<br/>

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        