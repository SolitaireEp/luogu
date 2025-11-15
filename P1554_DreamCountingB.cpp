#include<bits/stdc++.h>
using namespace std;
long long n, m, a[10]={0};

int main() {
	cin >> n >> m;
	for (long long i = n; i <= m; i++)
	{
		long long t = i;
		while (t != 0)
		{
			a[t % 10]++;
			t /= 10;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
