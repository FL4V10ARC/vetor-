#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
    int vetorX[10], i, maior, menor;
    
    for ( i = 0; i < 10; i++){
        printf("Digite o valor da posição %d: ", i + 1);
        scanf("%d", &vetorX[i]);
    }

     maior = vetorX[0]; 
     menor = vetorX[0]; 

    for ( i = 1; i < 10; i++){
        if (vetorX[i] > maior){
            maior = vetorX[i];
        }
        if (vetorX[i] < menor){
            menor = vetorX[i];
        }
    }
    
    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    return 0;
}
