#include <stdio.h>

int Suite(int n) {
    if (n == 0) {
        return 1;
    } else {
        return (2*Suite(n-1)+3);
    }
}