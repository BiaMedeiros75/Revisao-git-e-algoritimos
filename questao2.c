#include <stdio.h>

int main() {
    char nome[50];
    float nota;
    int frequencia;
    
    printf("Digite o nome do estudante: ");
    scanf("%49s", nome);
    printf("Digite a nota do estudante: ");
    scanf("%f", &nota);
    printf("Digite a frequencia do estudante (em %%): ");
    scanf("%d", &frequencia);
    
    if (nota >= 7.0 && frequencia >= 75) {
        printf("%s foi APROVADO!\n", nome);
    } else {
        printf("%s foi REPROVADO.\n", nome);
    }
    
    return 0;
}
