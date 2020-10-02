#include<iostream>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t)
	{
		int n,s;cin>>n>>s;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int sum=0;
		for(int j=2;j<=n;j++)
		{
			for(int i=0;i<n;i++)
			{
				sum=0;
				int k;
				for( k=i;k<i+j;k++)
				{
					sum=sum+a[k];
				}
				if(sum==s)
				cout<<i<<" "<<k;
			}
		}
		t--;
	}
}