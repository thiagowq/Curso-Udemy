#include <stdio.h>

int main() {

    int opcao;

    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Hamburguer - R$ 12,00 ");
            break;
        case 2:
            printf("Cheeseburger - R$ 15,00 ");
            break;
        case 3:
            printf("Refrigerante - R$ 6,00 ");
            break;
        case 4:
            printf("Suco natural - R$ 8,00 ");
            break;
        case 5:
            printf("Pedido encerrado");
            break;
        default:
            printf("Opção inválida");
    }

    return 0;
}
