#define _CRT_SECURE_NO_WARNINGS
#include "functions.h"
int main() {
	float step; int choice; int on = 1;
	void (*tabl1)(float), (*tabl2)(float), (*tabl3)(float);
	tabl1 = tabulation1; tabl2 = tabulation2; tabl3 = tabulation3;
	while (on) {
		printf("Enter metod to do tabulathion(1 - for, 2 - while,\
 3 - do...while): ");
		scanf("%d", &choice);
		printf("Enter step: ");
		scanf("%f", &step);
		switch (choice)
		{
		case 1:
			tabl1(step);
			break;
		case 2:
			(*tabl2)(step);
			break;
		case 3:
			(*tabl3)(step);
		default:
			printf("Invaild metod");
		}
		printf("Do you want to continue(1 if yes, 0 if not): ");
		scanf("%d", &on);
		system("CLS");
	}
	printf("Work ended");
}