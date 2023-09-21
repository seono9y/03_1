//
//  main.c
//  exercise_03
//
//  Created by 추서연 on 2023/09/21.
//

#include <stdio.h>

int main(void)
{
    char c;
    int i;
    
    printf("input a number :");
    scanf("%c", &c);
    
    i=c-'0';
    printf("The input number is %i\n",i);
    
    return 0;
}
