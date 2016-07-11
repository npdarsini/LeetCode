#include<stdio.h>
#include<iostream>

using namespace  std;

int main()
{
	int a[]={20,3,34,56,1,23,45,12,13,2};
	int n = 10;
		
	if(n==1)
		{
			for(int i=0; i<n; i++)
				cout<<a[i]<<endl;
		}
	else
		{
			for(int i =1; i<n; i++)
			{
					int x,j;
					x=a[i];
					j=i-1;
					while(j>0 && a[j]>x)
					{
						a[j+1]=a[j];
						j=j-1;
						
					}
			a[j+1]=x;
			cout<<a[i]<<" ";
			}
		cout<<endl;	
		}
		return 0;
}
