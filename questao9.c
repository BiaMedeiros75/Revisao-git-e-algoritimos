#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
} aluno_t;

int main() {
    
    aluno_t *aluno = (aluno_t *)malloc(sizeof(aluno_t));
    if (aluno == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1; 
    }

    printf("Digite o nome do aluno: ");
    fgets(aluno->nome, sizeof(aluno->nome), stdin);

    printf("Digite o número de faltas: ");
    scanf("%d", &aluno->faltas);

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno->nota);

    printf("\n--- Dados do Aluno ---\n");
    printf("Nome: %s", aluno->nome);  
    printf("Faltas: %d\n", aluno->faltas);
    printf("Nota: %.2f\n", aluno->nota);

    if (aluno->nota >= 6 && aluno->faltas <= 20) {
        printf("Status: Aprovado\n");
    } else {
        printf("Status: Reprovado\n");
    }

    free(aluno);

    return 0;
}
