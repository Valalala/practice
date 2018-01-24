// Boom Johnson - Walter Rasmussen - Spring 2018
// coolHelloWorld.c - Prints "Hello World!" over several seconds.

#include<stdio.h>
#include<string.h>

int main(int argc, char *argz[]) {
	char hello[] = "Hello World!\n";
	int i, j;
	for (i=0; i<strlen(hello); i++) {
		for (j=0; j<20000; j++);
		printf("%c", hello[i]);
	}
	return 0;
}
