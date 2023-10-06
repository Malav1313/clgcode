#include <stdio.h>

int main() {
  
  int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  
  printf("Original matrix:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  
  printf("Reverse matrix:\n");
  for (int i = 2; i >= 0; i--) {
    for (int j = 2; j >= 0; j--) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}
