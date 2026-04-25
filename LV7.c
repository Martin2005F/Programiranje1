ZADATAK 1.

#include <stdio.h>
 
int main() {
    
int polje[18]; 
int m;
int *p;
int *max, *min;


do {
scanf("%d", &m);

} while(m < 4 || m >= 19);


for(p = polje; p < polje + m; p++) {
printf("Unesite element u polje: ");
scanf("%d", p);
}


max = min = polje;
for(p = polje + 1; p < polje + m; p++) {
if(*p > *max) max = p;
if(*p < *min) min = p;
}


printf("%d\n", *max - *min);

return 0;
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

