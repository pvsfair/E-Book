#ifndef _ANOTACAO_H
#define _ANOTACAO_H

#include <iostream>

using namespace std;

class Anotacao
{
public:
	Anotacao();
	Anotacao(string, int);
	void editarTextoAnotacao(string);
	void moverDePagina(int);
	int getPagina();
	string getAnotacaoText();

private:
	int pagina;
	string anotacaoText;
};
#endif