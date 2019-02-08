#include <stdio.h>

int main() {
  char *search;
  char lettersGuessed[] = "abcde";
  
  
  char letter='a';

  search = strchr (lettersGuessed, letter);

  if (search != NULL)
    printf ("Letter Guessed Already");

  return 0;
}
