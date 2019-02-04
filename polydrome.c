#include<stdio.h>
#define MAX 15

int main()
{
        char ch[20];
        char temp;
        short int i = 0, j = 0, strlen = 0, polydrome, polydrome_check;

        printf("enter the string you wish to check\n");
        fgets(ch, MAX, stdin);

        while(ch[i] != '\0')
        {
                i++;
        }

        i = i -2;

        strlen = i / 2;
        polydrome_check = strlen;

        while(strlen)
        {
                temp = ch[j];
                if(ch[j] == ch[i])
                {
                        polydrome++;
                }
                ch[j] = ch[i];
                ch[i] = temp;
                i--;
                j++;
                strlen--;
        }

        printf("%s\n", ch);

        if(polydrome_check == polydrome)
        printf("Given string is polydrome\n");
        else
        printf("Given string is not a  polydrome\n");
        return 0;
}
