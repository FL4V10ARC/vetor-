#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese");
    int vetor[10], i;
    int pares = 0; 
    
    
    for ( i = 0; i < 10; i++ ){
        printf("Digite um valor para a posição %d: ", i + 1);
        scanf("%d", &vetor[i]);

        
        if (vetor[i] % 2 == 0){
            pares++;
        }
    }

    printf("Quantidade de valores pares no vetor: %d\n", pares);

    return 0;
}
