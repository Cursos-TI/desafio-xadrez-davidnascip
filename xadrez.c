#include <stdio.h>

int PecaMovimentada, Torre = 1, Bispo = 1, Cavalo = 1, CavaloA = 1;

void EntradaUsuario(){
    printf("Digite um numero que corresponda a uma peça a ser movimentada\n");
    printf("1. Torre (move 5 casas para cima)\n");
    printf("2. Bispo (move 5 casas na diagonal direita)\n");
    printf("3. Rainha (move 8 casas para a esquerda\n");
    printf("4. Cavalo (move 2 casas para cima e 1 para direita\n");
    scanf("%d", &PecaMovimentada);
}

void MovimentarPeca(){
    switch (PecaMovimentada)
    {
    //Movimentacao da torre
    case 1:
        while (Torre <= 5){
            printf("Cima\n", Torre);
            Torre++;
        }
        break;
    
    //Movimentacao do bispo
    case 2:
        do
        {
            if (Bispo % 2 != 0){
                printf("Cima\n", Bispo);
            }
            else
                printf("Direita\n", Bispo);            
            Bispo++;
        } while (Bispo <= 10);
        break;
    
    case 3:
        for (int Rainha = 1; Rainha <= 8; Rainha++){
            printf("Direita\n");
        }
        break;

    //Movimentacao do cavalo
    case 4:
        for (Cavalo = 1; Cavalo <= 1; Cavalo++){
            while (CavaloA <= 2){
                printf("Teste\n");
                CavaloA++;
                }
            }
            printf("Teste Fora\n");
            
        break;
    
        default:
    printf("Entrada digitada invalida");
    }
}

int main() {
    EntradaUsuario();
    MovimentarPeca();
    return 0;
}
