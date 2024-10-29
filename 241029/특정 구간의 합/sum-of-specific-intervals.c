#include <stdio.h>

int addSum(int a1, int a2, int A[]){
    int sum = 0;
    for(int i=a1;i<(a2+1);i++){
        sum = sum + A[i-1];
    }
    return sum;
}
int main() {
    int n, m;
    int a1, a2;
    int A[100];
    scanf("%d %d",&n, &m);
    for(int i=0;i<n;i++){
        scanf("%d ",&A[i]);
    }
    for(int i=0;i<m;i++){
        scanf("%d %d",&a1, &a2);
        printf("%d\n", addSum(a1,a2,A));
    }
    


    // 여기에 코드를 작성해주세요.
    return 0;
}