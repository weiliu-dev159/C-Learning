#include <stdio.h>

int main(){

    int score; //定义成绩变量
    
    printf("请输入C语言的成绩：");  //重点会遗漏点，加&
    scanf("%d",&score);

    //如果成绩大于60分
    if (score >=60){
        printf("恭喜你，合格了！\n");
    
    }
    //否则
    else{
        printf("很遗憾，不合格，需要进行补考\n");

    }

    return 0;
}