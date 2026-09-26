#include<stdio.h>

int main() {
    char a[100]; //昵称
    int b; //年龄
    double c; //身高
    printf("请输入昵称：");
    scanf(" %s", a);
    printf("请输入年龄：");
    scanf("%d", &b);
    printf("请输入身高：");
    scanf("%lf", &c);
    printf("%-10s%5d%6.2lf", a, b, c);
    return 0;
}