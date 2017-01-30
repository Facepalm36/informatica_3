/********************************************************************************
Scrivere un programma in pseudocodifica e successivamente in lingaggio c che dato
vettore di k compreso tra n1 e n2 con n2 minore di 1000 dispari con  e uno scalare
num intero effetui il prodotto tra lo scalare e il vettore
********************************************************************************/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n1,n2,k,num,i,v[999];
    printf("inserire la dimensione dell'array:");
    scanf("%d",&k);
    do{
                  printf("inserire il valore di n con n<1000 e dispari:");                //utput a schermo per inserire n2
                  scanf("%d",&n2);                                                        //input di n2
    }while((n2>1000)||(n2%2==0));
    do{
                  printf("inserire il valore di n1 con n1>0 e n1<n2:");                   //output a schermo per inserire n1
                  scanf("%d",n1);                                                         //input di n1
      }while((n1<=0)||(n1>n2));
      do{
                    printf("inserisci il valore della dimensione dell'array:");
                    scanf("%d",&k);
        }while((k<n1)||(k>n2))
        output("inserisci il valore del numero scalare:")
                          
}
