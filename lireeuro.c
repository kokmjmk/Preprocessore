#include<stdio.h>
#define LIRE_EURO(x) x/1936
#define EURO_LIRE(x) x*1936


int main(void){
    float lire, euro, valore;
    char scelta;
    printf("Inserisci una valuta\n");
    printf("a. euro\n");
    printf("b. lire\n");
    scanf(" %c", &scelta);
    switch (scelta)
    {
    case 'a':
        printf("Inserisci i numeri di lire per trasformare in euro\n");
        scanf("%f", &euro);
        valore = EURO_LIRE(euro);
        printf("lire= %f euro\n", valore);
        break;
    case 'b':
    printf("Inserisci i numeri di euro per trasformare in lire\n");
        scanf("%f", &lire);
        valore = LIRE_EURO(lire);
        printf("euro= %f lire\n", valore);
        break;
    
    default:
    printf("Valuta non riconosciuta\n");
        break;
    }


return 0;
}