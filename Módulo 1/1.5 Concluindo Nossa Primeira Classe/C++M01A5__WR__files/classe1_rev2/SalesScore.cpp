//
//  Classe criada em julho de 2022
//  Implementa o score de vendas em lojas hipotéticas...
//  Desenvolvida por WR Kits.
//  arquivo .cpp, que contém a implementação das funções-membro
//

// ======================================================
// --- Desenvolvimento das Funções-Membro ---
#include <iostream>
using std::cout;
using std::endl;

#include <string>  //classe de string no padrão C++
using std::string;

#include "SalesScore.hpp"

// ======================================================
SalesScore::SalesScore(string title)
{
  setStoreTitle(title);

} //end SalesScore

// ======================================================
void SalesScore::setStoreTitle(string title)  //função-membro que configura o nome da loja
{
  if(title.length() <= 20)    //o título tem no máximo 20 caracteres?
    storeTitle = title;       //sim, armazena em storeTitle

  if(title.length() > 20)     //se o título tiver mais que 20 caracteres
  {
    //configura o título da loja para os primeiros 20 caracteres
    storeTitle = title.substr(0,20);  //inicia a string em 0 e limite nos 20 primeiros caracteres

    cout << "Titulo \"" << title << "\" excedeu largura max. \n" << endl;
  } //end if

} //end setStoreTitle

// ======================================================
string SalesScore::getStoreTitle()            //função-membro que obtém o nome da loja
{
  return storeTitle;

} //end getStoreTitle

// ======================================================
void SalesScore::bootSystem(string storeTitle)
{
  cout << "Score de Vendas!\n" << storeTitle << endl;

} //end bootSystem






