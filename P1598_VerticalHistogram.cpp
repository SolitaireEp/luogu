#include<bits/stdc++.h>
using namespace std;
int a[27], maxx;

int main()
{
	string n;
	for (int i = 0; i < 4; i++)
	{
		getline(cin, n);
		for (int j = 0; j<(int)n.size(); j++) 
		{
			if (n[j] >= 'A' && n[j] <= 'Z')
				a[n[j] - 'A' + 1]++;
		}
	}
	for (int i = 1; i <= 26; i++)
	{
		maxx = max(a[i], maxx);
	}
	for (int i = maxx; i > 0; i--) 
	{
		for (int j = 1; j <= 26; j++) 
		{
			if (a[j]>=i)
				cout << '*';
			else 
				cout << ' ';
			if (j != 26)
				cout << ' ';
		}
		cout << endl;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << char (i+'A');
		if (i != 25)
			cout << ' ';
	}
	return 0;
}
