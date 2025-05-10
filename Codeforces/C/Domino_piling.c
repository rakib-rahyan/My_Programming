#include <stdio.h>

int main(){
    int M, N;
    scanf("%d %d", &M, &N);

    if(1<=M && M<=N && N<=16){
        int x = M*N;
        printf("%d",x/2);
    }
    return 0;
}
