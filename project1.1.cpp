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

