#include<bits/stdc++.h>
using namespace std;
string str;
int a=1;
int main()
{
	cin>>str;
	for (int i=1;i<(int)str.length();i++)
	{
		if(str[i]!=str[i-1])
		{
			cout<<a<<str[i-1];
			a=0;
		}
		a++;
	}
	cout<<a<<str[str.length()-1];
	return 0;
}
