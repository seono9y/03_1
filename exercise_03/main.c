//
//  main.c
//  exercise_03
//
//  Created by 추서연 on 2023/09/21.
//

#include <stdio.h>

int main(int argc, char *argv[]) {
    int a;
    int b;
    
    printf("분자를 입력하세요 : ");
    scanf("%d",&a);
    
    printf("분모를 입력하세요 : ");
    scanf("%d",&b);
    
    printf("나누기의 결과는 %0.6f 입니다.",(float)a/b);
    
    return 0;
    
}
