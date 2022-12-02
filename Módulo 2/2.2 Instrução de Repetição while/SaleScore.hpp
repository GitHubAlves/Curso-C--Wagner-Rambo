/*
    class criada em novembro de 2022
*/
//=====================================
//            DESENVOLVIMENTO DA CLASSE



class salesScore
{
	public:                                 //public é um espesificador de acesso, estará acessivel clienta

	    salesScore(string title);           //CONSTRUTOR DA CLASSE	    	
		void setStoreTitle(string title);   //FUCNAO-MEMBRO QUE CONFIGURA O NOME DA LOJA
		string getStoreTitle();             //funcao que obtem o nome da loja		
		void bootSystem(string StoreTitle);
		void calcSalesAverage();             //Funcão membro para calcular o total e média de n-vendas
	private:                                //PRIVETA É UM ESPESIFICADOR DE ACESSO ONDE O USUÁRIO FINAL NAO PODE UTILIZAR DIRETAAMENTE OS DADOS
		string storeTitle;                  //DECLARAÇÃO PARA UM MEMBRO DE DADOS

};
//======================================
//            END CLASS SaleStore