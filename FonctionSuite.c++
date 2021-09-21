#include <stdio.h>

int Suite(int n) {
    if (n == 0) {
        return 1;
        printf("OKNON");
    } else {
        return (2*Suite(n-1)+3);
        printf("test");
    }
}

int main()
{
    printf("%d",Suite(10));
}
