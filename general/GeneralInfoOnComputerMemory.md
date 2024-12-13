# High level information on memory management and data format

## how data is stored in a computer

Any software program, test, image, audio etc. file is stored in a persistent computer memory in binary form (zeros and ones). 
The 'bigger' the size of those programs or files the more zeros and ones are stored.

## how does it work?

1. persistent memory storage (slow to access data) 
2. volatile memory storage (allows quick access of data)
3. CPU (central data processing unit)

When starting a program data comes from persistent to volatile memory for CPU use.
<br />
Volatile memory storage works as buffer between persistent storage and CPU.
<br />

- Most high level programming languages do not allow users to manage volatile memory usage directly, c++ does.
- Volatile memory has limitations on how much information it can hold during program execution. <br/>
E.g. If you save 2 kilobyte data in a memory that can hold only 1 kilobyte, you'll get program abortion and error message.
To avoid this situation, pay close attention to freeing up memory on timely basis.

## information storage format:

smallest unit of information: one memory cell = 1 bit, which is 0 or 1 <br />
8 bits = 1 byte <br />

- Modern systems can access only 1 byte or larger. People often think of a memory cell as 1 byte.
- Numbering convention for bits within a byte in many systems starts with 7 (Most Significant Number) on the left and 
goes to 0 (Least  significant Number) on the right -> 76543210
<br />
- each byte has its own address which helps computer to find this byte in the memory

## how is text represented in computer memory?

- When computer saves a e.g. word each letter is being encoded in the system in a form of a number.
And each integer then being translated into binary.
- The binary encoding of files depend on their type. E.g.
text files use character encoding like ASCII or UTF-8, while image files use formats like JPEG or PNG.
<br />
E.g.
<code>
char: D -> 104 (ASCII) -> [][1][1][0][1][0][0][0]
</code>

## Basic Data Types

- byte - allocates 8 bits or numbers from -127 to 128
- short - allocates 2 bytes or numbers from -32678 to 32767
Note: if you store for example integer 7 in as short, memory storage will allocate 2 bytes to byte-worth data. 
Meaning that 1 byte is going to be allocatted, but never used.
- int - allocates 4 bytes
- long - allocates 8 bytes