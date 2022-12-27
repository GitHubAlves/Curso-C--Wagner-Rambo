#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int linearSearch(const int [], int, int);

int main()
{
  const int arraySize = 100; //tamanho do array a
  int a[arraySize];
  int searchKey; //valor a ser localizado no array

  for(int i=0; i<arraySize;i++)
    a[i] = 2*i; //gera um array só de números pares

  cout << "Digite um inteiro para procurar: ";
  cin  >> searchKey;

  int element = linearSearch(a, searchKey, arraySize); //tenta localizar

  if(element != -1)
    cout << "Encontrou o valor no elemento " << element << endl;

  else
    cout << "Valor nao encontrado." << endl;

  return 0;
}


int linearSearch(const int myArray[], int key, int sizeArray)
{
  for(int i=0; i<sizeArray;i++)  //faz a varredura do array
    if(myArray[i] == key)        //se localizado
      return i;                  //retorna a posição

  return -1;                     //retorna -1 se não localizar


} //end linearSearch
