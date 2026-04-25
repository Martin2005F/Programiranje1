ZADATAK 1.



#include<stdio.h>

int main(void) {
    int a,b,c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if(a+b>c && b+c > a && c+a>b){
        if(a==b && b==c){
            printf("jednakostranican trokut");
        }else if
        (a==b || b==c ){
            printf("jednakokracan");
        }
        else{
            printf("raznostranican trokut");
        }
        
    }else{
            printf("trokut ne postoji");
        }
    
}


Zadatak 2.



#include<stdio.h>

int main(void) {
   int broj, manji,veci,i;
   scanf("%d", &broj);
  veci=broj;
  manji = broj;

   for(i=2; i<=10; i++){
       scanf("%d", &broj);
       
       if(broj > veci){
           veci = broj;
       }
        if(broj < manji){
           manji = broj;
       }
   }
   printf("najveci je %d\n", veci);
   printf("najmanji je %d", manji);
   
}
