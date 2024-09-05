#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
    int valor;
    struct Nodo *proximo;
} NODO;

typedef struct {
    NODO *impares, *pares;
} LISTA;

void INIC(LISTA *lista) {
    lista->impares = lista->pares = NULL;
}

void INSERIR(LISTA *lista, int valor) {
    NODO **alvo = (valor % 2) ? &lista->impares : &lista->pares;
    NODO *novo = (NODO*) malloc(sizeof(NODO));
    novo->valor = valor;
    novo->proximo = NULL;
    
    if (*alvo == NULL) {
        *alvo = novo;
    } else {
        NODO *temp = *alvo;
        while (temp->proximo) temp = temp->proximo;
        temp->proximo = novo;
    }
}

void RETIRAR(LISTA *lista, int valor) {
    NODO **alvo = (valor % 2) ? &lista->impares : &lista->pares;
    NODO *atual = *alvo, *anterior = NULL;
    
    while (atual && atual->valor != valor) {
        anterior = atual;
        atual = atual->proximo;
    }
    
    if (atual) {
        if (anterior) anterior->proximo = atual->proximo;
        else *alvo = atual->proximo;
        free(atual);
    }
}

void LISTAR(LISTA *lista) {
    NODO *atual;

    printf("Ímpares: ");
    for (atual = lista->impares; atual; atual = atual->proximo)
        printf("%d ", atual->valor);

    printf("\nPares: ");
    for (atual = lista->pares; atual; atual = atual->proximo)
        printf("%d ", atual->valor);

    printf("\n");
}

int main() {
    LISTA lista;
    INIC(&lista);

    INSERIR(&lista, 5);
    INSERIR(&lista, 10);
    INSERIR(&lista, 3);
    INSERIR(&lista, 8);
    INSERIR(&lista, 7);

    printf("Lista após inserções:\n");
    LISTAR(&lista);

    RETIRAR(&lista, 10);

    printf("Lista após retirar 10:\n");
    LISTAR(&lista);

    return 0;
}