#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NODE {
    char nome[100], curso[100];
    long long int cpf;
    struct NODE *proximo;
} NODE;

void incluir(NODE **lista, char nome[], char curso[], long long int cpf) {
    NODE *novo = (NODE *)malloc(sizeof(NODE));
    strcpy(novo->nome, nome);
    strcpy(novo->curso, curso);
    novo->cpf = cpf;  
    novo->proximo = NULL;
    if (*lista == NULL) {
        *lista = novo;
    } else {
        NODE *atual = *lista;
        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        atual->proximo = novo;
    }
}

void imprimir(NODE *lista) {
    while (lista != NULL) {
        printf("Nome: %s\n", lista->nome);
        printf("Curso: %s\n", lista->curso);
        printf("CPF: %lld\n", lista->cpf);
        printf("\n");
        lista = lista->proximo;
    }
}

void excluir(NODE **lista, long long int cpf) {
    NODE *atual = *lista;
    NODE *anterior = NULL;

    while (atual != NULL && atual->cpf != cpf) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == NULL) {
        printf("Usuario com CPF %lld nao encontrado.\n", cpf);
        return;
    }

    printf("O usuario %s com CPF %lld excluido com sucesso.\n", atual->nome, cpf);
    printf("\n");

    if (anterior == NULL) {
        *lista = atual->proximo;
    } else {
        anterior->proximo = atual->proximo;
    }


}

void busca_cpf(NODE *lista, long long cpf) {
    NODE *atual = lista;

    while (atual != NULL) {
        if (atual->cpf == cpf) {
            printf("Usuario encontrado:\n");
            printf("Nome: %s\n", atual->nome);
            printf("Curso: %s\n", atual->curso);
            printf("CPF: %lld\n", atual->cpf);
            printf("\n");
            return;
        }
        atual = atual->proximo;
    }
    printf("Usuario com CPF %lld nao encontrado.\n", cpf);
    printf("\n");
}

void conta_alunos(NODE *lista, char curso[]) {
    int contador = 0;
    NODE *atual = lista;
    while (atual != NULL) {
        if (strcmp(atual->curso, curso) == 0) {
            contador++;
        }
        atual = atual->proximo;
    }
    printf("%d alunos no curso %s\n", contador, curso);
}

void gravar_arquivo(NODE *lista, char *arquivo){

FILE *arq = fopen(arquivo, "ab");
NODE *atual = lista;
    while (atual != NULL) {
        fwrite(atual, sizeof(NODE), 1, arq);
        atual = atual->proximo;
    }

    fclose(arq);
}

void exibir_nomes (char *arquivo){
FILE *arq = fopen(arquivo, "rb");
NODE temp;
while(fread(&temp, sizeof(NODE), 1, arq)==1){
        printf("%s\n", temp.nome);
    }
    printf("\n");
    fclose(arq);
}

void contar_EC (char *arquivo){
FILE *arq = fopen(arquivo, "rb");
NODE temp;
int contador=0;
    while (fread(&temp, sizeof(NODE), 1, arq) == 1) {
        if (strcmp(temp.curso, "Engenharia de Computacao") == 0) {
            contador++;
        }
    }
    printf("\n%d alunos no curso Engenharia de Computacao\n\n", contador);
    fclose(arq);
}

void carregar_arquivo(NODE **lista, const char *arquivo) {
    // Limpar a lista atual
    NODE *atual = *lista;
    while (atual != NULL) {
        NODE *temp = atual;
        atual = atual->proximo;
        free(temp);
    }
    *lista = NULL;

    FILE *arq = fopen(arquivo, "rb");
    NODE temp;
    while (fread(&temp, sizeof(NODE), 1, arq) == 1) {
        incluir(lista, temp.nome, temp.curso, temp.cpf);
    }
    fclose(arq);
}

void atualizar_arquivo(NODE *lista, const char *arquivo) {
    FILE *arq = fopen(arquivo, "wb");
    if (arq == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }
    NODE *atual = lista;
    while (atual != NULL) {
        fwrite(atual, sizeof(NODE), 1, arq);
        atual = atual->proximo;
    }
    fclose(arq);
}

int main() {
    NODE *lista = NULL;
    int opcao;
    char *nome, *curso;
    long long cpf;
    nome = (char *)malloc(1000 * sizeof(char));
    curso = (char *)malloc(1000 * sizeof(char));

    while (1) {
        printf("Escolha uma opcao:\n");
        printf("1. Incluir usuario\n");
        printf("2. Excluir usuario\n");
        printf("3. Buscar usuario por CPF\n");
        printf("4. Contar alunos por curso\n");
        printf("5. Imprimir lista\n");
        printf("6. Salvar dados no arquivo\n");
        printf("7. Exibir nomes dos usuarios arquivados\n");
        printf("8. Exibir numero de alunos de Engenharia de Computacao arquivados\n");
        printf("9. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                carregar_arquivo(&lista, "lista.bin");
                printf("\nDigite o nome: ");
                scanf(" %[^\n]", nome);  
                printf("Digite o curso: ");
                scanf(" %[^\n]", curso);
                printf("Digite o CPF: ");
                scanf("%lld", &cpf);
                incluir(&lista, nome, curso, cpf);
                printf("\n");
                atualizar_arquivo(lista, "lista.bin");
                break;

            case 2:
                carregar_arquivo(&lista, "lista.bin");
                printf("\nDigite o CPF do usuario a ser excluido: ");
                scanf("%lld", &cpf);
                printf("\n");
                excluir(&lista, cpf);
                atualizar_arquivo(lista, "lista.bin");
                break;

            case 3:
                carregar_arquivo(&lista, "lista.bin");
                printf("\nDigite o CPF do usuario a ser buscado: ");
                scanf("%lld", &cpf);
                busca_cpf(lista, cpf);
                break;

            case 4:
                carregar_arquivo(&lista, "lista.bin");
                printf("\nDigite o curso para contar alunos: ");
                scanf(" %[^\n]", curso);
                conta_alunos(lista, curso);
                break;

            case 5:
                carregar_arquivo(&lista, "lista.bin");
                printf("\nLista de usuarios:\n");
                imprimir(lista);
                break;

            case 6:
                printf("\nSalvando Dados...\n\n");
                gravar_arquivo(lista, "lista.bin");
                atualizar_arquivo(lista, "lista.bin");
                break;

            case 7:
                carregar_arquivo(&lista, "lista.bin");
                printf("\nOs usuarios sao:\n");
                exibir_nomes("lista.bin");
                break;

            case 8:
                carregar_arquivo(&lista, "lista.bin");
                contar_EC("lista.bin");
                break;

            case 9:
                printf("Saindo...\n");
                return 0;

            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    }
}
