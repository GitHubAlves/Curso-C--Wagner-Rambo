//
//  Exemplo de Classe do Curso C++ WR Kits
//  Revisão 5
//

// ======================================================
// --- Desenvolvimento das Funções-Membro ---
#include "SalesScore.hpp"


// ======================================================
// --- Função Principal ---
int main()
{

  int salesArray[ SalesScore::products ] = {150,155,131,355,310,571,520,501,574,901};

  SalesScore mySales("WR Kits Store", salesArray);

  mySales.bootSystem();
  mySales.processSales();


  while(1);
  return 0;

} //end main




// ======================================================
// --- Final do Programa ---
