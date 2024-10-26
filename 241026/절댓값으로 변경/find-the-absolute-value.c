#include <stdio.h>

void absoluteValue(int n){
    if(n<0){
        printf("%d ",n * (-1));
    }else{
        printf("%d ",n);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d\n", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
        absoluteValue(arr[i]);
    }
    return 0;
}