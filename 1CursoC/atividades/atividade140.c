#include <stdio.h>

int main(){

    void testeVariavel(int x);
    void testePonteiro(int *pX);
    int teste = 1;
    int *pTeste = &teste;

    //testeVariavel(teste);
    testePonteiro(pTeste);

    printf("%d\n", teste);

    return 0;
}

void testeVariavel(int x){
    ++x;
}
void testePonteiro(int *pX){
    ++*pX;
} 