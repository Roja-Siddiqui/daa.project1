#include <iostream>
#include<bits/stdc++.h> 
using namespace std;
void coin(int val[],int n,int amount)
{
    for(int i=0; i<n; i++)
    while(amount >= val[i])
    {
      amount= amount - val[i];
      cout<< val[i] << " ";
    }
    cout << endl;
}

void coin(int val[],int n,int amount);
int main()
{
  int i,n,amount;
  cout<<"Enter amount: ";
  cin>>amount;
  cout<<"Enter total kinds of currency: ";
  cin>>n;	
  int val[n];
  cout<<"Enter currency values:";
  for(i=0; i<n; i++)
  cin >> val[i];
  cout<<"Number of coins used:";
  sort(val,val+n,greater< int>());
  coin(val,n,amount);
  return 0;
}

