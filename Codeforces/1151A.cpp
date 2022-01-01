#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	string s;
	cin >> n >> s;

	int minCost = INT_MAX;

	for (int i = 0; i <= n - 4; ++i)
	{
		int currCost = 0;
		
		int p1 = abs((int)'A' - (int)s[i]);
		int p2 = 26 - p1;
		int costA = min(p1, p2);

		p1 = abs((int)'C' - (int)s[i + 1]);
		p2 = 26 - p1;
		int costC = min(p1, p2);

		p1 = abs((int)'T' - (int)s[i + 2]);
		p2 = 26 - p1;
		
		int costT = min(p1, p2);

		p1 = abs((int)'G' - (int)s[i + 3]);
		p2 = 26 - p1;
		int costG = min(p1, p2);

		currCost = costA + costC + costT + costG;

		minCost = min(minCost, currCost);
	}

	cout << minCost << "\n";

	return 0;
}