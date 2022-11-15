/*
    Condições em C++
    Autor: Lucas lorenço Alves
    Data: Novembro de 2022
    Versão: 01
    IDE: Code::Blocks
*/

#include <iostream>



int main()
{
    int numero1, numero2;
    std:: cout << "DIGITE DOIS NUMEROS:";
    std:: cin  >> numero1>> numero2;
    std:: cout << "A SOMA DE " << numero1 <<" + "<<numero2  <<" E: "<<numero1+numero2<< std::endl;
    //std:: cout << "\n";
    std:: cout << "A MULT DE " << numero1 <<" X "<<numero2  <<" E: "<<numero1*numero2<<std::endl;
    std:: cout << "A  DIV DE " << numero1 << " / "<<numero2 <<" E: "<< (float)numero1/(float)numero2<<std::endl;
 
 //=======================================================================================================================
    std::cout <<" Operadores relacionais: "  <<std::endl;
    std::cout <<"(34>35) "  << (int)(34>35)  << std::endl;
    std::cout <<"(34<35) "  << (int)(34<35)  << std::endl;
    std::cout <<"(34<=35)"  << (int)(34<=35) << std::endl;
    std::cout <<"(34>=35)"  << (int)(34>=35) << std::endl;
    std::cout <<"(34==34)"  << (int)(34==34) << std::endl;
    std::cout <<"(34!=35)"  << (34!=35) << std::endl;
    std::cout <<"(35!=35)"  << (34!=35) << std::endl; //Nao deveria ser verdadeiro
 
 //===========================================================================================
  //Condiçoes de fluxo
   if(8>7){
    std::cout<<"VERDADEIRO:"<<std::endl;
   }
   
   if(8>7){
   std::cout<<"fALSO:"<<std::endl;
   }
 
 
 
    return 0;
}
