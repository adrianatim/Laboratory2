#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
   int rows, columns;
   /*read from a textfile a matrix and display it on the console*/
   FILE *filename;
   filename = fopen("MatrixFile.txt", "r");
   fscanf(filename, "%d %d", &rows, &columns);

   int **matrix;
   matrix = (int**)malloc(rows*sizeof(int*));

   for(int i=0; i<rows; ++i)
   {
	   matrix[i] = (int*)malloc(columns*sizeof(int*));
	   for(int j=0; j<columns; ++j)
	   {
		   fscanf(filename, "%d",&matrix[i][j]);
	   }
   }
   fclose(filename);
   /*write the matrix to a binary file */
   FILE *binaryFile;
   binaryFile = fopen("MatrixOutput.bin", "wb");
   for(int i=0; i<rows; ++i)
   {
	   for(int j=0; j<columns; ++j)
	   {
		   printf("%d ", matrix[i][j]);
		   fprintf(binaryFile, "%d ", matrix[i][j]);
	   }
	   printf("\n");
	   fprintf(binaryFile, "\n");
   }
   fclose(binaryFile);
   for(int i=0; i<rows; ++i)
   {
	   free(matrix[i]);
   }
   free(matrix);
}
