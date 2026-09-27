#include<stdio.h>
int main() {
    int a, b;
    printf("请输入a：");
    scanf("%d", &a);
    printf("请输入b：");
    scanf("%d", &b);
    printf("整数结果：%d\n", a / b);
    printf("浮点数结果：%.3f\n", (float)a / b);
    return 0;
}