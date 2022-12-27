//
//  Classe criada em julho de 2022
//  Implementa o score de vendas em lojas hipotéticas...
//  Desenvolvida por WR Kits.
//  arquivo .cpp, que contém a implementação das funções-membro
//


// ======================================================
// --- Bibliotecas ---
#include "SalesScore.hpp"


// ======================================================
// --- Desenvolvimento das Funções-Membro ---


// ======================================================
SalesScore::SalesScore(string title, const int salesArray[])
{
  setStoreTitle(title);

  for(int i = 0; i < products; i++)
    sales[i] = salesArray[i];


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
void SalesScore::bootSystem()
{
  cout << "Score de Vendas!\n" << getStoreTitle() << endl;

} //end bootSystem

// ======================================================
void SalesScore::processSales()
{
  dispSales(); //apresenta os resultados

  //calcula a média em vendas
  cout << "\nMedia em vendas = " << setprecision(2)
       << fixed << getAvg() << endl;

  //exibe o valor mínimo e máximo
  cout << "Valor minimo = "   << getMin()
       << "\nValor maximo = " << getMax() << endl;


  genGraph(); //gera o gráfico de vendas


} //end processSales

// ======================================================
int SalesScore::getMin()
{
  int min_val = 1000;  //considera 1000 como o valor mais baixo inicialmente

  //varredura do array de vendas
  for(int i=0; i<products; i++)
  {
    if(sales[i] < min_val)
      min_val = sales[i];

  } //end for

  return min_val; //retorna o valor mais baixo

} //end getMin

// ======================================================
int SalesScore::getMax()
{
  int max_val = 0;    //considera 0 como o valor mais alto inicialmente

  //varredura do array de vendas
  for(int i=0; i<products; i++)
  {
    if(sales[i] > max_val)
      max_val = sales[i];
  } //end for

  return max_val; //retorna o valor mais alto

} //end getMax

// ======================================================
double SalesScore::getAvg()
{
  int acc = 0;  //acumulador para somatória das vendas

  //realiza a somatória
  for(int i=0; i<products; i++)
    acc += sales[i];

  return static_cast < double > (acc) / products; //retorna a média em vendas

} //end getAvg

// ======================================================
void SalesScore::genGraph()
{
  cout << "\nGrafico: \n" << endl;

  //armazena a ocorrência em vendas em cada intervalo
  const int occSales = 11;
  int occ[occSales] = {0};

  //para cada venda, incrementa a respectiva ocorrência
  for(int i=0; i<products; i++)
    occ[ sales[i] / 100 ]++;

  //imprime a barra de gráficos para cada ocorrência de vendas
  for(int i=0; i<occSales; i++)
  {
    if(i == 0)
      cout << "   0-99: ";
    else if(i == 10)
      cout << "   1000: ";
    else
      cout << i * 100 << "-" << (i * 100) + 99 << ": ";

    //imprime a barra
    for(int j=0; j<occ[i]; j++)
      cout << '#';

    cout << endl;

  } //end for

} //end genGraph

// ======================================================
void SalesScore::dispSales()
{
  cout << "\nRelatorio: \n" << endl;

  //gera relatório
  for(int i=0; i<products; i++)
    cout << "Produto " << setw(2) << i+1 << ": "
                       << setw(3) << sales[i] << endl;


} //end dispSales

// ======================================================



