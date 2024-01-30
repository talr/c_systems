// 6

#include <stdio.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
int main() {
	int (*func_vec[3])(int, int) = { add, sub, mul };
	int user_choice;
	int x;
	while (1) {
		printf("\n1. Add\n2. Sub\n3. Mul\n4. Exit\nSelect from the menu:\n");
		x = scanf_s("%d", &user_choice);
		switch (user_choice) {
			case 1: case 2: case 3:
				printf("\n %d \n ", (func_vec[user_choice - 1])(8, 5));
				break;
			case 4:
				return 0;
			default:
				printf("\nWrong choice, try again.\n");
		} // Switch
	} // While
} // Main

int add(int a, int b) {
	return a + b;
} // add

int sub(int a, int b) {
	return a - b;
} // sub

int mul(int a, int b) {
	return a * b;
} // mul

