#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int fib( int n)
{
    long long int k;
    
    if( n == 1 )
        k= 0;
    else if(n ==2)
       k =1;
    else
    {
 
	k = pow(fib(n-1), 2)+fib(n-2);
	//cout<<"Numbers are : "<< k<<endl;
	}


         return k ;
     
  
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,b,n;
    long long int output;
    
    cin>>a>>b>>n;
    
    
    output =fib(n);

    cout<<output<<endl;
    return 0;
}

