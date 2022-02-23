#include"stdio.h"

/* Ex3: Transpose matrix */

int main(){

  int row = 0, col = 0;
  printf("Enter row and column of matrix: ");
  scanf("%d%d", &row, &col);

  int matrix [row][col];
  int i, j;

  printf("Enter elements of matrix:\n");
  for(i = 0; i < row; i++){
    for(j = 0; j < col; j++){
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &matrix[i][j]);
    }
  }

  for(i = 0; i < row; i++){
    for(j = 0; j < col; j++){
      printf("%d  ", matrix[i][j]);
    }
    printf("\n");
  }



  int trans[col][row];
  for(i = 0; i < col; i++){
    for(j = 0; j < row; j++){
      trans[i][j] = matrix[j][i];
    }
  }

  printf("transpose of matrix:\n");
  for(i = 0; i < col; i++){
    for(j = 0; j < row; j++){
      printf("%d   ", trans[i][j]);
    }
    printf("\n");
  }

  return 0;
}