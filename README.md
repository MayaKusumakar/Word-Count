# Word-Count
## Problem
Write a program that counts the number words contained within a file

## Specifications
A word is considered to be 1 or more consecutive nonwhitespace characters
A character is considered whitespace if isspace would return true when called on that character
Your program should work on a file regardless of
The file's size
The number of lines in the file
The number of words in the file
The size of a line
The size of a word
Restrictions
You may not allocate fixed sized arrays for this problem. If you do you will receive ZERO CREDIT on this assignment.
As an example, a fixed size array could be an array of 100 characters or 100 ints regardless of whether you statically allocated it, char array[100], or dynamically allocated it, char another_array = (char*)(calloc(100, sizeof(char)).
You can of course still make space in your program, but it shouldn't be an arbitrary, fixed amount that never changes
## Assumptions
Input will always be valid

## Valid Input
File Path: the path to the text file whose words we want to count
This will be passed as the first command line parameter
## Requirements
There must be a comment at the top of your program describing what it does
Each function in your program must have a comment
Describing what the function does
Describing the meaning of each parameter
Describing what the function returns
You must use have at least 2 functions in your program

## Example 1
Assume that the file fun.txt contains the following:

Computer sciences classes are great!
Even though I spend all my time doing homework :(
./wcount.out fun.txt

There are 15 word(s).
