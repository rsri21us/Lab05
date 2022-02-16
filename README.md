# Lab05
raverse the file hierarchy recursively and list all the sub 
directories and the files in these sub directories

# description
The goal of the program is to read the path of a folder and display all the folders, files and sub folders.

# Getting started
These instructions will give you a copy of the project up and running on your local machine for development and testing purposes.

# prerequisites
Requirements for the software and other tools to build, test and push
1. gcc - GNU Compiler Collection
2. Text editor

# installing
A step by step series of examples that tell you how to get a development environment running
1. open the text editor
2. create a c programming file
3. save the file with .c extension.

# Running the tests

functionality of the program:

Program takes the directory path as command line argument, it is being sent to a function traverse, and it performs some conditions and prints the directories and files.

In this program, we have a main method and traverse method.

traverse function takes the path as input and uses readdir method to read the file and checks if it is a directory or not, if it is a directory it displays and recursively calls the same function and updates the path. It recursively calls the function and prints all the files and directories in order.

In addition to the file, it prints the type of file and the count of that particular file. 


In general a c program is executed in this way:
1. To compile the file, type the command 'gcc filename.c'
2. To run the file, type './a.out'

To test our program, follow the below steps

```gcc sample.c

./a.out /Users/rnvsrivastava/Directory/ 

[1] file1.txt (regular file)
[2] .DS_Store (regular file)
[3] Sub_Directory_1 (directory)
[1] file2.txt (regular file)
[2] file1.txt (regular file)
[3] .DS_Store (regular file)
[4] Sub_Directory_Sub_Dir1 (directory)
[4] Sub_Directory_2 (directory)
[1] file3.txt (regular file)
[2] file4.txt (regular file)
[3] .DS_Store (regular file)
[4] Sub_Directory_Sub_Dir2 (directory)
[5] Sub_Directory_3 (directory)
[1] file5.txt (regular file)
[2] file6.txt (regular file)
(base) rnvsrivastava@rnvs-MacBook-Air Lab05 % ./a.out /Users/rnvsrivastava/Directory/
[1] file1.txt (regular file)
[2] .DS_Store (regular file)
[3] Sub_Directory_1 (directory)
[1] file2.txt (regular file)
[2] file1.txt (regular file)
[3] .DS_Store (regular file)
[4] Sub_Directory_Sub_Dir1 (directory)
[4] Sub_Directory_2 (directory)
[1] file3.txt (regular file)
[2] file4.txt (regular file)
[3] .DS_Store (regular file)
[4] Sub_Directory_Sub_Dir2 (directory)
[5] Sub_Directory_3 (directory)
[1] file5.txt (regular file)
[2] file6.txt (regular file)```
    


# Author
Sri Vastava RNV

# Acknoledgement

I thank my TA's and Dr. Mahmut Unan for helping me learn everyday. 


