//
//  Exemplo de Classe do Curso C++ WR Kits
//  Revisão 2
//
#include <iostream>
using std::cout;
using std::endl;

#include <string>  //classe de string no padrão C++
using std::string;

#include "SalesScore.hpp"

// ======================================================
// --- Função Principal ---
int main()
{
  //cria dois objetos SalesScore
  SalesScore myStore1("WR Kits Master Store Plus Blaster!");
  SalesScore myStore2("WR New Store");

  cout <<   "Loja 1 criada com sucesso: " << myStore1.getStoreTitle()
       << "\nLoja 2 criada com sucesso: " << myStore2.getStoreTitle() << endl;

  myStore1.setStoreTitle("WR Kits M.S.P.B.");

  cout << "Nome da loja 1 atualizado." << endl;

  cout <<   "Loja 1 criada com sucesso: " << myStore1.getStoreTitle()
       << "\nLoja 2 criada com sucesso: " << myStore2.getStoreTitle() << endl;

  while(1);
  return 0;

} //end main




// ======================================================
// --- Final do Programa ---
