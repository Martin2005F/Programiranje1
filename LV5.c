ZADATAK 1.

#include<stdio.h>

int main(void) {
    int n,max,min, a,i;
    float p[12];
    
    do{
        scanf("%d", &n);
    }
    while(n<=3 || n>=13);
    
    
    for(i=0; i<n;i++){
        scanf("%f", &p[i]);
    }
    
    min = max = 0;
    
    
    for(i=1; i<n; i++){
        if(p[i] < p[min]){
            min = i;
        }
        if(p[i] > p[max]){
            max = i;
        }
    }
    
    a = p[min];
    p[min]=p[max];
    p[max]=a;
    
    for(i=0;i<n; i++){
        printf("%f ", p[i]);
    }
}

