// The random-access memory is volatile, and its content is lost once the program terminates.
// In order to persist the data forever we use files. 
// A file is data stored in a storage device. 
// A C program can talk to the file by reading content from it and writing content to it. 

// Actually hota kya hai ki hum jab file bnata hai c ma and usko run karte hai tab temporarely ek exe file banti hai jo ki ram ma load hoker bahut hi fast execute ho jati hai par execute hona ka badh ram uss data ko delete kar deta hai.

// . What is a File in C?
/*A file is a collection of data stored permanently on a storage device (like HDD/SSD).
In C, we use file handling functions to create, open, read, write, and close files.
Unlike normal variables, data in files remains even after the program ends.*/

// Why File Handling?
/*Without files, data is lost when the program ends.
Files allow:
Permanent storage
Reading/writing large data
Easy data transfer between programs*/