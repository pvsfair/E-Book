#ifndef _LIVRO_H
#define _LIVRO_H

#include <iostream>
#include <fstream>

using namespace std;

class Livro
{
public:
	Livro (string, string, string, int, int);
	Livro(const Livro &);
	virtual string getTitulo();
	virtual string getEditora();
	virtual string getAutor();
	virtual int getISBN();
	virtual int getPaginas();

private:
	int paginas;
	int iSBN;
	string autor;
	string editora;
	string titulo;
	//ifstream texto;
};
#endif