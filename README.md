# Split

Challenge issued by **@baileyn**.

Write a function that will take an std::string and split the string by a specified delimiter. 

Feel free to use anything in the standard library. No external libraries may be used, though. 

Ideally the function will have a way of either returning, or populating, a collection with the tokens.

Bonus: An optional parameter for the maximum amount of tokens to split the string into. 

Examples:
split(“Hello world”, “ “) // “Hello”, “world”
split(“What$&are$&you$&talking$&about?”, “$&”, 3) // “What”, “are”, “you$&talking$&about”

Also note: the use of google is permitted, but only for looking up documentation. Don’t copy someone else’s implementation.

## Getting Started

### Prerequisites

* [GNU Compiler Collection](https://gcc.gnu.org/)
* [GNU Make](https://www.gnu.org/software/make/)

### Installing

Run the makefile in the project directory using the command

```
make
```

An executable named strsplit.exe will be compiled in the project folder.