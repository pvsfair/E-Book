#include <iostream>

#include "Anotacao.h"

using namespace std;

Anotacao::Anotacao()
{
	this->anotacaoText = "";
	this->pagina = 0;
}

Anotacao::Anotacao(string texto, int pagina)
{
	this->anotacaoText = texto;
	this->pagina = pagina;
}

void Anotacao::editarTextoAnotacao(string novoTexto)
{
	this->anotacaoText = novoTexto;
}

void Anotacao::moverDePagina(int novaPagina)
{
	this->pagina = novaPagina;
}

int Anotacao::getPagina()
{
	return this->pagina;
}

string Anotacao::getAnotacaoText()
{
	return this->anotacaoText;
}