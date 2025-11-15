#include<bits/stdc++.h>
using namespace std;
int N,t,a[1001][4],s=0,i,j,k;
int main()
{
	cin>>N;
	for(i=0;i<N;i++)
		for(int j=0;j<3;j++)
		{
			cin>>t;
			a[i][j]=t;
			a[i][3]+=t;
		}
	for(i=0;i<N;i++)
	{
		j=0;
		for(k=i+1;k<=N;k++)
		{
			if(abs(a[i][3]-a[k][3])>10)
				continue;
			for(j=0;j<3;j++)
				if(abs(a[i][j]-a[k][j])>5)
				{
					j=0;
					break;
				}
			if(j==3)
				s++;
		}
		
	}
	cout<<s;
	return 0;
}
