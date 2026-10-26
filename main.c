#include <stdio.h>
#include <math.h>
#include "library/trigonometria.h"

int main () {
	float sineValue = asine(sqrt(3), 2);
	printf("Sine value: %g", sineValue);

	return 0;
}
