#include"stdio.h"
#include"stdbool.h"

/* Search an element in array */

int main(){
  int size = 0;
  printf("enter array size: ");
  scanf("%d", &size);
  int arr[size];

  int i = 0;
  for(i = 0; i < size; i++){
    scanf("%d", &arr[i]);
  }

  printf("enter element to be searched: ");
  int element = 0;
  scanf("%d", &element);

  bool number_is_found = false;
  for(i = 0; i < size; i++){
    if(arr[i] == element){
      number_is_found = true;
      break;
    }
  }

  if(number_is_found) printf("found at position: %d\n", i + 1);
  else printf("not found!\n");

  return 0;
}