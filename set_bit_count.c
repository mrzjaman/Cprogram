#include<stdio.h>
#define EIGHT_BIT 8
#define SIXTEEN_BIT 16
#define THIRTY_TWO_BIT 32

int main()
{
	int n, i, count = 0;

	printf("enter the number to count set bit\n");
	scanf("%d", &n);

	if(n < 256) {
		for(i = 0; i < EIGHT_BIT; i++)
		{
			if((1 << i) & n) {
				count++;
			}
		}
	}

	else if(n < 65536) {
		for(i = 0; i < SIXTEEN_BIT; i++)
		{
			if((1 << i) & n) {
				count++;
			}
		}
	}
	else {
		for(i = 0; i < THIRTY_TWO_BIT; i++) {
			if ((1 << i) & n) {
				count++;
			}
		}
	}
		
	
	printf("set bit count is %d \n", count);
	return 0;
}
