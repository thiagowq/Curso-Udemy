#include <stdio.h>
#include <string.h>

void cadAlunos(char alunos[7][30], float mediaFinal[7]){
    int indiceMedia = 0;
    float mediaM = 0.0;

    for (int i = 0; i < 7; i++){
        printf("Digite o nome: ");
        scanf(" %[^\n]", alunos[i]);

        printf("Digite a media: ");
        scanf("%f", &mediaFinal[i]);

        if (mediaFinal[i] > 7){
            mediaM = mediaFinal[i];
            indiceMedia = i;
        }
    }
    
    printf("NOME: %s | MEDIA: %0.2f\n", alunos[indiceMedia], mediaM);

    for (int i = 0; i < 7; i++){
        if(mediaFinal[i] < 7){
            float exame = 7 - mediaFinal[i];
            printf("%s Voce precisa tirar %0.2f na prova final para alcançar a media\n", alunos[i], exame);
        }        
    }
}

int main(){

    char alunos[7][30];
    float mediaFinal[7];

    cadAlunos(alunos, mediaFinal);
    return 0;
}