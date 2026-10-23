#include <stdio.h>

int main(){

    int score; //定义成绩变量
    
    printf("请输入C语言的成绩：");  //重点会遗漏点，加&
    scanf("%d",&score);

   // 如果能走到这里，说明上面的条件没满足（分数<90），且分数>=60
    if (score >=90){
        printf("恭喜你，你很优秀！\n");
    
    }
    
    else if (score >=60){
        printf("恭喜你，你合格了！\n");

    }
    // 如果上面两个都没满足，说明分数一定<60
    else {

        printf("很遗憾，你的成绩不合格，请重新努力！\n");
    }
         

    return 0;
}