/*
    class criada em novembro de 2022
*/
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