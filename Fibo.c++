#include <stdio.h>

int Fibo(int n) {
    if (n < 2)
    {
        return 1;
    } else {
        return (Fibo(n-1)+Fibo(n-2));
    }   
}

int main(int argc, char const *argv[])
{
    printf("%d", Fibo(4));
}
