#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int T,n,i;
    long long int fib[60];
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<=60;i++){
        fib[i]=(fib[i-1]+fib[i-2]);
    }
    scanf("%d",&(T));
    for(i=0;i<T;i++){
        scanf("%d",&(n));
        printf("Fib(%d) = %lld\n",n, fib[n]);
        }
    return 0;
}
