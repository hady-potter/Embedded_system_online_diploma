#include"stdio.h"

/* Ex2: calculate Average Using Arrays */

int main(){
  float arr[10];
  int n = 0;
  printf("Enter number of data (less than 10): ");
  scanf("%d", &n);
  printf("n = %d\n", n);
  if(n > 10) return 1;


  int i;
  for(i = 0; i < n; i++){
    printf("%d. Enter number: ", i + 1);
    scanf("%f", &arr[i]);
  }

  float sum = 0;
  for(i  =0; i < n; i++){
    sum += arr[i];
  }

  printf("Average = %0.2f\n", sum / n);

 

  return 0;
}