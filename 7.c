#include<stdio.h>
int main() {
    char a = 200; //注意：char类型的范围是-128~127，200超出了范围
    char b = a + 100;
    int c = a + 100;
    printf("a=%d\n", a); //200超出char类型范围，发生了溢出，输出结果为-56
    printf("b=%d\n", b); //a 已经存储了溢出后的值-56，b = -56 + 100 = 44
    printf("c=%d\n", c); //a + 100 = -56 + 100 = 44
    printf("sizeof(a + 100)=%zu\n", sizeof(a + 100)); //a + 100的结果是int类型，占4个字节
    return 0;
}