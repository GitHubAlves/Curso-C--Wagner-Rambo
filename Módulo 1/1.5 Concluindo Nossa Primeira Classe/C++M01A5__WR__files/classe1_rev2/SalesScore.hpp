//
//  Classe criada em julho de 2022
//  Implementa o score de vendas em lojas hipot�ticas...
//  Desenvolvida por WR Kits.
//

#include <string>
using std::string;

// ======================================================
// --- Desenvolvimento da Classe ---
class SalesScore
{
  public:     //public � um especificador de acesso

    SalesScore(string);           //construtor da classe
    void setStoreTitle(string);   //fun��o-membro que configura o nome da loja
    string getStoreTitle();       //fun��o-membro que obt�m o nome da loja
    void bootSystem(string);      //fun��o-membro para inicializa��o do sistema

  private:    //private � um especificador de acesso onde o usu�rio final n�o pode utilizar diretamente os dados

    string storeTitle;  //declara��o para um membro de dados

}; //end class SalesScore



