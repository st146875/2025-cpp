#include<stdio.h>
#include<string.h>

int Palindrome(char str[]);
int main(int argc, char** argv)
{
    char str[1000];
    scanf("%s", str);

    if (Palindrome(str)) 
    {
        printf("yes\n");
    }
    else 
    {
        printf("no\n");
    }
	return 0;
}
int Palindrome(char str[])
{
    int len = 0;
    len = strlen(str);
    for (int i = 0; i < len / 2; i++) 
    {
        if (str[i] != str[len - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}