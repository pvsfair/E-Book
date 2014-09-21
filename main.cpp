#include <iostream>
#include <list>
#include <string>

#include "Livro.h"
#include "EBook.h"
#include "Anotacao.h"

using namespace std;

int main(void){

	list<EBook> eBooks;
	EBook eBook01(Livro("Livro01", "Editora01", "Autor01", 9781214558875, 152));
	eBooks.emplace_back(eBook01);
	eBooks.emplace_back(Livro("Livro02", "Editora01", "Autor01", 9781234567890, 25), "Leitor01");

	
	cout << ((eBooks.front().novaAnotacao(151, "Lorem Ipsum")) ? "true" : "false") << "\n";
	cout << ((eBooks.front().novaAnotacao(132, "asbudabsd")) ? "true" : "false") << "\n";
	cout << ((eBooks.front().novaAnotacao(545, "cacacabgbgb")) ? "true" : "false") << "\n";
	cout << ((eBooks.front().novaAnotacao(12, "Blablablabla")) ? "true" : "false") << "\n";

	string aa = "asjnas";
	int i = 0;
	for (list<EBook>::iterator it = eBooks.begin(); it != eBooks.end(); ++it){
		i++;
		cout << "Livro Num: " << i << endl;
		cout << '\t' << "Titulo: " << it->getTitulo() << endl;
		cout << '\t' << "Editora: " << it->getEditora() << endl;
		cout << '\t' << "Autor(a): " << it->getAutor() << endl;
		cout << '\t' << "ISBN: " << it->getISBN() << endl;
		cout << '\t' << "Paginas: " << it->getPaginas() << endl;
		if(it->getLeitor() != "")
			cout << '\t' << "Leitor: " << it->getLeitor() << endl;
		else
			cout << '\t' << "Leitor: Nenhum" << endl;
		if(it->getListaAnotacoes().size() > 0){

			cout << '\t' << "Anotacoes: " << endl;
			for (list<Anotacao>::iterator it2 = it->getListaAnotacoes().begin(); it2 != it->getListaAnotacoes().end(); ++it2){
				cout << "\t\t" << "Pagina: " << it2->getPagina() << endl;
				cout << "\t\t" << "Anotacao: " << endl;
				cout << "\t\t\t" << it2->getAnotacaoText() << endl;
			}
		}
		cout << "\n\n";
	}
	std::cout << '\n';



	system("pause");
	return 0;
}