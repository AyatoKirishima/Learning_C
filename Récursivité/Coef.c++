#include <stdio.h>

int Coef(int n, int m) {
    if ((n=m) || (m=1))
    {
        return 1;
    } else {
        return (Coef(n-1,m) + Coef(n-1,m-1));
    }   
}

int main(int argc, char const *argv[])
{
    printf("%d", Coef(2,6));
}
