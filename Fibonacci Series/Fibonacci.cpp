#include <iostream>
#include <conio.h>
#include<cmath>

using namespace std;


	int fibo(int n)
	{
	int k=1;
	//n= n-1;
	if(n==1 || n==2)
	return 1;
	if(n>2)
	{
	k = fibo(n-1)+fibo(n-2);
	//cout<<"Numbers are : "<< k<<endl;
	}

k = pow(k,2)+1;
	return k;
	}

int main()
{
	
	int i=0;
	int n;
	
	cout<<"Enter the number of fibonacci Series"<<endl;
	cin>>n;
	
	for (int j =1; j<=n ; j++)
	{
	
	i = fibo(j);
	
	cout<<i<<endl;
}
	
	return 0;
}



