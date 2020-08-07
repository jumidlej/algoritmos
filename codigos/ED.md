# Estrutura de Dados
## Tipo de Dado 
Define o conjunto de valores que uma variável pode assumir
## Estrutura de Dado
Relacionamento lógico entre os tipos de dados
## Tipo Abstrato de Dado
* Inclusão das operações para a manipulação dos dados (criação, inclusão, remoção)
    - Encapsulamento e segurança: usuário não tem acesso direto aos dados
    - Flexibilidade e reutilização: alterar o TAD sem alterar as aplicações que o utilizam
    - Exemplo de TAD: arquivos em c
    - Separação do conceito e da implementação (arquivos .h e .c)
* Arquivos .h
    - Protótipos das funções
    - Dados globalmente acessíveis
    - Tipos de ponteiro
* Arquivos .c
    - Declaração do tipo de dado
    - Implementação das funções
### Lista
* Sequência de elementos do mesmo tipo. 
* Seus elementos possuem estrutura interna abstraída, ou seja, sua complexidade é arbitrária e não afeta o funcionamento.
* Número de elementos igual a zero quer dizer que a lista está vazia.
* Operações básicas:
    - Criar lista
    - Consultar elemento
    - Inserir elemento
    - Remover elemento
    - Destruir lista
* Lista Estática
    - Acesso direto aos elementos e sequencial na memória
    - Definição de um tamanho inicial (alocação de memória em tempo de compilação)
* Lista Dinâmica Encadeada
    - Acesso indireto aos elementos e podem estar em diferentes locais da memória
    - Alocação de memória em tempo de execução
* Lista Dinâmica Duplamente Encadeada
    - Acesso indireto aos elementos
* Pilha
* Fila

## Dúvidas
* -> e .
    - Diferença de variável-> para variável.
    - O ponto acessa um dado de uma estrutura, mas e se eu tiver um ponteiro para uma estrutura? então: (*variável). = variável->
* ponteiros
    - *var: acessa o conteúdo
    - var: acessa o endereço armazenado em var
    - &var: acessa o endereço de var