 /* A função free libera a memória que foi previamente alocada dinamicamente usando funções como malloc, calloc ou realloc. Ela marca o bloco de memória como disponível para reutilização, mas não altera o valor do ponteiro, que ainda aponta para o local da memória liberada. */
 /* Não, após chamar free, o ponteiro não deve mais ser utilizado. Isso é conhecido como ponteiro "pendente" ou "dangling pointer". Embora o ponteiro ainda aponte para o local de memória que foi liberado, o acesso a ele pode resultar em comportamento indefinido, pois a memória pode ser sobrescrita ou não estar mais válida. */
 /* Vazamentos de memória ocorrem quando a memória é alocada dinamicamente, mas nunca é liberada. */
 /* A função malloc retorna NULL quando não consegue alocar a memória solicitada. */
 /* Aloca memória suficiente para armazenar n elementos de size bytes, e inicializa todos os bytes dessa memória com zero */
 /* A principal diferença entre malloc e calloc é que, enquanto malloc apenas aloca a memória sem inicializá-la, calloc aloca a memória e a inicializa com zero. */
