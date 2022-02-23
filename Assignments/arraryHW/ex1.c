#include"stdio.h"

/* Ex1: Multidimensional Array in c */

int main(){

  float arr1[2][2];
  float arr2[2][2];

  int i, j;

  printf("Enter elenemts of 1st matrix\n");
  for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
      printf("enter a%d%d: ", i + 1, j + 1);
      scanf("%f", &arr1[i][j]);
    }
  }

  printf("Enter elenemts of 2nd matrix\n");
   for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
      printf("enter b%d%d: ", i + 1, j + 1);
      scanf("%f", &arr2[i][j]);
    }
  }

  float sum[2][2];
  for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
      sum[i][j] = arr1[i][j] + arr2[i][j];
    }
  }


  printf("sum of matrix:\n");
  for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
      printf("%0.1f    ", sum[i][j]);
    }
    printf("\n");
  }


  return 0;
}