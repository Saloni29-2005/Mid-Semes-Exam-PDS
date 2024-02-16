#include <stdio.h>
#include <math.h>
int main()
{
    int a, digit, sum;
    int fact(n);
    printf("Enter the number :");
    scanf("%d", &a);
    
    while (a != 0)
    {
        digit = a / 10;
        a = a % 10;
        sum + =  int fact(digit);
        break;
    }
    if (sum = a)
    {
        printf("%d is a strong number", a);
    }

    return 0;
    }

    int fact(n)
{
        int n,i;
        while (i == n)
        {
            i = 0;
            fact(n) = n * (n - i);
            i++;
            break;
        }
        return fact(n);
    }

