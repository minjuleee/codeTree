#include <stdio.h>

void printStar(int n, int current){
    if(current > n){
        return;
    }
    for(int i=0; i<current; i++){
        printf("*");
    }
    printf("\n");
    printStar(n, current + 1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    printStar(n, 1);
    return 0;
}