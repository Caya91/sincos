#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
	printf("Anzahl der Argumente: %d\n", argc);
	printf("Argument 1: %s\n", argv[0]);
	
	char steps = *argv[1];
	printf("Argument 2: %c\n", steps);
	return 0;

}

