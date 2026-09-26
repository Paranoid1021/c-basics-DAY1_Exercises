#include<stdio.h>
#define PI 3.1415926
int main() {
    const double a = 4.0 / 3.0;
    double r;
    printf("请输入球的半径：");
    scanf("%lf", &r);
    double V = r * r * r * a * PI;
    printf("球的体积为：%.2lf", V);
    return 0;
}