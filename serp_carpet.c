#include <stdio.h>
#include "serp_carpet.h"

#define ITER 7

int main(){
	FILE* output = fopen("serp_carpet.ppm", "w");
	serp_kovrik(output, ITER);
	fclose(output);
	return 0;
}
