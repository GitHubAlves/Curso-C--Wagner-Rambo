//
//  Classe criada em julho de 2022
//  Implementa o score de vendas em lojas hipot�ticas...
//  Desenvolvida por WR Kits.
//


// ======================================================
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


// ======================================================
// --- Desenvolvimento da Classe ---
class SalesScore
{
  public:     //public � um especificador de acesso

    const static int products = 10; //n�mero de produtos a serem vendidos

    SalesScore(string, const int salesArray[]);   //construtor da classe

    void setStoreTitle(string);   //fun��o-membro que configura o nome da loja
    string getStoreTitle();       //fun��o-membro que obt�m o nome da loja
    void bootSystem();            //fun��o-membro para inicializa��o do sistema
    void processSales();          //processa opera��es com os dados
    int getMin();                 //localiza o valor m�nimo
    int getMax();                 //localiza o valor m�ximo
    double getAvg();              //determina a m�dia em vendas
    void genGraph();              //gr�fico de barras para distribui��o das vendas
    void dispSales();             //apresenta resultados

  private:    //private � um especificador de acesso onde o usu�rio final n�o pode utilizar diretamente os dados

    string storeTitle;  //declara��o para um membro de dados
    int sales[products]; //array para armazenar as vendas

}; //end class SalesScore



