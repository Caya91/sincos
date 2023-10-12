#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "sine.h"
int main(int argc, char *argv[]){
	printf("Anzahl der Argumente: %d", argc);
	printf("%c", *argv[0]);

	int steps = atoi(argv[1]);
	printf("steps =%d\n" , steps);

	sine(steps);


	return 0;
	
}
