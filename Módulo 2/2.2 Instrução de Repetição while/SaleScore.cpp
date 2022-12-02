/*
    class criada em novembro de 2022
    desenvolvimento das funcoes membros
*/
//=====================================
//            DESENVOLVIMENTO DAS FUNCOES MEMBROS

#include <iostream>
using std::cout;
using std::endl;
using std::fixed;                                       //garante que as casas depois da virgula seja exibida

#include <string>
using std::string;

#include "SaleScore.hpp"

#include <iomanip>                                      //Manipulador de fluxo parametrizados
using std::setprecision;                                //Precisão de saídas 


salesScore::salesScore(string title)
{
	setStoreTitle(title);

}//END salesScore

void salesScore::setStoreTitle(string title)            //FUCNAO-MEMBRO QUE CONFIGURA O NOME DA LOJA
{
    if(title.length() <=20)                             //O titulo tem no maximo 20 caracteres
	storeTitle=title;                                   //Armazena em storeTitle
}//END StoreTitle


string salesScore::getStoreTitle()                      //Funcao que obtem o nome da loja
{
	return storeTitle;
}//  END getStoreTitle


void salesScore::bootSystem(string StoreTitle)
{
	cout << "score de vendas!\n" << StoreTitle << endl;
}

//=====================================
void salesScore::calcSalesAverage(){
    int acc=0;                                          //Acumulador os valores de vendas
    int counter=0;                                      //Numeros de vendas inseridos pelo usuário
    int value=0;                                        //Armazena o valor de cada venda
    float avg=0;                                        //Armazena a média de vendas
    
    count <<"INSIRA O VAOR DA VENDA OU -1 PARA SAIR: "
    cin>>value;
    while(value!=-1){
        acc=acc+value;
    }

}








