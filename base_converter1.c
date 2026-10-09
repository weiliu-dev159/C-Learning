#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");
    int num;
    int bin[32]; 
    int i = 0;   

    printf("请输入一个十进制正整数：");
    scanf("%d", &num);

    
    if (num == 0) {
        printf("二进制输出：0\n");
        return 0;
    }

    
    while (num > 0) {
        bin[i] = num % 2; 
        num = num / 2;    
        i++;              
    }

    
    printf("二进制输出：");
    for (int j = i - 1; j >= 0; j--) { 
        printf("%d", bin[j]);
    }
    printf("\n");

    return 0;
}