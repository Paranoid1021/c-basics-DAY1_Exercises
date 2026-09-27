#include<stdio.h>
int main() {
    char a;
    scanf("%c", &a);
    printf("小写字母%c的ASCII码是：%d\n", a, a);
    a = a - 32;
    printf("大写字母%c的ASCII码是：%d\n", a, a);
    return 0;
}