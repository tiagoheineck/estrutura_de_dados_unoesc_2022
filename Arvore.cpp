#include "Arvore.h"
#include <cstddef>
#include <iostream>


struct noh* criar_noh(int dado)
{
    struct noh* nohh
        = (struct noh*)malloc(sizeof(struct noh));

    nohh->dado = dado;

    nohh->esquerda = NULL;
    nohh->direita = NULL;
    return (nohh);
}

struct noh* inserir(noh* nohzito, int dado)
{
    if (nohzito == NULL)
        return criar_noh(dado);

    if (dado < nohzito->dado)
        nohzito->esquerda = inserir(nohzito->esquerda, dado);
    else if (dado > nohzito->dado)
        nohzito->direita = inserir(nohzito->direita, dado);

    return nohzito;
}

void em_ordem(struct noh* raiz)
{
    if (raiz != NULL) {
        em_ordem(raiz->esquerda);
        std::cout << raiz->dado << '\n';
        em_ordem(raiz->direita);
    }
}

void pre_ordem(struct noh* raiz)
{
    if (raiz != NULL) {
        std::cout << raiz->dado << '\n';
        pre_ordem(raiz->esquerda);
        pre_ordem(raiz->direita);
    }
}

void pos_ordem(struct noh* raiz)
{
    if (raiz != NULL) {
        pos_ordem(raiz->esquerda);
        pos_ordem(raiz->direita);
        std::cout << raiz->dado << '\n';
    }
}

void arvore() {
    struct noh* raiz_de_todos_os_males = NULL;
    raiz_de_todos_os_males = inserir(raiz_de_todos_os_males, 50);
    inserir(raiz_de_todos_os_males, 30);
    inserir(raiz_de_todos_os_males, 20);
    inserir(raiz_de_todos_os_males, 40);
    inserir(raiz_de_todos_os_males, 70);
    inserir(raiz_de_todos_os_males, 60);
    inserir(raiz_de_todos_os_males, 80);
    
    std::cout << "----------------ORDEM         ----------------\n" ;
    em_ordem(raiz_de_todos_os_males);
    std::cout << "-----------------PRE-ORDEM   ----------------\n";
    pre_ordem(raiz_de_todos_os_males);
    std::cout << "-----------------POST-ORDEM   ----------------\n";
    pos_ordem(raiz_de_todos_os_males);
}

