#include <iostream>
#include <vector>
using namespace std;
bool seive()
{
	for (int i=2; i<=n; i++)
	{
		seive[i]=true;
	}
	for(int i=2; i*i<=n; i++)
	{
		if(seive[i]=true)
		{
			for(int j=i*i; j<=n; j+=i)
			{
				seive[j]=false;
			}
		}
	}
	vector <int> myvecto;
	for(int i=2; i<=n; i++)
	{
		if(seive[i]=true)
		{
			myvecto.push_back(i);
		}
	}
	for (int i=0; i<myvecto.size(); i++)
	{
		cout<<myvecto[i]<<endl;
	}
}
int main()
{
	int n;
	cout<<"Nhap n:"<<endl;
	cin>>n;
	seive(n);
	
}

