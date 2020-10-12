#include<stdio.h>
#define MAX 15

int main()
{
        char ch[MAX];
        char temp;
        int i = 0, j = 0, strlen = 0;

        printf("enter the string you wish to process\n");
        fgets(ch, MAX, stdin);

        while(ch[i] != '\0')
        {
                i++;
        }

        if (i % 2) {
               i = i - 1;
        }
        else {
                i = i - 2;
        }

        strlen = i / 2;

        while(strlen)
        {
                temp = ch[j];
                ch[j] = ch[i];
                ch[i] = temp;
                i--;
                j++;
                strlen--;
        }

        printf("Reversed string is %s\n", ch);
        return 0;
}

