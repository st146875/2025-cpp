#include<stdio.h>
#include<string.h>

int Compare(char s1[], char s2[]);
int main(int argc, char** argv)
{
    char s1[100];
    char s2[100];
    scanf("%s", s1);
    scanf("%s", s2);
    if (Compare(s1, s2)) 
    {
        printf("yes\n");
    }
    else 
    {
        printf("no\n");
    }
	return 0;
}
int Compare(char s1[], char s2[])
{
	return strcmp(s1, s2) == 0;
}