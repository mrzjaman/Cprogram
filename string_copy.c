#include<stdio.h>
#define MAX 15

int main()
{
        char src[MAX];
        char dest[MAX];
        int i = 0;

        printf("enter the string you wish to process\n");
        fgets(src, MAX, stdin);

        while(src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = '\0';

        printf("%s\n", dest);
        return 0;
}
