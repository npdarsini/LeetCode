#include <iostream>
#include <stdio.h>
#include<string.h>
 using namespace std;
char * GetString()
{
	string s;
	cin>>s;
	
}
int main(void)
{
    // get line of text
    printf("Say something: ");
    char* s = GetString();
 
    // get another line of text
    printf("Say something: ");
    char* t = GetString();
 
    // try to compare strings
    if (s = t)
    {
        printf("You typed the same thing!\n");
    }
   else
    {
        printf("You typed different things!\n");
    }
    return 0;
}
