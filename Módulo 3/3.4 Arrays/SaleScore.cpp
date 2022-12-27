/*
    class criada em novembro de 2022
    desenvolvimento das funcoes membros
*/
//=====================================
//            DESENVOLVIMENTO DAS FUNCOES MEMBROS



#include "SaleScore.hpp"
                               //Precisão de saídas 


salesScore::salesScore(string title, const int salesArray[])
{
	setStoreTitle(title);
	for(int i=0; i<products; i++){
	    sales[i]=salesArray[i];
	}

}//END salesScore

void salesScore::setStoreTitle(string title)            //FUCNAO-MEMBRO QUE CONFIGURA O NOME DA LOJA
{
    if(title.length() <=20)                             //O titulo tem no maximo 20 caracteres
	storeTitle=title;                                   //Armazena em storeTitle
}//END StoreTitle


string salesScore::getStoreTitle()                      //Funcao que obtem o nome da loja
{
	return storeTitle;
}//  END getStoreTitle


void salesScore::bootSystem()
{
	cout << "score de vendas!\n" << getStoreTitle() << endl;
}

//=====================================


void salesScore::processSales(){
    disSales();  //presenta os resultados
    
    //calcula a media das vendas
    cout<<"\nMedia das vendas= "<< setprecision(2)
        << fixed << getAvg() << endl;
        //exibe o valor minimo e máximo
    cout<<"Valor minimo = "<<getMin()
        <<"\nValor maximo = "<<getmax()<<endl;
        
    genGraph(); //Gera o gráfico de vendas

}//end process

void salesScore::disSales()
{
    cout<<"\nRelatorio: \n"<<endl;
    //gera relatorio
    for(int i =0; i<products; i++){
        cout<<"Produto "<<setw(2)<< i+1 <<" : "
            <<setw(3) <<sales[i]<<endl;    
    }
}//end dispSales


int salesScore::getMin(){
    int min_val=1000;//consifera 1000 como o valor mais baixo inicialmente
    
    //varredura do array de vendas
    for(int i=0; i<products; i++){
        if(sales[i]<min_val){
            min_val=sales[i];
        }   
    }//end for
    return min_val;  //retorna o valor mais baixo
        
}//end getMin


int salesScore::getmax(){
    int max_val=0;  //considera 0 como o valor mais alto inicialmente
    
    //carredura do array de vendas
    for(int i=0; i<products; i++){
        if(sales[i]>max_val){
            max_val=sales[i];            
        }   //end for 
        
    }
   return max_val; //retorna o valor mais alto
}//end getmax

double salesScore::getAvg()
{
    int acc=0;//acumulador para somatoria de vendas
    for(int i=0; i<products; i++){
        acc+=sales[i];
        return static_cast < double > (acc) / products; //retorna a média em vendas         
    }
}//end getAvg

void salesScore::genGraph(){
    cout<< "\nGrafico: \n"<<endl;
    //armazena a ocorrência em vendas em cada intervalo
    const int occSales=11;
    int occ[occSales]={0};
    
    //para cada venda incrementar a respectiva occorência
    for(int i=0; i<products; i++){
        occ[sales[i]/100]++;  
        //imprime a barra de graficos para cada ocorrência de vendas
    }
    for(int i=0; i<occSales; i++){
        if(i==0)
         cout<<"  0-99: ";
        else if(i==10)
         cout<<"  1000: ";
        else
         cout<<i*100<<"-"<< (i*100)+99<<": ";
         //imprime a barra  
         for(int j=0; j<occ[i]; j++)
           cout<< '#';
         cout<<endl;
    }//end for
    
}



