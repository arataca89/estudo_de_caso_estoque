// estoque#1.cpp
// 20210120
//
// Define a classe Estoque
// Define a função-membro msgTitulo() que exibe uma mensagem na tela
// Cria um objeto Estoque e chama a função msgTitulo()

#include <iostream>

using std::cout;
using std::endl;

// Definição da classe Estoque
class Estoque{
	
public:
	// função que exibe uma mensagem na tela
	void msgTitulo(){
		
		cout << "==============" << endl;
		cout << "   ESTOQUE" << endl;
		cout << "==============" << endl;
	} 
	
}; // fim da classe Estoque


int main(){
	
	Estoque estoque1;
	
	estoque1.msgTitulo();
	
	return 0;
}

// end
