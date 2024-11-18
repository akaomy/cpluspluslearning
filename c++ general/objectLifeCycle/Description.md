## General information on object life cycle:

* scope of a variable - region of code *where* a variable can be accessed
  * global scope
  * local scope
  * class scope (public, protected, private)
  * namespace scope
* object - region of a memory that has value and type.
Declared variable creates an object with denoted type and maybe value during program execution.
* lifetime of an object - *how long* an object exists in computer memory during program execution.

1) stack based memory
    - deleted automatically once it reached out of scope
2) heap based memory
<br />
   - delete memory once it is not needed anymore:
<br />
<code>
   int* data1 = new int(3);
   delete data1;

   int* data2 = new int[3];
   delete [] data2;

   Entity* two = new Entity();
   delete two;
</code>
<br />

more TBD
