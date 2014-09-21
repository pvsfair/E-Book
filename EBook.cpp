#include <iostream>

#include "EBook.h"
#include "Anotacao.h"
#include "Livro.h"

using namespace std;

EBook::EBook(const EBook &eBook) : Livro(eBook)
{
	this->leitor = eBook.leitor;
	this->paginaAtual = eBook.paginaAtual;
	this->listaAnotacoes = listaAnotacoes;
}

EBook::EBook(const Livro &livro, string leitor) : Livro(livro)
{
	this->leitor = leitor;
	this->paginaAtual = 0;
}

bool EBook::novaAnotacao(int pagina, string texto)
{
	if(pagina <= this->getPaginas()){
		listaAnotacoes.emplace_back(texto, pagina);
		return true;
	} else return false;
}

bool EBook::editarAnotacao(int id, string texto)
{
	if(id > listaAnotacoes.size())
	{
		cout << "Out of bounds" << endl;
		return false;
	}
	else
	{
		Anotacao *anotTemp;
		acharAnotacao(listaAnotacoes, id, anotTemp);
		this->editarAnotacao(anotTemp, texto);

		return true;
	}
}

void EBook::editarAnotacao(Anotacao *anot, string texto)
{
	anot->editarTextoAnotacao(texto);
}

void EBook::acharAnotacao(list<Anotacao> &lista, int id, Anotacao *anot)
{
	list<Anotacao>::iterator it;
	it = lista.begin();
	for (int i = 0; i < id; i++) it++;
	*anot = *it;
}

int EBook::getPaginaAtual()
{
	 return this->paginaAtual;
}

string EBook::getLeitor()
{
	return this->leitor;
}

list<Anotacao>& EBook::getListaAnotacoes()
{
	return this->listaAnotacoes;
}

string EBook::getTitulo()
{
	return Livro::getTitulo();
}

string EBook::getEditora()
{
	return Livro::getEditora();
}

string EBook::getAutor()
{
	return Livro::getAutor();
}

int EBook::getISBN()
{
	return Livro::getISBN();
}

int EBook::getPaginas()
{
	return Livro::getPaginas();
}