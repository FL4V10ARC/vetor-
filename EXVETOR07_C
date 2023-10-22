#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese");
    int vetor[10], i;
    int soma = 0;
    float media;

    for ( i = 0; i < 10; i++ ){
        printf("Digite um valor para a posição %d: ", i);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

   
    media = (float)soma / 10;

    printf("A média dos valores do vetor é: %.2f\n", media);

    return 0;
}
