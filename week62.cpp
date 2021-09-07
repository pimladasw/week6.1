#include<stdio.h>
int main() {
	int x;
	printf("Enter number : ");
	scanf("%d", &x);
	int n = (x * 2) - 1;
	int b = 1;
	int g = n - 2;
	int j = n/2;
	for (int i = 1; i <= n; i++) {
		if (i < x) {
			for (int k = 1; k <= i; k++) {
				printf("*");
			}
			for (int k = 1; k <= g; k++) {
				printf(" ");
			}
			for (int k = 1; k <= i; k++) {
				printf("*");
			}
			printf("\n");
			g = g - 2;
		}
		else if (i == x) {
			for (int k = 1; k <= n; k++) {
				printf("*");
			}
			printf("\n");
			g = g - 2;
		}
		else if (i <= n) {
			for (int k = 1; k <= j; k++) {
				printf("*");
			}
			for (int k = 1; k <= b; k++) {
				printf(" ");
			}
			for (int k = 1; k <= j; k++) {
				printf("*");
			}
			printf("\n");
			j--;
			b = b + 2;
		}
		else if (i == x) {
			for (int k = 1; k <= n; k++) {
				printf("*");
			}
			printf("\n");
			g = g - 2;
		}
		else if (i <= n) {
			for (int k = 1; k <= j; k++) {
				printf("*");
			}
			for (int k = 1; k <= j; k++) {
				printf("*");
			}
			printf("\n");
			j--;
			b = b + 2;
		}
	}
	return 0;
}
