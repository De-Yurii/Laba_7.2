#include <stdio.h>
#include "functions.h"
#include <math.h>
double calculations(double x) {
	double y;
	y = asin(sqrt(x / (x + 1)));
	return y;
}

void tabulation1(float step) {
	printf("|X \t\t|Y \n");
	float x, y;
	for (x = 0; x <= 3; x = x + step) {
		y = calculations(x);
		printf("|%f\t|%f\n", x, y);
	}
}
void tabulation2(float step) {
	printf("|X \t\t|Y \n");
	float x = 0, y;
	while (x <= 3) {
		y = calculations(x);
		printf("|%f\t|%f\n", x, y);
		x = x + step;
	}
}
void tabulation3(float step) {
	printf("|X \t\t|Y \n");
	float x = 0, y;
	do {
		y = calculations(x);
		printf("|%f\t|%f\n", x, y);
		x = x + step;
	} while (x <= 3);

}
int stepin(int x, int n) {
	if (n > 0) {
		x = x * stepin(x, n-1);
		return x;
	}
	else {
		return 1;
	}
}