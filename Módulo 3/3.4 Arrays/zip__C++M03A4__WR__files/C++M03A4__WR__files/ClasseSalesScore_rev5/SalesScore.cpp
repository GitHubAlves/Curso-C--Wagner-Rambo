//
//  Classe criada em julho de 2022
//  Implementa o score de vendas em lojas hipot�ticas...
//  Desenvolvida por WR Kits.
//  arquivo .cpp, que cont�m a implementa��o das fun��es-membro
//


// ======================================================
// --- Bibliotecas ---
#include "SalesScore.hpp"


// ======================================================
// --- Desenvolvimento das Fun��es-Membro ---


// ======================================================
SalesScore::SalesScore(string title, const int salesArray[])
{
  setStoreTitle(title);

  for(int i = 0; i < products; i++)
    sales[i] = salesArray[i];


} //end SalesScore

// ======================================================
void SalesScore::setStoreTitle(string title)  //fun��o-membro que configura o nome da loja
{
  if(title.length() <= 20)    //o t�tulo tem no m�ximo 20 caracteres?
    storeTitle = title;       //sim, armazena em storeTitle

  if(title.length() > 20)     //se o t�tulo tiver mais que 20 caracteres
  {
    //configura o t�tulo da loja para os primeiros 20 caracteres
    storeTitle = title.substr(0,20);  //inicia a string em 0 e limite nos 20 primeiros caracteres

    cout << "Titulo \"" << title << "\" excedeu largura max. \n" << endl;
  } //end if

} //end setStoreTitle

// ======================================================
string SalesScore::getStoreTitle()            //fun��o-membro que obt�m o nome da loja
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

  //calcula a m�dia em vendas
  cout << "\nMedia em vendas = " << setprecision(2)
       << fixed << getAvg() << endl;

  //exibe o valor m�nimo e m�ximo
  cout << "Valor minimo = "   << getMin()
       << "\nValor maximo = " << getMax() << endl;


  genGraph(); //gera o gr�fico de vendas


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
  int acc = 0;  //acumulador para somat�ria das vendas

  //realiza a somat�ria
  for(int i=0; i<products; i++)
    acc += sales[i];

  return static_cast < double > (acc) / products; //retorna a m�dia em vendas

} //end getAvg

// ======================================================
void SalesScore::genGraph()
{
  cout << "\nGrafico: \n" << endl;

  //armazena a ocorr�ncia em vendas em cada intervalo
  const int occSales = 11;
  int occ[occSales] = {0};

  //para cada venda, incrementa a respectiva ocorr�ncia
  for(int i=0; i<products; i++)
    occ[ sales[i] / 100 ]++;

  //imprime a barra de gr�ficos para cada ocorr�ncia de vendas
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

  //gera relat�rio
  for(int i=0; i<products; i++)
    cout << "Produto " << setw(2) << i+1 << ": "
                       << setw(3) << sales[i] << endl;


} //end dispSales

// ======================================================



