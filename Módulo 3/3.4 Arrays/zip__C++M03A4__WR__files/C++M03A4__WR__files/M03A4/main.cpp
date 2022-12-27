#include <iostream>
using std::endl;
using std::cout;
using std::cin;

#include <iomanip>
using std::setw;


int main()
{
  const int N = 4;

  int a[10];
  int b[6] = {4, -8, 15, -16, 23, 42};
  int c[9] = {7,4,1};
  int d[5] = {0};
  int e[ ] = {4, 0, 9, 3, 1};
  int f[5] = {1,5,8,3,15};
  int g[N] = {8, 0, 5, 1};
  char teste[] = "WR Kits";


  cout << "++++++++++++++++++++++++++++++++++++++" << endl;
    for(int i=0; i<7; i++)
      cout << teste[i] << endl;

  cout << "++++++++++++++++++++++++++++++++++++++" << endl;
  for(int i=0; i<10; i++)
    a[i] = i+1;

  for(int i=0; i<10; i++)
   cout << setw(5) << "a[" << i << "]= "
        << setw(4) << a[i] << endl;

  cout << "++++++++++++++++++++++++++++++++++++++" << endl;
  for(int i=0; i<6; i++)
    cout << setw(5) << "b[" << i << "]= "
         << setw(4) << b[i] << endl;

  cout << "++++++++++++++++++++++++++++++++++++++" << endl;
  for(int i=0; i<9; i++)
   cout << setw(5) << "c[" << i << "]= "
        << setw(4) << c[i] << endl;

   cout << "++++++++++++++++++++++++++++++++++++++" << endl;
   for(int i=0; i<5; i++)
    cout << setw(5) << "d[" << i << "]= "
         << setw(4) << d[i] << endl;

   cout << "++++++++++++++++++++++++++++++++++++++" << endl;
   for(int i=0; i<5; i++)
    cout << setw(5) << "e[" << i << "]= "
         << setw(4) << e[i] << endl;
   cout << "++++++++++++++++++++++++++++++++++++++" << endl;
   for(int i=0; i<N; i++)
    cout << setw(5) << "g[" << i << "]= "
         << setw(4) << g[i] << endl;

  return 0;
}














