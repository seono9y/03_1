//
//  main.c
//  exercise_03
//
//  Created by 추서연 on 2023/09/21.
//

#include <stdio.h>


int main(void) {
    char character;
    
    printf("알파벳 문자를 입력하세요: ");
    scanf(" %c", &character);

   
    character = character + 1;
    
    printf("다음 문자는: %c\n", character);
    
    return 0;
}
