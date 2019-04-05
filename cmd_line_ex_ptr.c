#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
	short int i;
	if(argc < 2) {
		printf("Command Usage: <./a.out> <name> <name> <name> <age> \n");
	exit(0);
	}

	printf("Address of argv: %p, and argv: %p\n", &argv, argv);
	for(i = 0; i < argc; i++) {
		printf("%p: argv[%d]: %s\n", (argv + i), i, argv[i]);
	}

	putchar(**argv);
	putchar(**++argv);
	putchar(*++*argv);
	putchar(++**argv);
	putchar(**argv++);
	putchar(**argv);
	putchar(10);

	putc(**argv, stdout);
	putchar(**++argv);
	putchar(*++*argv);
	putchar(++**argv);
	putchar(**argv++);
	putchar(**argv);
	putchar(10);
	puts(argv[0]);
	//fputs(argv[1], stdout);
	argv[0] = "Abdulla";
	//strcpy(argv[1], "Bheema");
	putc(**argv, stdout);
	puts(argv[0]);
	puts(argv[1]);
	return 0;
}
