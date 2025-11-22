#include<stdio.h>
#include<string.h>

unsigned char Change(unsigned char c);
int main(int argc, char** argv)
{
    unsigned char c;
    scanf("%c", &c);

    unsigned char result = Change(c);
    printf("%c\n", result);
	return 0;
}
unsigned char Change(unsigned char c)
{
    char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
    char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char* lower_pos = strchr(lowercase, c);
    if (lower_pos != NULL) 
    {
        int index = 0;
        index = lower_pos - lowercase;
        return uppercase[index];
    }
    char* upper_pos = strchr(uppercase, c);
    if (upper_pos != NULL)
    {
        int index = 0;
        index = upper_pos - uppercase;
        return lowercase[index];
    }
    return c;
}
