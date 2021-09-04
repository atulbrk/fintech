	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int N,K,c=0;
		int A[N];
		cin>>N>>K;
		for (int i=0;i<N;i++)
		{
			cin>>A[i];
		}
		sort(A,A+N);
		for(int i=0;(K>0)&&(i<N);i++)
		{
			if(A[N-i-1]>0)
			{
				c+=A[N-1-i];
			}
			if(A[N-i-2]!=A[N-i-1])
			{
				K--;
			}
		}
		cout<<c;
		return 0;
	}
