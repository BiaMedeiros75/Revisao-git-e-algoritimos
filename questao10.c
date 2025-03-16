#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
    struct Aluno *prox;
} aluno_t;

aluno_t *aluno_root = NULL;

void inserir_aluno(char nome[], int faltas, float nota) {
 
    aluno_t *novo_aluno = (aluno_t *)malloc(sizeof(aluno_t));
    if (novo_aluno == NULL) {
        printf("Erro ao alocar memória para o aluno.\n");
        return;
    }

    strcpy(novo_aluno->nome, nome);
    novo_aluno->faltas = faltas;
    novo_aluno->nota = nota;
    novo_aluno->prox = NULL;

    if (aluno_root == NULL) {
        aluno_root = novo_aluno;
    } else {
      
        aluno_t *temp = aluno_root;
        while (temp->prox != NULL) {
            temp = temp->prox;
        }
        temp->prox = novo_aluno;
    }
}

void exibir_lista() {
    aluno_t *temp = aluno_root;
    while (temp != NULL) {
       
        printf("\n--- Dados do Aluno ---\n");
        printf("Nome: %s", temp->nome);  
        printf("Faltas: %d\n", temp->faltas);
        printf("Nota: %.2f\n", temp->nota);

        if (temp->nota >= 6 && temp->faltas <= 20) {
            printf("Status: Aprovado\n");
        } else {
            printf("Status: Reprovado\n");
        }

        temp = temp->prox;  
    }
}

int main() {
    int n, faltas;
    float nota;
    char nome[100];

    printf("Quantos alunos deseja inserir? ");
    scanf("%d", &n);
    getchar();  

    for (int i = 0; i < n; i++) {
        printf("\nDigite os dados do aluno %d:\n", i + 1);
        printf("Nome: ");
        fgets(nome, sizeof(nome), stdin);

        printf("Faltas: ");
        scanf("%d", &faltas);
        
        printf("Nota: ");
        scanf("%f", &nota);
        getchar();  

        inserir_aluno(nome, faltas, nota);
    }

    printf("\n--- Lista de Alunos ---\n");
    exibir_lista();

    aluno_t *temp;
    while (aluno_root != NULL) {
        temp = aluno_root;
        aluno_root = aluno_root->prox;
        free(temp);
    }

    return 0;
}
