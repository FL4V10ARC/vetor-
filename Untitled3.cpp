#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
    int vetor[10],i;
    int impares = 0; 

    for ( i = 0; i < 10; i++ ){
        printf("Digite o valor da posição %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 != 0){
            impares++;
        }
    }
    
    printf("Números ímpares no vetor: ");
    for ( i = 0; i < 10; i++ ){
        if (vetor[i] % 2 != 0){
            printf("%d ", vetor[i]);
        }
    }
    
    printf("\nQuantidade de números ímpares: %d\n", impares);

    return 0;
}