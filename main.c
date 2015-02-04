#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int massimo(int valori[], int n);
float media(int valori[], int n);
float divisione(int dividendo, int divisore);
int quoziente(int dividendo, int divisore);
int restoDivisione(int dividendo, int divisore);
float parteDecimaleDivisione(int dividendo, int divisore);

int main(int argc, char** argv) {
    int v[SIZE];
    int mas;
    float med;
    float div;
    int quo;
    int res;
    float pd;
    int i;
    
    printf("Inserisci %d valori interi POSITIVI\n", SIZE);
    while(i<SIZE)
    {        
       scanf("%d",&v[i]);
       i++;
    }
    
    mas = massimo(v, SIZE);
    med = media(v, SIZE);
    div = divisione(v[0], v[1]);
    quo = quoziente(v[0], v[1]);
    res = restoDivisione(v[0], v[1]);
    pd = parteDecimaleDivisione(v[0], v[1]);
    
    printf("\nIl valore massimo è: %d\n", mas);
    printf("Il valore medio è: %f\n", med);
    
    printf("\nDivisione tra %d (dividendo) e %d (divisore)\n", v[0], v[1]);
    printf("Risultato (decimale): %f\n", div);
    printf("Parte decimale: %f\n", pd);
    printf("Quoziente (intero): %d\n", quo);
    printf("Resto (intero): %d\n", res);
    
    return (EXIT_SUCCESS);
}

/*
 * Calcola il valore massimo presente nell'array di valori interi POSITIVI, di dimensione n.
 */
int massimo(int valori[], int n) {
    int max=0,i;
    
    for(i=0;i<n;i++)
    {
        if(valori[i]>max)
        {
            max=valori[i];
        }
        
    }
    return max;
}

/*
 * Calcola la media dei valori interi POSITIVI nell'array, di dimensione n.
 */
float media(int valori[], int n) {
    float somma=0;
    int i;
    for(i=0;i<n;i++)
    {
        somma=valori[i]+somma;
    }
    somma=somma/n;
    return somma;
}

/*
 * Calcola il risultato decimale della divisione tra due interi POSITIVI.
 * Ad esempio: 10 / 4 => 2.5
 */
float divisione(int dividendo, int divisore) {

    float risultato;
    risultato=((float)dividendo/divisore);
    return risultato;

}

/*
 * Calcola il quoziente (parte intera) della divisione tra due interi POSITIVI.
 * Ad esempio: 10 / 4 => 2
 */
int quoziente(int dividendo, int divisore) {
    int quoz;
    quoz=dividendo/divisore;
    return quoz;
}

/*
 * Calcola il resto della divisione tra due interi POSITIVI.
 * Ad esempio: 10 / 4 => 2
 */
int restoDivisione(int dividendo, int divisore) {
    int rest;
    rest=dividendo%divisore;
    return rest;
}

/*
 * Calcola la parte decimale del risultato della divisione tra due interi POSITIVI.
 * Ad esempio: 10 / 4 => 0.5
 * La parte decimale è, ovviamente, sempre inferiore a 1.
 */
float parteDecimaleDivisione(int dividendo, int divisore) {
    float pdd;
    int pi=quoziente(dividendo, divisore);
    pdd=(divisione(dividendo, divisore)-pi);
    return pdd;
}

