/*
    c com Classe
    Autor: Lucas loren�o Alves
    Data: Novembro de 2022
    Vers�o: 01
    IDE: Code::Blocks
    Revisao 1-Com construtor
*/

#include <iostream>
using std::cout;
using std::endl;
#include <string>


//=====================================
//            DESENVOLVIMENTO DA CLASSE
class salesScore
{
	public:                                     //public � um espesificador de acesso, estar� acessivel clienta

	    salesScore(string title)
	    {
	        setStoreTitle(title);
	        
	    }//END salesScore
	
		void setStoreTitle(string title)           //FUCNAO-MEMBRO QUE CONFIGURA O NOME DA LOJA
		{
			storeTitle=title;
		}//END StoreTitle
		

		string getStoreTitle() //funcao que obtem o nome da loja
		{
			return storeTitle;
		}//  END getStoreTitle

		
		void bootSystem(string StoreTitle)
		{
			cout << "score de vendas!\n" << StoreTitle << endl;
		}
	private:  //PRIVETA � UM ESPESIFICADOR DE ACESSO ONDE O USU�RIO FINAL NAO PODE UTILIZAR DIRETAAMENTE OS DADOS
		string storeTitle;  //DECLARA��O PARA UM MEMBRO DE DADOS

};
//======================================
//            END CLASS SaleStore


//======================================
//FUNCAO PRINCIPAL MAIN
int main()
{
	//cria dois objetos storeScore
    salesScore myStore1("WR Kits Master store Plus!");
    salesScore myStore2("WR Kists");
    
    cout<<"Loja 1 criada com sucesso: "<<myStore1.getStoreTitle()
        <<"\n Loja 2 criada com sucesso: "<<myStore2.getStoreTitle()<<endl;
        
        while(1);

	return 0;
}







