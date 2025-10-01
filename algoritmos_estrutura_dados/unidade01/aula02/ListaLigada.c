#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura do nó da lista
struct Node{
    char* data;
    struct Node* next;
};

// Função para criar um nó com uma string
struct Node* newNode(char* value){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = strdup(value); // Aloca memória para a string e copia o valor
    temp->next = NULL;
    return temp;
}

// Função para imprimir a lista ligada
void printList(struct Node* node){
    while(node != NULL){
        printf("%s -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main(){
    // Inicializa a lista como vazia
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // Aloca os nós na memória com strings
    head = newNode("Algoritmos");
    second = newNode(" e Estrutura");
    third = newNode(" de Dados!");

    // Conecta os nós para formar a lista
    head->next = second;
    second->next = third;

    // Imprime a lista ligada
    printf("Lista Ligada de Strings: ");
    printList(head);

    return 0;
}