	#include <bits/stdc++.h>
	using namespace std;
	int main()
	{
		#ifndef ONLINE_JUDGE
		freopen("input.txt", "r" ,stdin);
		freopen("output.txt", "w" ,stdout);
		#endif
		int t;
		cin>>t;
		while(t--)
		{
			string s;
			int count = 0;
			cin>>s;
			map<char,int>mp;
			int l = s.length();
			int min=l;
			int max = 0;
			for(int i=0;i<l;i++)
			{
				mp[s[i]]++;
			}
			for(auto i=mp.begin();i!=mp.end();i++)
			{
				cout<<i->first<<" "<<i->second<<endl;
				if(i->second < min)
					min = i->second;
				if(i->second > max)
					max = i->second;
			}
			int count2=0;
			cout<<min<<" "<<max<<endl;
			if(max - min > 1)
				cout<<0;
			else if(min-max == 0)
				cout<<1;
			else
				{
					for(auto i=mp.begin();i!=mp.end();i++)
					{
						if(max == i->second)
							count++;
						if(min == i->second)
							count2++;
					}
					if(count == 1 || count2  == 1)
						cout<<1;
					else
					{
						cout<<0;
					}
				}
			cout<<endl;
		}
		
		return 0;
	}