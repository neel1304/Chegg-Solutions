#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
#include <cmath>
#include <climits>
#include <map>
#include <set>
#define FOR(ever) for(int i=0;i<n;i++)
#define FORE(i,m) for(int i=0;i<m;i++)
#define W(T) while(T--)
#define ll long long
#define pb push_back

 
//Author: Nilargha Roy (neel13)
using namespace std;
int main() {
 
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 
#ifdef __APPLE__
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n;
	cin>>n;
	int a[n];
	int index=0;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]!=a[i+1])
		{
			index=i;
			break;
		}
	}

	cout<<"The value of i where A[i]!=A[i+1] is "<<index;
	return 0;
}




























	
