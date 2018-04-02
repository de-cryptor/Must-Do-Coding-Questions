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
bool isTriplet(int arr[], int n)
{
    for (int i=0; i<n; i++)
        arr[i] = arr[i]*arr[i];
 
    sort(arr, arr + n);
    for (int i = n-1; i >= 2; i--)
    {
        int l = 0; 
        int r = i-1; 
        while (l < r)
        {
            
            if (arr[l] + arr[r] == arr[i])
                return true;
            (arr[l] + arr[r] < arr[i])?  l++: r--;
        }
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        isTriplet(arr, n)? cout << "Yes": cout << "No";
        cout << endl;
    }   
    return 0;
}