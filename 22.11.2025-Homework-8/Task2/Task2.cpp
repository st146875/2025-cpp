#include<stdio.h>
#include<string.h>

unsigned char ToUpper(unsigned char c);
int main(int argc, char** argv)
{
    unsigned char c;
    scanf("%c", &c);
    unsigned char result = ToUpper(c);
    printf("%c\n", result);
	return 0;
}
unsigned char ToUpper(unsigned char c)
{
	char low[] = "abcdefghijklmnopqrstuvwxyz";
	char up[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char* position = strchr(low, c);
    if (position != NULL)
    {
        int index = 0;
        index = position - low;
        return up[index];
    }
    return c;
}