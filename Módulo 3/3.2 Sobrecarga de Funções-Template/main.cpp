/*



*/



#include <iostream>

using namespace std;



template <typename tipo>
tipo aluno(tipo matricula, tipo idade,  tipo nome);


int main()
{

    int res=0;
    res=aluno('R', 'e', 'f');
    cout<<"resposta: "<<res<<endl;
while(1);
   return 0;
}
template <typename tipo>
tipo aluno(tipo matricula, tipo idade,  tipo nome){
    tipo aux;
    if(matricula<idade)
       return matricula;
    else if(matricula>idade)
        return idade;
    else
        return nome;
}





