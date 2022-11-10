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


int quantidade_nos(struct noh* raiz) {
    if (raiz == NULL) //Se n�o tiver valores vai retornar que a �rvore possui zero n�s
        return 0;
    else
        return 1 + quantidade_nos(raiz->esquerda) + quantidade_nos(raiz->direita); //Soma a quantidade de n�s da direita, da esquerda e a raiz

}

int altura(struct noh* raiz) {
    if (raiz == NULL) { //Se n�o tiver valores vai retornar que a �rvore possui altura zero
        return 0;
    }
    else { //Compara a altura dos ramos da direita e esquerda e soma a raiz ao maior valor
    int he = altura(raiz->esquerda);
    int hd = altura(raiz->direita);
    if (he < hd) return hd + 1;//Se a altura do ramo da direita for maior soma a raiz na sua altura
    else return he + 1;//Se a altura do ramo da esquerda for maior soma a raiz na sua altura
   }
}

int soma_no(struct noh* raiz) {
    if (raiz == NULL) { //Se n�o tiver valores vai retornar que soma dos n�s � zero
        return 0;
    }
    return ((raiz->dado) + soma_no(raiz->esquerda) + soma_no(raiz->direita)); //Faz a soma dos valores dos n�s da direta, esquerda e raiz
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

    int nos = quantidade_nos(raiz_de_todos_os_males);
    printf("A quantidade de n�s �: %d\n", nos); //Escreve a quantidade de n�s que foi calculada

    int alt = altura(raiz_de_todos_os_males);
    printf("A altura da �rvore �: %d\n", alt); //Escreve o valor da altura da �rvore

    int somanos = soma_no(raiz_de_todos_os_males);
    printf("A soma dos valores dos n�s �: %d\n", somanos); //Escreve a soma dos valores de todos os n�s
}

