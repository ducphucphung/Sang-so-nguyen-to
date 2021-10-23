#include <bits/stdc++.h>
using namespace std;
int mynum[100000]
void seive(int n)
{
	for (int i=2; i*i<=n; i++)
	{
		if(mynum[i]==0)
		{
			for(int j=i*i; j<=n; j+=i)
			{
				if(mynum[j]==0)
				{
					mynum[j]=i;
				}
			}
		}
	}
	for (int i=2; i<=n; i++)
	{
		if(mynum[i]==0)
			mynum[i]=i;
	}
	while (n!=1)
	{
		int prime = mynum[n]
		n/=prime;
		cout<<snt<<" ";
	}
}
int main()
{
	seive();
	return 0;
}
