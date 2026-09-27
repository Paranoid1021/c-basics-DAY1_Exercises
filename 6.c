#include<stdio.h>
#include<ctype.h> 
int main() {
    // char a;
    // scanf("%c", &a);
    // printf("小写字母%c的ASCII码是：%d\n", a, a);
    // a = a - 32;
    // printf("大写字母%c的ASCII码是：%d\n", a, a);

    char b;
    scanf("%c", &b);
    printf("小写字母%c的ASCII码是：%d\n", b, b);
    b = toupper(b); // 使用toupper函数将小写字母转换为大写字母
    printf("大写字母%c的ASCII码是：%d\n", b, b);
    return 0;
}