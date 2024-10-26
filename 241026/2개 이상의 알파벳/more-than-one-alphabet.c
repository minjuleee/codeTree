#include <stdio.h>
#include <stdbool.h>


bool isOtherText(char *A){
    int char_count[26] = {0};
    int distinct_count = 0;

    for(int i=0; A[i] != '\0'; i++){
        char current_char = A[i];
        if(current_char >= 'a' && current_char <= 'z'){
            if(char_count[current_char - 'a'] == 0){
                distinct_count++;
            }
            char_count[current_char - 'a']++;
        }
    }
    return distinct_count >= 2;
}

int main() {
    // 여기에 코드를 작성해주세요.
    char A[100];
    scanf("%s",A);
    isOtherText(A);

    if(isOtherText(A)){
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}