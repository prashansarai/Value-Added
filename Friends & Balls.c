#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,M,L,R,Q,X;
    scanf("%d", &N);
    int Arr[N];
    for(int i = 0; i<N; i++){
        Arr[i] = 0;
    }
   

scanf("%d",&M);
while(M--){
    scanf("%d%d", &L,&R);
    for(int i=L; i<=R;i++)
    {
        Arr[i]++;
}
}

scanf("%d", &Q);
while(Q--){
    scanf("%d", &X);
    int count=0;
    for(int i=0; i<N;i++){
        if(Arr[i]>=X)
            count++;
        
    }
    printf("%d\n",count);
}
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
