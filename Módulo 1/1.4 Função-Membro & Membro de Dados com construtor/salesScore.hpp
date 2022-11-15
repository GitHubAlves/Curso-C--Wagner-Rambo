/*
    class criada em novembro de 2022
*/
//=====================================
//            DESENVOLVIMENTO DA CLASSE
class salesScore
{
	public:                                     //public é um espesificador de acesso, estará acessivel clienta

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
	private:  //PRIVETA É UM ESPESIFICADOR DE ACESSO ONDE O USUÁRIO FINAL NAO PODE UTILIZAR DIRETAAMENTE OS DADOS
		string storeTitle;  //DECLARAÇÃO PARA UM MEMBRO DE DADOS

};
//======================================
//            END CLASS SaleStore