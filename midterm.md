<!---### Bowie State University
### Department of Computer Science
### COSC 330, Systems Programming, Fall 2024
### Midterm Exam
### Dr. Devharsh Trivedi--->


### Your name: 

### Your ID#:


#### Question 1 (10 points)
Explain the following ```Unix``` commands and provide examples of their usage:
```
ls
pwd
mkdir
rm
cp
```

#### Question 2 (10 points)
Describe the purpose of the ```grep``` command and how to use regular expressions. Provide an example of using ```grep``` to search for a specific pattern in a file.


#### Question 3 (10 points)
Explain the concept of pipes and how they connect one command's output to another's input. Provide an example of using pipes to combine multiple commands.


#### Question 4 (10 points)
Describe the ```chmod``` command and how it changes file permissions. Explain the meaning of the different permission bits (read, write, execute) for the owner, group, and others.


#### Question 5 (60 points)
Write a ```C``` program in ```read.c``` file that reads ```sample.txt``` file and counts the number of lines, words, and characters in the file when a user presses ```1``` or simply prints the file if a user presses ```2``` (similar to ```cat``` utility).

```
CAT(1)
cat -- concatenate and print files
cat [-belnstuv] [file ...]
```

The ```cat``` utility reads files sequentially, writing them to the standard output. The file operands are processed in command-line order. The ```cat``` reads from the standard input if the file is a single dash (-) or absent. If a file is	a ```Unix``` domain socket, ```cat``` connects to it and reads it until ```EOF```. This complements the ```Unix``` domain binding capability in	```inetd(8)```. The ```cat``` utility exits ```0``` on success and ```>0``` if an error occurs.

<!--The ```cat```	utility	complies with the IEEE Std 1003.2-1992 ("POSIX.2") specification. The flags [-belnstv] are	extensions to the specification.

A ```cat``` utility appeared in Version 1 AT&T UNIX. Dennis Ritchie designed and wrote the first man page. It appears to have been for ```cat```.--->
