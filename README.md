# COIN CHANGING PROBLEM:

CODE:
#include <iostream>
#include<bits/stdc++.h> 
using namespace std;
int main()
{
    int c, check, count = 0;
    int Q=0, D=0, N=0, P=0;
     cout<<"How much money u want to change:";
     cin >> c;
     check = c;
     cout<<"Quarters value 25\n";
     cout<<"Dimes value 10\n";
     cout<<"Nickels value 5\n";
     cout<<"Pennies value 1\n";
     while(check == 0 || !(c >=0 ));
	 while(c > 0)
	 {
		while(c >= 25)
		{
			count ++;
			Q++;
			c = c - 25;
		}
		while(c >= 10)
		{
			count ++;
			D++;
			c = c - 10;
		}
		while(c >= 5)
		{
			count ++;
			N++;
			c = c - 5;
		}
		while(c >= 1)
		{
			count ++;
			P++;
		    c = c - 1;
		}
     cout<<"Quarters: "<< Q<<endl;
     cout<<"Dimes: "<<D<<endl;
     cout<<"Nickels: "<<N<<endl;
     cout<<"Pennies: "<<P<<endl;
     cout<<"Number of coins used: "<<count;
    }
}
Implementation:

Here, greedy algorithm is used for make a greedy choice, the choice that looks best at the time, and then solves a resulting subproblem. 
Let’s consider pennies and nickels. 4 pennies use because any number larger than 4 pennies would replace by one nickel. This would reduce the total number of coin.
Now consider pennies, nickels and dimes. Any number larger than two nickels would be replaced by at least one dimes. Use as many dimes as possible before considering nickels and pennies.
Now consider pennies, nickels, dimes and quarter. Any number larger than 3 dimes would be replace by 1 quarter plus one nickel. Because of this total number of coin would replace by 1.   
This would reduce the number of dimes as possible.
For example if we have 25 so I would use 2 dimes, 1 nickel. Instead of this I use 1 quarter to replace the 2 dimes and 1 nickel. The operation would reduce the total number of coin by 2.
Therefore, the greedy algorithm provides the optimal solution. This is for n number of coin.


CODE:

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

Implementation:

The greedy algorithm is used for any kind of coin set this is use for n set of coin set of coin. Here the coin value is not fixed. It is not guarantee the smallest coin is used. The coin is used according to your amount value. 

GROUP MEMBERS:
Roja Siddiqui (15b-023-se)
Sahar shan (15b-074-se)
