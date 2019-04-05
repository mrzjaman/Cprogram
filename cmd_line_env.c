#include<stdio.h>
#include<stdlib.h>

extern char **environ;
int main(int argc, char **argv, char **envp)
{
	short int i = 0;
	/* Using environ as global variable */
	while(environ[i] != NULL) {
		puts(environ[i++]);
		putc(10, stdout);
	}
	/* Using envp */
	i = 0;
	while(envp[i] != NULL) {
		puts(envp[i++]);
		putc(10, stdout);
	}
	/*Passing environ variable */
	printf("Home: %s\n", getenv("HOME"));
}
