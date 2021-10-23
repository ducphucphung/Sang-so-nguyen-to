#include <bits/stdc++.h>
using namespace std;
int mynum[10000]
void seive()
{
	int n;
	cin>>n;
	while n!=0
	{
		int k;
		cin>>k;
		vector <int> ans;
		for (int i=2; i*i<=k; i++)
		{
			if(mynum[i]==0)
			{
			for(int j=i*i; j<=k; j+=i)
				{
					if(mynum[j]==0)
					{	
						mynum[j]=i;
					}
				}
			}
		}
		for (int i=2; i<=k; i++)
		{
			if(mynum[i]==0)
				mynum[i]=i;
		}
		while (k!=1)
		{
			int prime = mynum[k]
			k/=prime;
			ans.pushback(prime);
		}
		if (ans.size()==3)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	
}
int main()
{
	seive();
	return 0;
}
