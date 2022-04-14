#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Declaring the function:
int greatestCommonDivisor();

int main(void){
    int firstNumber;
    int secondNumber;

    printf("This program will find the greatest common divisor between two non-negative integers\n");

    do {
        printf("Please insert the first number: ");
        scanf("%d", &firstNumber);
        printf("Now insert the second number: ");
        scanf("%d", &secondNumber);
        if (firstNumber < 0 || secondNumber < 0)
        {
            printf("One of the numbers you've just inserted is negative. Please insert only positive integers\n");
        };
    } while (firstNumber < 0 || secondNumber < 0);

    printf("The greatest common divisor between those two numbers is %d\n", greatestCommonDivisor(firstNumber, secondNumber));
    return 0;
};

int greatestCommonDivisor(int x, int z)
{
    int i = 1;
    int j = 1;
    int lastItem;

    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= z; j++)
        {
            if (i == j && x % i == 0 && z % j == 0)
            {
                double resultX = x/i;
                double resultZ = z/j;
                lastItem = i;
            };
        };
    };
    return lastItem;
};
