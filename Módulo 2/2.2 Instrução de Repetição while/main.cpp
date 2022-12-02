/*
    c com Classe
    Autor: Lucas lorenço Alves
    Data: Novembro de 2022
    Versão: 01
    IDE: Code::Blocks
    Revisao 1-Com construtor
*/

#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
#include "SaleScore.hpp"



//======================================
//FUNCAO PRINCIPAL MAIN
int main()
{
	//cria dois objetos storeScore
    salesScore myStore1("WR Kits Master store Plus blaster!");
    salesScore myStore2("WR Kists new");
    
    cout<<"Loja 1 criada com sucesso: "<<myStore1.getStoreTitle()
        <<"\n Loja 2 criada com sucesso: "<<myStore2.getStoreTitle()<<endl;
        
        while(1);

	return 0;
}







 