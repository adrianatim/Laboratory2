#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv)
{
    char **string;
    printf("Give the natural number: \n");
    char input[21];
    fgets(input, 10, stdin);
    int number;
    number = (int) atoi(input);
    printf("%d\n", number);
    
    string = (char**)malloc(number * sizeof(char*));
    
    printf("nr: %d \n", number);
    for(int i=0; i<number; ++i)
    {
        printf("the center\n");
        fgets(input, 20, stdin);
	printf("%s\n",input);
	string[i] = malloc(strlen(input) * sizeof(char*));
	strcpy(string[i], input);
    }
    printf("Now they are displayed in the textfile 'OutputTextFile.txt'.\n To sort them after ASCII code you need to use the function 'sort OutputTextFile.txt'\n");
    
    FILE *filename;
    filename = fopen("output/OutputTextFile.txt", "w+");
    printf("file opened...");
    for(int i=0; i<number; ++i)
    {
        fputs(string[i], filename);
        
    }

    fclose(filename);
    for(int i=0; i<number; i++)
    {
        free(string[i]);
    }
    free(string);
}
