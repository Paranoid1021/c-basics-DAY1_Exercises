#include<stdio.h>
int main() {
    int a, b, c, x, z;
    scanf("%d", &x);
    a= x / 100;
    b = (x /10) % 10;
    c = x % 10;
    z = 100 * c + 10 * b + a;
    printf("%d", z);
    return 0;
}