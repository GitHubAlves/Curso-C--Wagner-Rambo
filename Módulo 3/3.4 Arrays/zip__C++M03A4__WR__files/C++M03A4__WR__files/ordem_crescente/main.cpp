#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <iomanip>
using std::setw;


int main()
{
  const int arraySize = 10;  //tamanho do array utilizado no exemplo
  int myArray[arraySize] = {0};  //cria um array de inteiros e inicializa tudo em 0
  int temp; //temporário para armazenar o elemento a inserir

  for(int i=0; i<arraySize;i++)
  {
    cout << "Digite o valor " << i << "/9  ";
    cin  >> myArray[i];
  } //end for


  cout << "\nArray Original:\n" << endl;

  for(int i=0; i<arraySize;i++)
    cout << setw(4) << " | " << setw(4) << myArray[i];

  cout << setw(4) << " | " << endl;


  //organiza em ordem crescente
  for(int i=0; i<arraySize; i++)
  {
    for(int j=i; j<arraySize; j++)
    {

      if(myArray[i] > myArray[j])
      {
        temp = myArray[i];
        myArray[i] = myArray[j];
        myArray[j] = temp;

      } //end if

    } //end for interno

  } //end for


  cout << "\nOrdem crescente:\n" << endl;

  for(int i=0; i<arraySize;i++)
    cout << setw(4) << " | " << setw(4) << myArray[i];

  cout << setw(4) << " | " << endl;


  cout << "\n\nPrograma encerrado." << endl;
  while(1);
  return 0;

} //end main
