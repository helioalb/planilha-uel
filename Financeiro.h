/*
 * Financeiro.h
 *
 *  Created on: 01/11/2009
 *      Author: Helio
 */
#ifndef FINANCEIRO_H_
#define FINANCEIRO_H_

#include "Cabecalhos.h"
#include "Menus.h"
#include "Cliente.h"
#include "Fornecedores.h"
struct Financeiro
{
	float saldo;
	float entradav;
	float saidav;
	char descricao[30];
	char nome[30];
	struct Cliente c;
	struct Fornecedores;
};

struct FinanceiroFuncoes
{
	FILE *fin;
	struct Menus *menu;


	FinanceiroFuncoes();
	~FinanceiroFuncoes();
	void entrada();
	void saida();
	//void contasAPagar();
	//void contasAReceber();
	void historicoEntrada();
	void historicoSaida();
	//void relatorioAPagar();
	//void relatorioAReceber();
};


#endif /* FINANCEIRO_H_ */
