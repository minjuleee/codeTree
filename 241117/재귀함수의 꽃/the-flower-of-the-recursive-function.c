#include <stdio.h>

void print(int n){
    if(n==0) return;

    printf("%d ",n);
    print(n-1);
    printf("%d ",n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}