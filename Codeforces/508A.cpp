#include <iostream>
#include <stdio.h>
#include <limits.h>
#include <algorithm>
#include <cmath>
#include <math.h>
#include <map>
#include <set>
#include <vector>
#include <string.h>
#include <string>

#define ll long long
#define MOD 1000000007

using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    
	int n, m, k, i, f, x, y;
	cin >> n >> m >> k;
	int arr[n][m];
	map<pair<int, int>, int> mpp;
	f = 0;
	for(i = 0; i < k; i++)
	{
		cin >> x >> y;
		mpp[make_pair(x, y)] = 1;
		pair<int, int> p1;
		pair<int, int> p2;
		pair<int, int> p3;
		pair<int, int> p4;
		pair<int, int> p5;
		pair<int, int> p6;
		pair<int, int> p7;
		pair<int, int> p8;
		if(y < m)
			p1 = make_pair(x, y + 1);
		if(y < m && x < n)
			p2 = make_pair(x + 1, y + 1);
		if(x < n)
			p3 = make_pair(x + 1, y);
		if(x > 0 && y < m)
			p4 = make_pair(x - 1, y + 1);
		if(x > 0)
			p5 = make_pair(x - 1, y);
		if(x > 0 && y > 0)
			p6 = make_pair(x - 1, y - 1);
		if(y > 0)
			p7 = make_pair(x, y - 1);
		if(x < n && y > 0)
			p8 = make_pair(x + 1, y - 1);

		if((mpp[p2] && mpp[p3] && mpp[p1]) || (mpp[p1] && mpp[p4] && mpp[p5]) || (mpp[p5] && mpp[p6] && mpp[p7]) || (mpp[p7] && mpp[p8] && mpp[p3]))
		{
			f = 1;
			cout << (i + 1) << endl;
			break;
		}
	}
	if(f == 0)
		cout << "0\n";
	return 0;
}