/*
    class criada em novembro de 2022
*/
//=====================================
//            DESENVOLVIMENTO DA CLASSE



class salesScore
{
	public:                                 //public � um espesificador de acesso, estar� acessivel clienta

	    salesScore(string title);           //CONSTRUTOR DA CLASSE	    	
		void setStoreTitle(string title);   //FUCNAO-MEMBRO QUE CONFIGURA O NOME DA LOJA
		string getStoreTitle();             //funcao que obtem o nome da loja		
		void bootSystem(string StoreTitle);
		void calcSalesAverage();             //Func�o membro para calcular o total e m�dia de n-vendas
	private:                                //PRIVETA � UM ESPESIFICADOR DE ACESSO ONDE O USU�RIO FINAL NAO PODE UTILIZAR DIRETAAMENTE OS DADOS
		string storeTitle;                  //DECLARA��O PARA UM MEMBRO DE DADOS

};
//======================================
//            END CLASS SaleStore