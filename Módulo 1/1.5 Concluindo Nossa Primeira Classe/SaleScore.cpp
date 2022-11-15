/*
    class criada em novembro de 2022
    desenvolvimento das funcoes membros
*/
//=====================================
//            DESENVOLVIMENTO DAS FUNCOES MEMBROS

#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
#include "SaleScore.hpp"


salesScore::salesScore(string title)
{
	setStoreTitle(title);

}//END salesScore

void salesScore::setStoreTitle(string title)           //FUCNAO-MEMBRO QUE CONFIGURA O NOME DA LOJA
{
    if(title.length() <=20)  //o titulo tem no maximo 20 caracteres
	storeTitle=title;        //armazena em storeTitle
}//END StoreTitle


string salesScore::getStoreTitle() //funcao que obtem o nome da loja
{
	return storeTitle;
}//  END getStoreTitle


void salesScore::bootSystem(string StoreTitle)
{
	cout << "score de vendas!\n" << StoreTitle << endl;
}

