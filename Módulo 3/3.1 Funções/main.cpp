#include <iostream>
using std::cout;
using std::endl;



void func1();

int main()
{
    cout<<"O tpipo char   ocupa: "<<sizeof(char)<<" byte "<<endl;
    cout<<"O tpipo int    ocupa: "<<sizeof(int)<<" byte "<<endl;
    cout<<"O tpipo float  ocupa: "<<sizeof(float)<<" byte "<<endl;
    cout<<"O tpipo double ocupa: "<<sizeof(double)<<" byte "<<endl;
    cout<<"O tpipo short  ocupa: "<<sizeof(short)<<" byte "<<endl;
    cout<<"O tpipo long   ocupa: "<<sizeof(long)<<" byte "<<endl;
    //-------------------------------------------------------------------
        
    func1();
    func1();
    func1();
    
    
    while(1);
    return 0;
}



void func1(){

  static int n=0;
  n+=1;
    cout<<"Conter: "<< n <<endl;
    
}