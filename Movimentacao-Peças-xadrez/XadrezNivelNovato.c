#include <stdio.h>

int main(){

    int opcao;
    int i;

    do {
        // Exibe um Menu de opções
        printf("\n=== Menu de Peças De Xadrez ===\n");
        printf("1. Move Torre(5 casas para a Direita)\n");
        printf("2. Move Bispo(5 casa na Diagonal Cima Direita)\n");
        printf("3. Mover Rainha(8 casa para a Esquerda)\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            // Torre Usando For
            printf("\n Movimento da Torre: \n");
            for (i = 1; i <= 5; i++){
                printf("Direita %d\n", i);
            }           
            break;
        case 2:
            // Bispo Usando WHILE
            printf("\nMovimento do Bispo\n");
            i = 1;
            while (i <= 5){
                printf("Cima Direita %d\n", i);
                i++;
            }            
            break;
        case 3:
            //Rainha usando DO-WHILE
            printf("\nMovimento da Rainha\n");
            i = 1;
            do {
                printf("Esqueda %d\n", i);
                i++;
            } while (i <= 8);
            
            break;
        case 4:
            printf("\n Saindo do Progama...\n");
            break;
        
        default:
            printf("\nOpção Iválida! Tente Novamente.\n");
            break;
        }
        
    } while (opcao != 4);

    return 0;
}