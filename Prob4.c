#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
 int **matrix;
 int n, contor=1;
 printf("Give the number of rows/columns: ");
 scanf("%d", &n);
 matrix = (int**)malloc(n*sizeof(int*));
 for(int i=0; i<n; ++i)
 {
   matrix[i]=(int*)malloc(n*sizeof(int*));
   for (int j=0; j<n; ++j)
   {
	   matrix[i][j] = contor;
	   printf("%d ", matrix[i][j]);
	   contor+=1;
   }
   printf("\n");
 }
 int sum;
 for(int i=0; i<n; ++i)
 {
	 sum = 0;
	 for(int j=0; j<n;++j)
	 {
		 if(matrix[j][i]%2!=0)
			 sum = matrix[j][i]+sum;
	 }
	 printf("%d ", sum);
 }
 printf("\n");
 for(int i=0; i<n; ++i)
 {
	 free(matrix[i]);
 }
 free(matrix);

}
