//
//  Classe criada em julho de 2022
//  Implementa o score de vendas em lojas hipotéticas...
//  Desenvolvida por WR Kits.
//

#include <string>
using std::string;

// ======================================================
// --- Desenvolvimento da Classe ---
class SalesScore
{
  public:     //public é um especificador de acesso

    SalesScore(string);           //construtor da classe
    void setStoreTitle(string);   //função-membro que configura o nome da loja
    string getStoreTitle();       //função-membro que obtém o nome da loja
    void bootSystem(string);      //função-membro para inicialização do sistema

  private:    //private é um especificador de acesso onde o usuário final não pode utilizar diretamente os dados

    string storeTitle;  //declaração para um membro de dados

}; //end class SalesScore



