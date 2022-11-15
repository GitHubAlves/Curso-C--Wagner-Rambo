//
//  Exemplo de Classe do Curso C++ WR Kits
//
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>  //classe de string no padr�o C++
using std::string;
using std::getline;

// ======================================================
// --- Desenvolvimento da Classe ---
class SalesScore
{
  public:     //public � um especificador de acesso

    void bootSystem(string storeTitle)
    {
      cout << "Score de Vendas!\n" << storeTitle << endl;
    } //end bootSystem

}; //end class SalesScore


// ======================================================
// --- Fun��o Principal ---
int main()
{
  string storeTitle;      //string de caracteres para armazenar o t�tulo da loja
  SalesScore mySales;     //objeto mySales

  cout << "Insira o nome da loja:" << endl;
  getline(cin, storeTitle);  //l� o nome da loja com espa�os em branco
  cout << endl;

  mySales.bootSystem(storeTitle);


  while(1);
  return 0;

} //end main




// ======================================================
// --- Final do Programa ---
