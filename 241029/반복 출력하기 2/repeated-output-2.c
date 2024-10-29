#include <stdio.h>

void printHW(int n){
    for(int i=0;i<n;i++){
        printf("HelloWorld\n");
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    printHW(n);
    return 0;
}