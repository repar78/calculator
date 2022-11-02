#include <stdio.h>
#include <stdlib.h>

int main()
{
	char operator;
	float number1, number2;
	
	printf("Please enter an operator (+, -, *, /):");
	scanf("%c", &operator);
	
	printf("\n Please enter two operands:");
	scanf("%f %f", &number1, &number2);
	
	switch(operator)
    {
		case '+':
			printf("\n%.3f + %.3f = %.3f\n", number1, number2, number1+number2);
			break;
		case '-':
			printf("\n%.3f + %.3f = %.3f\n", number1, number2, number1-number2);
			break;
		case '*':
			printf("\n%.3f + %.3f = %.3f\n", number1, number2, number1*number2);
			break;
		case '/':
			printf("\n%.3f + %.3f = %.3f\n", number1, number2, number1/number2);
			break;

		default:
			printf("\n Error! not correct");
    }

    return 0;
}
