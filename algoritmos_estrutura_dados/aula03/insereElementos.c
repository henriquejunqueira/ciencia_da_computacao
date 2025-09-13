#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura do nó da lista ligada
struct Node{
    char data[100]; // Dados do nó (string de tamanho 100)
    struct Node* next; // Ponteiro para o próximo nó
};

// Função para inserir um elemento no início da lista
void insert(struct Node** head, char* newData){
    // Aloca memória para o novo nó
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    // Copia os dados para o novo nó
    strcpy(newNode->data, newData);

    // Define o próximo do novo nó como o antigo início da lista
    newNode->next = *head;

    // Define o novo nó como o início da lista
    *head = newNode;
}

// Função para imprimir os elementos da lista
void printList(struct Node* node){
    while(node != NULL){
        printf("%s ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main(){
    // Inicializa a lista como vazia
    struct Node* head = NULL;

    // Insere elementos na lista
    insert(&head, "exemplo!!!");
    insert(&head, "um");
    insert(&head, "é");
    insert(&head, "este");
    insert(&head, "Oi,");

    // Imprime os elementos da lista
    // printf("Lista ligada de strings: ");
    printf("Código da aula de hoje: ");
    printList(head);

    return 0;
}