<h1 align="center">
  0x16. C - Simple Shell
</h1>

<p align="center">
   📄 🚀
</p>

<p align="center">
  <strong>
   Description
  </strong>
</p>

<p align="center">
This project is an implementation of the shell created as a Milestone Project for the C code at ALX Africa Software Engineering. </br>
The gates of shell is a project in the first trimester, that helps student to understand the advanced
concepts behind the shell program include process, system call, bit manipulation, file managment, error handling ... </br>
Shell is a simple UNIX command interpreter that replicates functionalities of the simple shell (sh). </br>
This program was written entirely in C Language.
</p>


 ## Description :
This is a shell written in [C](https://en.wikipedia.org/wiki/C_(programming_language)).
It is based on [the Thompson Shell](https://en.wikipedia.org/wiki/Thompson_shell).


## Features
* Display a prompt and wait for the user to type a command. A command line always ends with a new line.
* If an executable cannot be found, print an error message and display the prompt again.
* Handle errors.
* Hndling the “end of file” condition (Ctrl+D)
* Hanling the command line with arguments
* Handle the PATH
* Support the exit features and the exit status
* Handle the Ctrl-C to not terminate the shell
* Handling the command seperator `;`
* Handling `&&` and `||` logical operators
* Handle variable replacements `$?` and `$$`
* Handle the comments `#`
* Support the history feature
* Support the file input
