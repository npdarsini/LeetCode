
#include <iostream>


using namespace std;

int main()
{
    int n;
    cin>> n;
    for(int i=1; i< n+1; i++)
    {
        for(int p=0; p<n-i; p++)
        {
            cout<<" ";    
        }
        for(int q=n-i; q<n; q++)
        {
            cout<<"#";    
        }
cout<<endl;
    }
  
    return 0;

}
