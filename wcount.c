#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int WordCount(FILE *file) {
  /*
  Word Count counts the number of words in a given file
  @file: the FILE that the function will count the words of
  @returns: the number of words in the file
          */
  char c;
  bool inWord = false;
  int wordCount = 0;
  while (!feof(file)) {
    fscanf(file, "%c", &c);
    if (isspace(c) || c == '\n' || c == '\t') {
      inWord = false;
    } else if (inWord == false) {
      inWord = true;
      wordCount++;
    }
  }
  return wordCount;
}

int main(int argv, char **argc) {
  /*
  Main takes in the arguments from terminal and calls the necessary function to
  eventually print the number of words to the user.
  @argv: the number of arguments passed to the program
  @argc: the actual arguments in the form of an array of characters
  @returns 0 if the program runs sucessfully, another exit code if otherwise
          */
  FILE *file = fopen(argc[1], "r");

  fseek(file, 0L, SEEK_END);
  long sz = ftell(file);
  rewind(file);

  if (sz == 0) {
    printf("There are 0 word(s).");
    exit(0);
  }
  // char *word = (char *)malloc((sz + 1) * sizeof(char));

  int totalWords = WordCount(file);
  printf("There are %d word(s).", totalWords);
}
