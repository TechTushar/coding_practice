#include<stdio.h>
#include<conio.h>

void fibonacci_series(int n)
{
    if ( n < 0 )
    return 0;
    if (n == 0)
    {
        return 1;
    }
    else
    return fibonacci_series(n-1) + fibonacci_series(n-2)
}

int main()
{
int number;
number = 10;
fibonacci_series(number);
}