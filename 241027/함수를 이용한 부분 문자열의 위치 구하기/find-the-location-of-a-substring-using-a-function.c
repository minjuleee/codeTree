#include <stdio.h>
#include <string.h>

char input[100];
char target[100];

int findSubstringIndex() {
    int inputLen = strlen(input);
    int targetLen = strlen(target);

    for (int i = 0; i <= inputLen - targetLen; i++) {
        if (strncmp(&input[i], target, targetLen) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    // 사용자로부터 입력받기
    fgets(input, sizeof(input), stdin);
    fgets(target, sizeof(target), stdin);

    // 입력된 문자열에서 개행 문자 제거
    input[strcspn(input, "\n")] = 0;
    target[strcspn(target, "\n")] = 0;

    int index = findSubstringIndex();
    printf("%d\n", index); // 인덱스 출력

    return 0;
}