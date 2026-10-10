#include <stdio.h>

int main(void) {
	int integer_value;
	float float_value;
	char character_value;
	double double_value;

	printf("Enter an integer: ");
	scanf("%d", &integer_value);

	printf("Enter a float: ");
	scanf("%f", &float_value);

	printf("Enter a character: ");
	scanf(" %c", &character_value);

	printf("Enter a double: ");
	scanf("%lf", &double_value);

	printf("\nYou entered:\n");
	printf("Integer: %d\n", integer_value);
	printf("Float: %f\n", float_value);
	printf("Character: %c\n", character_value);
	printf("Double: %lf\n", double_value);

	return 0;
}



output -

Enter an integer: 3
Enter a float: 8.98
Enter a character: A
Enter a double: 9.876

You entered:
Integer: 3
Float: 8.980000
Character: A
Double: 9.876000