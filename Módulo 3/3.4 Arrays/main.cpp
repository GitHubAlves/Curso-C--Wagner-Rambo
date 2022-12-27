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

    int salesArray[ salesScore::products]={10, 23, 405, 404, 65, 345, 321, 66, 896, 897};
    salesScore mySales("loja de parafusos", salesArray);
    mySales.bootSystem();
    mySales.processSales();

   while(1);

	return 0;
}







 