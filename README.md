# Word-Count
## Problem
Write a program that counts the number words contained within a file

## Specifications
  - A word is considered to be 1 or more consecutive nonwhitespace characters
  - A character is considered whitespace if isspace would return true when called on that character

The program should work on a file regardless of
  - The file's size
  - The number of lines in the file
  - The number of words in the file
  - The size of a line
  - The size of a word
## Restrictions
Must not allocate fixed sized arrays for this problem. 
  - As an example, a fixed size array could be an array of 100 characters or 100 ints regardless of whether you statically allocated it, char array[100], or dynamically allocated it, char another_array = (char*)(calloc(100, sizeof(char)).

## Assumptions
Input will always be valid

## Valid Input
  - File Path: the path to the text file whose words we want to count
      - This will be passed as the first command line parameter
## Requirements
Must use at least 2 functions in your program

# Examples

## Example 1
Assume that the file fun.txt contains the following:

Computer sciences classes are great!
Even though I spend all my time doing homework :(
./wcount.out fun.txt

There are 15 word(s).
