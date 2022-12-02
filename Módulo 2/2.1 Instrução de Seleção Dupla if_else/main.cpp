/*
Programa teste de condições
if else com operador ternário
*/


#include <iostream>

using namespace std;

int main()
{
int Ano, i;
while(i<3){
    cin>>Ano;
    cout<<"O ANO QUE DIGITOU FOI: "<<Ano<<endl;
    //Condicional
    cout<<(Ano<2000 ? "Antes de 2000" : "depois de 2000");


i++;
}
    
    return 0;
}
