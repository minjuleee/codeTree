#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(const char *str){
    int len = strlen(str);
    for(int i=0; i<len/2; i++){
        if(str[i] != str[len -1 -i]){
            return false;
        }
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    char A[100];
    scanf("%s",&A);

    if(isPalindrome(A)){
        printf("Yes");
    }
    else printf("No");
    return 0;
}