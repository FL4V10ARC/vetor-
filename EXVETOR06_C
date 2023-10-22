#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese");
    int vetor[10];
    int i;

    for (i = 0; i < 10; i++){
        printf("Digite um valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Posições do vetor com valores ímpares:\n");
    for (i = 0; i < 10; i++){
        if (vetor[i] % 2 != 0){
            printf("Posição %d: %d\n", i, vetor[i]);
        }
    }

    return 0;
}
