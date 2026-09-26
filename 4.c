#include<stdio.h>
int main() {
    int h, min, s, x;
    scanf("%d", &x);
    h= x / 3600;
    min = (x % 3600) / 60;
    s = x % 60;
    printf("%d小时%d分钟%d秒", h, min, s);
    return 0;
}