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

		eBook01.imprimirEBook(*it);
	}
	std::cout << '\n';



	system("pause");
	return 0;
}