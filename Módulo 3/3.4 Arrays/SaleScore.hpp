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
using std::fixed;   //garante que as casas depois da vírgula sejam exibidas

#include <string>  //classe de string no padrão C++
using std::string;

#include <iomanip>        //manipuladores de fluexo parametrizados
using std::setprecision;  //precisão da saída numérica
using std::setw;

class salesScore
{
	public:                                  //public é um espesificador de acesso, estará acessivel clienta
	
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

	private:                                //PRIVETA É UM ESPESIFICADOR DE ACESSO ONDE O USUÁRIO FINAL NAO PODE UTILIZAR DIRETAAMENTE OS DADOS
		string storeTitle;                  //DECLARAÇÃO PARA UM MEMBRO DE DADOS
        int sales[products];
};
//======================================
//            END CLASS SaleStore