/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
#include <bits/stdc++.h>
using namespace std;
#define  LL long long
#define F first
#define S second
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL)
int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
 
    return -1;
}
int romanToDecimal(string str)
{
    int res = 0;
    for (int i=0; i<str.length(); i++)
    {
        int s1 = value(str[i]);
 
        if (i+1 < str.length())
        {
            int s2 = value(str[i+1]);
 
            if (s1 >= s2)
            {
                res = res + s1;
            }
            else
            {
                res = res + s2 - s1;
                i++; 
            }
        }
        else
        {
            res = res + s1;
            i++;
        }
    }
    return res;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string str;
		cin >> str;
		cout << romanToDecimal(str) << endl;
	}
}
