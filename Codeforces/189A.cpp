
#include <bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, a, b, c, pcs = 0;
	cin >> n >> a >> b >> c;

	for (int i = 0; i*a <= n; ++i)
	{
		for (int j = 0; i*a + j*b <= n; ++j)
		{
			int k = (n - i*a - j*b)/c;
			if (i*a + j*b + k*c == n)
			pcs = max(i + j + k, pcs);
		}
	}
	cout << pcs <<endl;

}