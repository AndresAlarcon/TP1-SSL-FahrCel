#include <stdio.h>
#include <stdlib.h>
#include "conversion.h"

void conversion(float fahr, int lower, int upper, int step){
	for(fahr=lower; fahr<=upper; fahr=fahr+step)
		printf("%3.0f %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

