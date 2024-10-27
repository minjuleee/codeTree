#include <stdio.h>
#include <string.h>

char input[100];
char target[100];

int findSubstringIndex(){

    int inputLen = strlen(input);
    int targetLen = strlen(target);

    for(int i=0; i <= inputLen - targetLen; i++){
        if(strncmp(&input[i], target, targetLen) == 0){
            return i;
        }
    }
    
    return -1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    fgets(input, sizeof(input), stdin);
    fgets(target, sizeof(target), stdin);

    input[strcspn(input, "\n")] = 0;
    input[strcspn(target, "\n")] = 0;

    int index = findSubstringIndex();
    printf("%d", index);

    return 0;
}