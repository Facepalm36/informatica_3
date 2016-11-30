#include<stdio.h>
#include<stdlib.h>
/*Biglietto Mirabiliandia
Autore: Denis Marchionni   Classe:3ina
Data: 21/11/2016
Versione: 1.0                   */
int main() {
    float prezzo;
    int altezza,età,disabile,accomp,sup
    printf("inserisci il numero 1 se la persona è disabile altrimenti 0:")
    scanf("%d",& disabile)                     //variabile che indica se la persona è disabile o no
    if(disabile=1){
                   prezzo=0,00                 //prezzo disabile
    }else{
          printf("inserisci l'altezza della persona:")
          scanf("%d",& altezza)                //variabile che indica l'altezza della persona
    if(altezza<100){
                    prezzo=0,00                //prezzo se la persona è alta meno di 100cm
    }else{
          if(altezza>140){           
                          prezzo=34,90         //prezzo se la persona è piu alta di 140cm
          }else{
                          prezzo=28.00         //prezzo se la persona è piu bassa di 140cm
          }
    printf("inserisci l'età di della persona:")
    scanf("%d",&altezza)
        if(età>60){
                     prezzo=25,00
        else
                     prezzo=34,90
                  }
    printf("inserisci se la persona vuole il supplemento con il numero 1 o se non lo vuole con il numero 0")
    scanf("%d",&supplemento)
        if(supplemento==1){                     //supplemento per ridotto o intero
                     prezzo=prezzo+9,50;        //prezzo intero finale
                    }else{
                     prezzo=prezzo+7,50;        //prezzo ridotto finale
                       }
               }
         printf("il prezzo e':%f",prezzo);      //mostra il prezzo finale
    }
}
