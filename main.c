#include <stdio.h>
#include <stdlib.h>

int main() {
    float tax = 0.25;
    float salaries = 0;
    float salaries_net;
    printf("Calcul du salaire net:\n");
    printf("\n Selectionner le montant:\n");
    scanf("%f", &salaries);

    salaries_net = salaries - (salaries * tax);
    printf("salaire net: %.2f\n", salaries_net);



    return 0;
}
