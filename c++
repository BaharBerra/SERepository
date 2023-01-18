#include <iostream>
#include <math.h>
using namespace std;

int main ()
{

  int x,n;
  double y=0;

  cout << "Input n>=4 ,n ";
  cin >> n;
  cout << " Input x= ";
  cin >> x;
  
  if (x<7)
  {
    for (int i=2; i<=n-2; i++)
    {
      y+=pow((x-i),2);
    }
  }
  else
  {
     y=x+7;
  }
  cout << "x= "<< x <<"; "<< "y= "<<endl;
  return 0 ;
}
