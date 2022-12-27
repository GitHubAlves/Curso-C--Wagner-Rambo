/*
    class criada em novembro de 2022
*/
//=====================================
//            DESENVOLVIMENTO DA CLASSE

// --- Bibliotecas ---
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;   //garante que as casas depois da v�rgula sejam exibidas

#include <string>  //classe de string no padr�o C++
using std::string;

#include <iomanip>        //manipuladores de fluexo parametrizados
using std::setprecision;  //precis�o da sa�da num�rica
using std::setw;

class salesScore
{
	public:                                  //public � um espesificador de acesso, estar� acessivel clienta
	
	    const static int products=10;       

	    salesScore(string, const int salesArray[]);  //construtor da classe
	    
	    void setStoreTitle(string);
	    string getStoreTitle();
	    void bootSystem();
	    void processSales();
	    int getMin();
	    int getmax();
	    double getAvg();
	    void genGraph();
	    void disSales();    

	private:                                //PRIVETA � UM ESPESIFICADOR DE ACESSO ONDE O USU�RIO FINAL NAO PODE UTILIZAR DIRETAAMENTE OS DADOS
		string storeTitle;                  //DECLARA��O PARA UM MEMBRO DE DADOS
        int sales[products];
};
//======================================
//            END CLASS SaleStore