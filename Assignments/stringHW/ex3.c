#include"stdio.h"
#include"string.h"

/* Ex3: reverse string */

int main(){

  char str[50];

  printf("string: ");
  gets(str);

  int i = 0;
  for(i = 0; i < strlen(str) / 2; i++){
    char temp = str[i];
    str[i] = str[strlen(str) - i - 1];
    str[strlen(str) - i - 1] = temp;
  }

  for(i = 0; i < strlen(str); i++){
    printf("%c", str[i]);
  }
  printf("\n");

  return 0;
}