#include <stdio.h>
#include <ctype.h> // tolower() fonksiyonu için gerekli

int main () {
  char string[] = "happynewyear";
  char character;
  int counter = 0;
  int size = sizeof(string)-1;
  printf("Enter a character: ");
  //Take an input
  while (scanf(" %c", &character) != 1 || (character < 'a' || character > 'z') && (character < 'A' || character > 'Z')){
      printf("Error: You must enter a letter, not a number or special character.\n");
      printf("Enter a character: ");
  }
  character = tolower(character); //lower case
  // count character number in string
  for (int i = 0; i < size; i++) {
    if (character == string[i]) {
      counter++;
    }
  }
  printf("The character '%c' appears %d times in the text.\n", character, counter);
  
  return 0;
}
