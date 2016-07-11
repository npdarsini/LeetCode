//LEETCODE -  SUM OF 2 NUMBERS WITHOUT + OPERATOR

include<iostream>
#include<conio.h>
using namespace std;
class Solution {
public:
    int getSum(int a, int b) {
        int base = a ^ b;
        cout<<"base value:"<<base<<endl;
        int carrier = (a & b) << 1;
         cout<<"carrier value:"<<carrier<<endl;
        
        //merge
        //base case
        if ((base & carrier) == 0)    
			return base | carrier;
        //recursive case
        return getSum(base, carrier);
    }
};
int main()
{
	Solution s ; //= new Solution();
	int x = s.getSum(86,20);
	cout<<"Sum :"<<x<<endl;
	return 0;
}
        
