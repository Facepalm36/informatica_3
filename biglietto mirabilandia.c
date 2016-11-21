#include<stdio.h>
#include<stdlib.h>
/*Biglietto Mirabiliandia
Autore: Denis Marchionni   Classe:3ina
Data: 21/11/2016
Versione: 1.0                   */
int main() {
    float prezzo;
    int altezza,età,disabile,accomp,sup
    printf("inserisci 1 il numero se la persona è disabile altrimenti 0)
    scanf("%d",& disabile)           //variabile che indica se la persona è disabile o no
    if(disabile=1){
                   prezzo=0,00       //prezzo disabile
    }else{
          printf("inserisci l'altezza della persona:")
          scanf("%d",& altezza)      //variabile che indica l'altezza della persona
    if(altezza<100){
                    prezzo=0,00      //prezzo se la persona è alta meno di 100cm
    }else{
          if(altezza>140){           
                          prezzo=34,90
          }else{
                          prezzo=28.00
          }
    
          
    
