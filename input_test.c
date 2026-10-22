#include <stdio.h>


int main() {
    int age;      
    float score;  

    printf("Please enter your age: ");   //定义一个整数变量，叫age
    scanf("%d", &age); 

    printf("Please enter your score: ");    //定义一个浮点数，叫score
   //重点%f，后面必须加&
    scanf("%f", &score);

    printf("Great! Age: %d, Score: %f\n", age, score);

    return 0;
}