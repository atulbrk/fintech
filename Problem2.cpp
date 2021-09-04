#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int s[n];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	sort(s,s+n);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				if(s[i]+s[j]+s[k]==0)
				{
					cout<<s[i]<<","<<s[j]<<","<<s[k]<<endl;
				}
			}
		}
	}
	
	
	return 0;
}
