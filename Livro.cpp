#include <iostream>
#include <fstream>

#include "Livro.h"

using namespace std;

Livro::Livro (string titulo, string editora, string autor, int isbn, int paginas)
{
	this->titulo = titulo;
	this->editora = editora;
	this->autor = autor;
	this->iSBN = isbn;
	this->paginas = paginas;
}

Livro::Livro (const Livro &l)
{
	titulo = l.titulo;
	editora = l.editora;
	autor = l.autor;
	iSBN = l.iSBN;
	paginas = l.paginas;
}

string Livro::getTitulo()
{
	return titulo;
}

string Livro::getEditora()
{
	return editora;
}

string Livro::getAutor()
{
	return autor;
}

int Livro::getISBN()
{
	return iSBN;
}

int Livro::getPaginas()
{
	return paginas;
}