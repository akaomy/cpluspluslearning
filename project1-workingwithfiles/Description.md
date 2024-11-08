# General information about working with files, i/o c++ library and related 

## Binary vs text files
<pre>
Aspect              | Text Files                        | Binary Files
-------------------------------------------------------------------------------------------------
Data Representation | Human Readable (ASCII/Unicode)    | Machine Readable (raw binary)
Storage             | characters like abcd123@#4        | binary like 10101010
Efficency           | Larger size files, slower to read | Smaller size files, faster to read
Usage               | for text data -> .txt/.cpp/.json  | for non-text data -> .jpeg/.mp3/.mp4 
Editing             | Any text editor                   | specific software is needed to read one
</pre>


## To read a file, we must

1) Know its name
2) Open it (for reading)
3) Read in the characters
4) Close it (though that is typically done implicitly)

## To write a file, we must

1) Name it
2) Open it (for writing) or create a new file of that name
3) Write out our objects
4) Close it (though that is typically done implicitly)