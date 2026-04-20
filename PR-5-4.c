#include <stdio.h>
int main() {
    int rows,cols,i,j,r,c;
    int rowSum=0, colSum=0;
    printf("Enter the array row size:");
    scanf("%d", &rows);
    printf("Enter the array column size:");
    scanf("%d", &cols);
    int a[rows][cols];
    printf("\nEnter array elements:\n");
    for (i=0;i<rows;i++)
	{
        for (j=0;j<cols;j++)
		 {
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter row number:");
    scanf("%d",&r);
    if (r>=0&&r<rows) 
	{
        printf("Elements of row %d:", r);
        for (j=0;j<cols;j++) {
            printf("%d", a[r][j]);
            if (j<cols-1) 
			printf(", ");
            rowSum+=a[r][j];
        }
        printf("\nThe sum of row %d: %d\n", r, rowSum);
    } else {
        printf("Invalid row\n");
    }
    printf("\nEnter column number: ");
    scanf("%d",&c);
    if (c>=0&&c<cols) {
        printf("Elements of column %d: ",c);
        for (i=0;i<rows;i++) {
            printf("%d",a[i][c]);
            if (i<rows-1) printf(", ");
            colSum+=a[i][c];
        }
        printf("\nThe sum of column %d: %d\n",c,colSum);
    } else {
        printf("Invalid column\n");
    }
}
/*
output
Enter the row size:3
Enter the size:3

Enter array elementsarr[0][0] = 1
arr[0][1] = 2
arr[0][2] = 3
arr[1][0] = 4
arr[1][1] = 5
arr[1][2] = 6
arr[2][0] = 7
arr[2][1] = 8
arr[2][2] = 9

Enter row number: 0

Elements of row1 ,2 ,3 ,
Sum of row: 6

Enter column number: 2
Elements of column : 3 ,6 ,9 ,
Sum of column: 18
*/