#include <stdio.h>

void printUp(int n){
    if(n==0) return;
    printUp(n-1);
    printf("%d ",n);
}

void printDown(int n){
    if(n==0) return ;
    printf("%d ",n);
    printDown(n-1);
    
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    printUp(n);
    printf("\n");
    printDown(n);
    return 0;
}