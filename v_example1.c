/*in the space complexity the stack space also gets addded*/

#include<stdio.h>
#include<conio.h>

int sumOfNumber(int n)
{
    if(n <= 0)
    {
        return 0;
    }
    return n + sumOfNumber(n-1);
}

int main(int argc, char const *argv[])
{
    int result = sumOfNumber(3);
    printf("%d",result);
    return 0;
}
