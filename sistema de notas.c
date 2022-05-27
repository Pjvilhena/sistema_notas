#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    float n1, n2, n3, nf;
    printf("\n------Veja se foi aprovado------\n");
    printf("Escreva suas notas:\n");
    printf("\nPortuguês: ");
    scanf("%f", &n1);
    printf("\nMatemática: ");
    scanf("%f", &n2);
    printf("\nHistória: ");
    scanf("%f", &n3);
    printf("\nSua nota é %.1f\n", nf= (n1 + n2 + n3) /3 );
    if (nf >= 7){
        printf("\n\nParabens, você foi aprovado!\n");
    }else{
        printf("\nInfelizmente você foi reprovado.\n");
    }
   
    system("pause");
    system("cls");
}
    