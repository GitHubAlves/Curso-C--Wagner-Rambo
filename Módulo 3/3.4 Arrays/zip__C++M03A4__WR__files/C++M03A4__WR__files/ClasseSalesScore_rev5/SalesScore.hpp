//
//  Classe criada em julho de 2022
//  Implementa o score de vendas em lojas hipotéticas...
//  Desenvolvida por WR Kits.
//


// ======================================================
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


// ======================================================
// --- Desenvolvimento da Classe ---
class SalesScore
{
  public:     //public é um especificador de acesso

    const static int products = 10; //número de produtos a serem vendidos

    SalesScore(string, const int salesArray[]);   //construtor da classe

    void setStoreTitle(string);   //função-membro que configura o nome da loja
    string getStoreTitle();       //função-membro que obtém o nome da loja
    void bootSystem();            //função-membro para inicialização do sistema
    void processSales();          //processa operações com os dados
    int getMin();                 //localiza o valor mínimo
    int getMax();                 //localiza o valor máximo
    double getAvg();              //determina a média em vendas
    void genGraph();              //gráfico de barras para distribuição das vendas
    void dispSales();             //apresenta resultados

  private:    //private é um especificador de acesso onde o usuário final não pode utilizar diretamente os dados

    string storeTitle;  //declaração para um membro de dados
    int sales[products]; //array para armazenar as vendas

}; //end class SalesScore



