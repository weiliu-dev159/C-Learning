#include <stdio.h>

int main() {
    int num;
    printf("请输入一个十进制的整数：");
    scanf("%d", &num);

    printf("八进制：%o\n", num);
    printf("十六进制：%x\n", num);

    return 0; 
}

