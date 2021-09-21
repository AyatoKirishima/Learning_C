#include <stdio.h>

int pgcd(int a,int b) {
    if (a<b)
    {
        return pgcd(a,(b-a));
    } else if (a>b) {
        return pgcd((a-b),b);
    } else {
        return a;
    }   
}

int main(int argc, char const *argv[])
{
    printf("%d", pgcd(4,2));
}
