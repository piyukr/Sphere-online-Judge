#include <cstdio>
#include <cmath>

int main() {
	unsigned long int a, b, t;
	scanf("%lu", &t);
	while (t--) {
		scanf("%lu %lu", &a, &b);
		a %= 10;
		if (b == 0)
			printf("1\n");
		else if (a == 1)
			printf("1\n");
		else if (a == 2) {
			b %= 4;
			if (b == 0)
				printf("6\n");
			else
				printf("%d\n", pow(a, b) % 10);
		} else if (a == 3) {
			b %= 4;
			if (b == 0)
				printf("1\n");
			else
				printf("%d\n", pow(a, b) % 10);
		} else if (a == 4) {
			b %= 2;
			if (b == 0)
				printf("6\n");
			else
				printf("%d\n", pow(a, b) % 10);
		} else if (a == 5)
			printf("5\n");
		 else if (a == 6) 
			printf("6\n");
		 else if (a == 7) {
			b %= 4;
			if (b == 0)
				printf("1\n");
			else
				printf("%d\n", pow(a, b) % 10);
		} else if (a == 8) {
			b %= 4;
			if (b == 0)
				printf("6\n");
			else
				printf("%d\n", pow(a, b) % 10);
		} else if (a == 9) {
			b %= 2;
			if (b == 0)
				printf("1\n");
			else
				printf("%d\n", pow(a, b) % 10);
		}
	}
	return 0;
}
