#include <iostream>
using namespace std;

int main()
{
    string ones[10] = {"zero", "one", "two", "three", "four",
                    "five", "six", "seven", "eight", "nine"};
    string d[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen",
                    "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string t[10] = {"", "", "twenty", "thirty", "forty",
                    "fifty", "sixty", "seventy", "eighty", "ninety"};
    int N;
    cin >> N;

    if (N < 10)
        cout << ones[N] << endl;
    else if (N >= 10 and N < 20)
        cout << d[N - 10] << endl;
    else if (N % 10 == 0)
        cout << t[N / 10] << endl;
    else
        cout << t[N / 10] << "-" << ones[N % 10] << endl;
    return 0;
}