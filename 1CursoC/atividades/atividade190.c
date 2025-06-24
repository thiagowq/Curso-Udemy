#include <stdio.h>

void controleEstoque(int codProd[], int estoque[]) {
    int codCliente, codPedido, qtd;

    while (1) {
        printf("\nDigite o código do cliente (0 para encerrar): ");
        scanf("%d", &codCliente);
        if (codCliente == 0) break;

        printf("Digite o código do produto que deseja: ");
        scanf("%d", &codPedido);

        int encontrado = 0;
        for (int i = 0; i < 10; i++) {
            if (codProd[i] == codPedido) {
                encontrado = 1;

                printf("Digite a quantidade desejada: ");
                scanf("%d", &qtd);

                if (qtd <= estoque[i]) {
                    estoque[i] -= qtd;
                    printf("Pedido atendido. Obrigado e volte sempre!\n");
                } else {
                    printf("Não temos estoque suficiente dessa mercadoria.\n");
                }

                break;
            }
        }

        if (!encontrado) {
            printf("Código inexistente.\n");
        }
    }

    printf("\nEstoque final:\n");
    for (int i = 0; i < 10; i++) {
        printf("Produto %d - Estoque: %d\n", codProd[i], estoque[i]);
    }
}

int main() {
    int codProd[10], estoque[10];

    printf("Cadastro de produtos:\n");
    for (int i = 0; i < 10; i++) {
        printf("\nDigite o código do produto %d: ", i + 1);
        scanf("%d", &codProd[i]);

        printf("Digite o total em estoque do produto %d: ", i + 1);
        scanf("%d", &estoque[i]);
    }

    controleEstoque(codProd, estoque);

    return 0;
}
