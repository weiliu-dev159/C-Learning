#include <stdio.h>

int main() {
    int password = 0; 
    
    printf("请输入密码（密码是123）：\n");
    scanf("%d", &password); 
    
    // 只要密码不是 123，就一直循环
    while (password != 123) {
        printf("密码错误，请重新输入：\n");
        scanf("%d", &password); 
    }
    
    printf("密码正确，欢迎进入系统！\n");
    
    return 0;
}