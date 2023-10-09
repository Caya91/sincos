#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]){
	printf("Anzahl der Argumente: %d", argc);
	printf("%c", *argv[0]);
	
	char steps = *argv[1];
	printf("%c\n", steps);
	return 0;

}
