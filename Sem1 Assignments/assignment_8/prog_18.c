#include<stdio.h>    
#include<stdlib.h>
void transpose(int a[2][2], int b[2][2]) {

  int row, col;

  for (row = 0; row < 2; row++) {
    for (col = 0; col < 2; col++) {
      b[row][col] = a[col][row];
    }
  }

}
int main(){  
    int i, j, r, c;
    //system("clear");  
    printf("enter the number of row=");    
    scanf("%d",&r);    
    printf("enter the number of column=");    
    scanf("%d",&c); 
    int a[r][c], b[r][c];   
    printf("enter the matrix element=\n");    
    for(i=0;i<r;i++){    
        for(j=0;j<c;j++){    
            scanf("%d",&a[i][j]);    
        }    
    }
    transpose(a, b);

    printf("Transpose of matrix P is:\n\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}