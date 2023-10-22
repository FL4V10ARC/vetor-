#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
    int vetor[8], i;
    
    for ( i = 0; i < 8; i++ ){
        printf("Digite um valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Valores nas posições pares do vetor:\n");
    for (i = 0; i < 8; i += 2){
        printf("%d\n", vetor[i]);
    }

    return 0;
}
