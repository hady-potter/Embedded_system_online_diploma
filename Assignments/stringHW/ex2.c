#include"stdio.h"

/* Ex2: find length of string */

int main(){

  char text[50];
  printf("Enter string: ");
  gets(text);

  int i = 0;
  while(text[i] != '\0'){
    i++;
  }

  printf("length: %d", i);

  return 0;
}