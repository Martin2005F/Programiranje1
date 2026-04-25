ZADATAK 1.

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int main(void) {
   int p[N], i;
   srand(time(NULL));
   
   for(i=0;i<N;i++){
       do{
           p[i] = -1010 + (rand() % (2010-1010+1));
       }while(p[i] % 6 !=0);
   }
   
   for(i=0; i<N; i++){
       printf("%d ", p[i]);
   }
}


ZADATAK 2.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define N 220

int main(void) {
    char p[N];
    int brojac=0, i, sum=0;
    float art;
    
    fgets(p, 220, stdin);
    
    for(i=0; p[i]!='\0'; i++){
        if(p[i] != ' ' && p[i] != '.'){
             brojac++;
             sum += p[i];
        }
    }
     printf("%.2f", (float)sum/brojac);
}

