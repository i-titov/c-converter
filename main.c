#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned short type = 0;
    int sum = 0;
    float dollar = 0.92;
    float euro = 1.09;
    printf("Conversion des monnaies:\n");
    printf("Le prix de dollar est  %.2f\n", dollar);
    printf("Le prix d'euro est %.2f\n\n", euro);
    printf("Echanger des dollars contre des eur,choisisez 1: \n");
    printf("Echanger des euros contre des dollars,choisisez 2: \n");

    printf("\n Choisisez le type d'action:\n");
    scanf("%d", &type);

    printf("\n Selectionner le montant:\n");
    scanf("%d", &sum);

    switch (type) {
        case 1:
            printf("Votre montant est: %.2f\n",sum * dollar);
            break;
        case 2:
            printf("Votre montant est: %f \n", sum * euro);
            break;
        default:
            printf("Le choix n'est pas correct \n");
            break;
    }

    return 0;
}
