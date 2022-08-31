#include <locale>
#include <iostream>
#include <string>
#include <stdio.h>
#include "Calculos.h";
#include "Estruturas.h";

void separador()
{
	std::cout << "--------------------------------------------------\n";
}

int main()
{
	int opcao;
	setlocale(LC_ALL, "portuguese");

	std::cout << "Olá, seja bem vindo ao mundo da Estrutura de Dados\n";
	separador();
	std::cout << "Qual programa você quer executar? \n";
	separador();

	std::string opcoes[6] = { "1 - Soma", "2 - Subtração", "3 - Multiplicacao", "4 - Divisao", "5 - Conversão de Graus", "6 - pilha"};

	separador();
	for (int i = 0; i < 6; i++) {
		std::cout << opcoes[i] << "\n";		
	}
	scanf_s("%d", &opcao);

	switch (opcao) {
		case 1:
			separador();
			std::cout << "Estou iniciando soma \n";
			soma();
			break;
		case 2:
			separador();
			std::cout << "Estou iniciando a subtração \n";
			subtracao();
			break;
		case 3:
			separador();
			std::cout << "Estou iniciando a subtração \n";
			multiplicacao();
			break;
		case 4:
			separador();
			std::cout << "Estou iniciando a subtração \n";
			divisao();
			break;
		case 5:
			separador();
			std::cout << "Estou iniciando a Conversão de Graus \n";
			conversao_graus();
			break;
		case 6:
			separador();
			std::cout << "Estou iniciando a FILAAA \n";
			fila();
			break;
		default:
			std::cout << "Opção invalida \n";






	}
}