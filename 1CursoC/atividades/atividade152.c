#include <stdio.h>
void infoPaciente (int ID[], int idade[], float peso[]){
    for (int i = 0; i < 100; i++){
        printf("Digite o ID do paciente:");
        scanf("%d", &ID[i]);

        if (ID[i] == 0){
            break;
        }
        
        printf("Digite a idade do paciente:\n");
        scanf("%d", &idade);

        printf("Digite o peso do paciente:\n");
        scanf("%f", &peso);
    }
    
}

void (){

} 


int main(){



    infoPaciente(ID, idade, peso);

    return 0;
}