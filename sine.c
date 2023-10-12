#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void sine(int steps){

	int degree = 360 / steps;
	int increment = degree;
	printf("steps =%d\n" , steps);
	printf("degree =%d\n", degree);
	
	for (int i = 1; i <= steps; ++i){
		printf("Step number:%d Sin:%d    ", i , degree);
		printf("sine= %f    " , sin(degree));
		printf("cosine= %f\n", cos(degree));

		degree += increment;
	}
}


	


