#include<stdio.h>
#define MAX 15

int main()
{
        char dest[MAX];
        short int i = 0, vowel_count = 0;

        printf("enter the string you wish to process\n");
        fgets(dest, MAX, stdin);
        while(dest[i] != '\0')
        {
                if((dest[i] == 'a') || (dest[i] == 'e') || (dest[i] == 'i') || (dest[i] == 'o') || (dest[i] == 'u')) {
                        vowel_count++;
                }
                i++;
        }
        printf("No of Vowel is %d\n", vowel_count);
        return 0;
}
