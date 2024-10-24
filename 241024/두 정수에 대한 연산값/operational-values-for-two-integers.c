#include <stdio.h>

void addMul(int a, int b){
    if(a<b){
        a = a*2;
        b = b+25;
        printf("%d %d", a,b);
    }else if(a>b){
        a = a+25;
        b = b*2;
        printf("%d %d", a,b);
    }else{
        printf("두수가 같습니다.\n");
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a, &b);
    addMul(a,b);
    return 0;
}