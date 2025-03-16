#include <stdio.h> 

int main() {
 int i;

 i = 0;

 while (i < 10) {
      printf("while: %d\n", i);
      i++;
 }

 do {
      printf("do: %d\n", i);
      i++;
 } while (i < 10);

 return 0;
 }
 /* Saída do do..while: 10 */
 /* While: Pode não executar se a condição for falsa desde o início, a condição é testada antes da execução do bloco e quando não queremos executar o loop caso a condição já seja falsa. Do..while: Sempre executa pelo menos uma vez, a condição é testada depois da primeira execução e quando queremos garantir pelo menos uma execução  */
 /* O while executa enquanto a condição for verdadeira, e o do..while executa pelo menos uma vez antes de verificar. */
 /* While: Apenas a condição, quando não sabemos quantas vezes o loop vai rodar, usado quando a repetição depender de uma condição externa. For: Estrutura completa, quando sabemos exatamente quantas vezes o loop precisa rodar, usado quando souber o número de repetições. */
