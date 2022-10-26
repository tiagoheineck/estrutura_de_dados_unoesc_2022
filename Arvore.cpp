#include "Arvore.h"
#include <cstddef>
#include <iostream>

struct noh
{
    int dado;
    struct noh *esquerda;
    struct noh *direita;
};

void arvore() {
    noh raiz;
    noh esquerda;

    esquerda.dado = 20;
;

    raiz.dado = 5;
    raiz.esquerda = &esquerda;

    std::cout << raiz.dado;
}