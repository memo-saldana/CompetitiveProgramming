#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  int i;
  string str;
  cin>>str;
  int n=str.length();
  i=n-1;
  for(i=n-1;i>0;i--)
  {
    if((str.at(i))>str.at(i-1))
    {
      break;
    }
  }
  if(i==0)
  {
    cout<<"0";

    return 0;
  }
   int x=str.at(i-1), smallest=i;
  for(int j=i+1;j<n;j++)
  {
    if((str.at(j))>x&&str.at(j)<=str.at(smallest))
    {
      smallest=j;
    }
  }
  int tmp=str.at(smallest);
  str.at(smallest)=str.at(i-1);
  str.at(i-1)=tmp;


  sort(str.begin()+i,str.end());

  cout<<str;
  return 0;
}
