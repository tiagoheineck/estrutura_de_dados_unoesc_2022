#include <locale>
#include <iostream>
#include <string>
#include <stdio.h>
#include "Calculos.h";
#include "Estruturas.h";
#include "Pessoa.h";
#include "Arvore.h";

void separador()
{
	std::cout << "--------------------------------------------------\n";
}

int main()
{
	int opcao;
	string nome;
	int idade = 0;

	setlocale(LC_ALL, "portuguese");

	std::cout << "Ol�, seja bem vindo ao mundo da Estrutura de Dados\n";
	separador();

	std::cout << "Primeiro digite seu nome: \n";
	getline(std::cin, nome);

	std::cout << "Agora digite sua idade: \n";
	scanf_s("%d", &idade);

	Pessoa usuario;

	usuario.nome = nome;
	usuario.idade = idade;

	string nomeUpper = maiusculas(usuario);
	std::cout << "Ol�, " << nomeUpper;

	separador();

	std::cout << "Qual programa voc� quer executar? \n";
	separador();

	std::string opcoes[1] = { "1 - Adicionar valor na arvore", };

	separador();
	for (int i = 0; i < 1; i++) {
		std::cout << opcoes[i] << "\n";		
	}
	scanf_s("%d", &opcao);



	switch (opcao) {
		case 1:
			separador();
			std::cout << "Bora pra �rvore \n";
			arvore();
			


		default:
			std::cout << "Op��o invalida \n";

	}
}