#include<stdio.h>
#include<string.h>

int CountWords(char str[]);
int main(int argc, char** argv)
{
    char str[1000];
    fgets(str, sizeof(str), stdin);
    printf("%d\n", CountWords(str));
	return 0;
}
int CountWords(char str[]) 
{
    int count = 0;
    char* word = strtok(str, " \n");
    while (word != NULL) 
    {
        count++;
        word = strtok(NULL, " \n");
    }
    return count;
}