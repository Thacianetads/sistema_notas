#include<stdio.h>
    int main(){
    float nota;
    char nome[40];
    int qtd, i;
    int aprovados=0, reprovados=0, recuperacao=0;
    printf("Digite quantidade de aluno: ");
    scanf("%i", &qtd);
    for(i=0; i<qtd; i++){
        printf("Digite nome do aluno: ");
        scanf("%s", &nome);
        printf("Digite a nota: ");
        scanf("%f", &nota);
        if(nota >=7){
            aprovados++;
            printf("Aprovado %s\n", nome);
        }
        else if(nota>=5 && nota<7){
            recuperacao++;
            printf("Recuperação: %s\n", nome);
        }
        else{
            reprovados++;
            printf("Reprovado: %s\n", nome);
        }
    }
    printf("Aprovados: %i\n", aprovados);
    printf("Recuperação: %i\n", recuperacao);
    printf("Reprovados: %i\n", reprovados);

}
