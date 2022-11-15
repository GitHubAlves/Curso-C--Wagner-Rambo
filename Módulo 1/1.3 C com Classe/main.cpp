/*
    c com Classe
    Autor: Lucas lorenço Alves
    Data: Novembro de 2022
    Versão: 01
    IDE: Code::Blocks
*/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
using std::getline;

//=====================================
//            DESENVOLVIMENTO DA CLASSE
class salesScore
{
	public:                                     //public é um espesificador de acesso, estará acessivel clienta

		void setStoreTitle(string title)           //FUCNAO-MEMBRO QUE CONFIGURA O NOME DA LOJA
		{
            storeTitle=title;
		}
        
        string getStoreTitle() //funcao que obtem o nome da loja
        {
            return storeTitle;
        }//  END getStoreTitle
        
		void bootSystem(string StoreTitle)
		{
			cout << "score de vendas!\n" << StoreTitle << endl;
		}
    private:  //PRIVETA É UM ESPESIFICADOR DE ACESSO ONDE O USUÁRIO FINAL NAO PODE UTILICAR DIRETAAMENTE OS DADOS
        string storeTitle;

};
//======================================
//            END CLASS SaleStore


//======================================
//FUNCAO PRINCIPAL MAIN
int main()
{
	string StoreTitle;
	salesScore MySale;
	cout <<"TITULO INICIAL DA LOJA: "<<MySale.getStoreTitle() << endl;
	
	cout << "\nINSIRA O NOME DA LOJA: "<<endl;
	
	
	
	
	getline(cin, StoreTitle);
	cout << endl;
	MySale.bootSystem(StoreTitle);


	return 0;
}







