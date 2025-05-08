#include <stdio.h>
#include <stdlib.h>

// Escreva um programa em C que leia as notas de 10 alunos e classifique cada uma conforme os criterios abaixo, utilizando estrutura de decisão do tipo escada de if, else if e else. Ao final da leitura dos 10 alunos, o programa deverá apresentar: A porcentagem de alunos aprovados, a porcentagem de alunos em recuperação, a porcentagem de alunos reprovados e a porcentagem de notas invalidas digitadas.


int main() {

    float n1, notas1;
    int aprovados = 0, recuperacao = 0, reprovados = 0, invalidas = 0;

    for ( notas1 = 0; notas1 <= 10; notas1++)
    {
        printf("Digite a nota: ");
        scanf("%f", &n1);

        if (n1 >= 0.1 && n1 <= 5)
        {
            printf("Reprovado \n");
            reprovados++;
        }else if (n1 >= 5 && n1 < 6.9)
        {
            printf("Recuperação \n");
            recuperacao++;
        }else if (n1 >= 7 && n1 <= 10)
        {
            printf("Aprovado \n");
            aprovados++;
        }else if (n1 > 10 || n1 < 0){
            printf("Nota invalida \n");
            invalidas++;
        }
        
    }

    printf("\n--- Resultados ---\n");
    printf("a) Porcentagem de alunos aprovados: %.1f%%\n", (aprovados / 10.0) * 100);
    printf("b) Porcentagem de alunos em recuperação: %.1f%%\n", (recuperacao / 10.0) * 100);
    printf("c) Porcentagem de alunos reprovados: %.1f%%\n", (reprovados / 10.0) * 100);
    printf("d) Total de notas inválidas digitadas: %d\n", invalidas);
    
    return 0;
}


// Qual a vantagem do uso de escada de ifs aninhados em relação a ifs escritos sequencialmente ? 

/* é a eficiência e clareza lógica do código, Eficiência de execução:

Com if-else if, assim que uma condição verdadeira é encontrada, as demais não são avaliadas.

Em ifs separados, todas as condições são avaliadas, mesmo que uma anterior já fosse suficiente para tomar a decisão.

Lógica mutuamente exclusiva mais clara:

Em muitos casos (como neste exercício), as condições são excludentes (uma nota não pode estar em mais de uma faixa ao mesmo tempo).

O uso da escada deixa claro que apenas uma das ações será executada.

Menor risco de conflitos:

if separados podem causar comportamento inesperado se o programador esquecer de usar else e duas condições forem verdadeiras ao mesmo tempo (por exemplo, sobreposição acidental de faixas de nota).
*/