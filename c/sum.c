#include <stdio.h>

int sum (x, y) {
    return (x+y);
}

int main() {
    int a = 5;
    int b = 10;
    int z = sum(a,b);
    printf("%d\n", z);
    return 0;
}
