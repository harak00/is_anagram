//
//  main.c
//  google_tech
//
//  Created by 변인수 on 2017. 3. 3..
//  Copyright (c) 2017년 변인수. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool isAnagram(char input[100], char input2[100]) {

    unsigned long szInput = strlen(input);
    unsigned long szInput2 = strlen(input2);
    
    unsigned long count = 0;
    
    // 크기가 다르면 아나그램이 아님
    if(szInput != szInput2) {
        return false;
    }
    
    // 알파벳이 전부 존재하는지 검사
    for(int i = 0; i < szInput; i++) {
        for (int j = 0; j < szInput2; j++) {
            if(input2[j] == input[i]) count++;
        }
    }
    
    if (count == szInput)
        return true;
    else
        return false;
}

int main(int argc, const char * argv[]) {
    char tmp[100], tmp2[100];
    
    scanf("%s %s", tmp, tmp2);
    
    if (isAnagram(tmp, tmp2))
        printf("Anagram");
    else
        printf("Not Anagram");
    
    return 0;
}
