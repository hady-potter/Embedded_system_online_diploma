#include"stdio.h"

/* find the frequency of char in string */

int main(){

  char message[50];
  printf("string: ");
  gets(message);

  char c;
  printf("enter char to find its frequency: ");
  scanf("%c", &c);


  int counter = 0;
  int i = 0;
  while(message[i] != '\0'){
    if(message[i] == c){
      counter++;
    }
    i++;
  }
  printf("Frequency of %c = %d\n", c, counter);

  return 0;
}