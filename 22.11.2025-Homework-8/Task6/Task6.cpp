#include<stdio.h>
#include<string.h>

void LongestWord(char str[]);
int main(int argc, char** argv)
{
    char str[1000];
    fgets(str, sizeof(str), stdin);
    LongestWord(str);
	return 0;
}
void LongestWord(char str[]) 
{
    char longest[1000] = "";
    int max_length = 0;

    char* word = strtok(str, " \n");

    while (word != NULL)
    {
        int length = 0;
        length = strlen(word);
        if (length > max_length)
        {
            max_length = length;
            strcpy(longest, word);
        }
        word = strtok(NULL, " \n");
    }

    printf("%s\n%d\n", longest, max_length);
}
