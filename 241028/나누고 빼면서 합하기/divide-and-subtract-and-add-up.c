#include <stdio.h>

int newArray(int A[],int m){
    int sum = 0;  // 초기값 설정
    while (m >= 1) {
        if (m % 2 == 0) {
            sum += A[m-1];
            m = m / 2; 
        } else {
            sum += A[m-1];
            m = m - 1;
        }
    }
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    int A[100];
    scanf("%d %d",&n, &m);
    for(int i=0;i<n;i++){
        scanf("%d ",&A[i]);
    }

    printf("%d", newArray(A, m));

    return 0;
}