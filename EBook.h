#ifndef _EBOOK_H
#define _EBOOK_H

#include <iostream>
#include <list>
#include "Anotacao.h"
#include "Livro.h"

using namespace std;

class EBook : Livro{
public:
	EBook (const EBook &);
	EBook (const Livro &, string = "");
	bool novaAnotacao(int, string);
	bool editarAnotacao(int, string);
	inline void editarAnotacao(Anotacao *, string);
	void acharAnotacao(list<Anotacao> &, int, Anotacao *);
	void imprimirEBook(EBook &) const;

	int getPaginaAtual();
	string getLeitor();
	list<Anotacao>& getListaAnotacoes();
	virtual string getTitulo();
	virtual string getEditora();
	virtual string getAutor();
	virtual int getISBN();
	virtual int getPaginas();

private:
	int paginaAtual;
	string leitor;
	list<Anotacao> listaAnotacoes;
};
#endif