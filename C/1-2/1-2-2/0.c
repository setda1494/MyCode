#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
    /*
    start
        rede(score)
        if(90<=score)
            grade = "A"
        if(80<=score)
            grade = "B"
        if(70<=score)
            grade = "C"
        if(60<=score)
            grade = "D"
        else
            grade = "F"
        print(grade)
    end
    */
    int score = 0;
    char grade;

    printf("당신의 점수를 입력 하시오");
    scanf("%d", &score);

    if (90 < score)
    {
        grade = 'A';
    }
    if (80 < score)
    {
        grade = 'B';
    }
    if (70 < score)
    {
        grade = 'C';

    }
    if (60 < score)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
    printf("당신의 점수는" + grade);
}

