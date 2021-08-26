 #include <iostream>
// #include <stdio.h>
using namespace std;

int foo(int n);

int main()
{
  int n;
  cout<<"Enter number: ";
  cin>>n;
  while (n >= 10)
  {
    cout<<"before:"<<n<<endl;
    n = foo(n);
    cout<<"after:"<<n<<endl;
  }
  cout<<"sum: "<<n<<'\n';
  return 0;
}

int foo(int x){
  int sum = 0;
  cout<<"in:"<<x<<endl;
  while (x > 0)
  {
    sum += x % 10;
    x /= 10;
  }
  cout<<"out:"<<sum<<endl;
  return sum;
}