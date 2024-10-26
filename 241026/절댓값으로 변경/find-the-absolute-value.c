#include <stdio.h>


void absoluteValue(int *arr,int n){
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            arr[i] = -arr[i];
        }
    }
    return;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d\n", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    
    absoluteValue(arr,n);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}