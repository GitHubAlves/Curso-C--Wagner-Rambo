/*
Programa que usa a sobre caraga de fun��es
Este programa exemplifica o uso de duas fun��es como o mesmo nome, mas com assinatura diferentes
o programa calcula o troco de uma compra tanto com numero inteiro quanto com numero com virgula

Data: Dezembro de 2022
Autor: Lucas loren�o Alves
*/

#include <iostream>
using std::cout;
using std::endl;
using std::cin;


int func1(int preco_produto, int quantia);
double func1(double preco_produto, double quantia);

int main()
{
    double quantia=0;   //A quantia deve ser double ou float
    double prec_pro=0;  //O pre�o deve ser double ou float
    double res=0;
    
    cout<<"Digite o valor do produto: "<<endl;
    cin>>prec_pro;
    
    
    cout<<"Digite a quantia de dinheir: "<<endl;
    cin>>quantia;
    
    res=func1(prec_pro, quantia);
    cout<<"sobrou: "<<res<<endl;
    
    
    while(1);
    return 0;
}


//se for 10 reais por exeplo, automaticamente � chamado esta fun��o
int func1(int preco_produto, int quantia){
    int resultado=quantia-preco_produto;
    return resultado;
}
//Mas se passar valores com virgula ser� chamado esta fun��o
double func1(double preco_produto, double quantia){
      double resultado=quantia-preco_produto;
      return resultado;
}

