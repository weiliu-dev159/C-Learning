#include <stdio.h>

int main(){
    int i, j;  //注意这里int和i之间要空格！i代表行，j代表列

    //外层循环：控制行数 i，从 1 到 9
    for(i = 1; i <= 9; i++){

        //内层循环：控制列数 j，从 1 开始，且不超过当时行数 i
        for(j = 1; j <= i; j++){
            printf("%d*%d=%d\t", j, i, j * i); //\t用于对齐
        }

        //内层循环结束后，必须换行
        printf("\n");
    }

    return 0;
}