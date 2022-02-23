#include"stdio.h"

/* Ex4: insert eemet in array */

int main(){

  int arr[10];
  int n = 0;
  printf("Enter array size (less than 10): ");
  scanf("%d",&n);
  if(n > 10) return 1;

  int i;
  for(i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }

  int element = 0;
  int location = 0;
  printf("enter element to be inserted: ");
  scanf("%d", &element);

  printf("enter location: ");
  scanf("%d", &location);

  for(i = n; i > (location - 1); i--){
    arr[i] = arr[i - 1]; 
  }

  arr[i] = element;


  for(i = 0; i < n + 1; i++){
    printf("%d ", arr[i]);
  } 



  return 0;
}