#include<stdio.h>
#include<string.h>

char Duplicate(char str[]);
int main(int argc, char** argv)
{
    char str[1000];
    scanf("%s", str);
    char duplicate = Duplicate(str);
    printf("%c\n", duplicate);
	return 0;
}
char Duplicate(char str[]) 
{
    int len = 0;
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (str[i] == str[j]) 
            {
                return str[i];
            }
        }
    }
    return '\0';
}