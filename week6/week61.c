#include<stdio.h>
int main() {
	int x;
	printf("Enter number : ");
	scanf_s("%d", &x);
	for (int i = 1; i  < x * 2; i++) {
		for (int j = 1; j < x * 2; j++) {
			if (i == j || i + j == x * 2) {
				printf("*");
			}
			else if (j < i && i + j < x * 2) {
				printf("*");
			}
			else if (j > i && i + j > x * 2) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}