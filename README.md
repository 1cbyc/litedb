# litedb

i am trying to build a custom database management system in C that is lightweight and involves core database concepts i am learning, and data structures. i hope i get this right.

by the way, i am calling it "litedb" cause i saw the name somewhere. since it is open source, i don't think anyone can shout about it. so, let's call it "LiteDB by 1cbyc".

## i should talk about my process too
- since i want to implement a file-based storage for data persistence, i need to make sure it can atleast append records to file, read all records from file and have a simple fixed-width format
- first i wrote the header file for the storage engine (include/litedb.h); and then, 