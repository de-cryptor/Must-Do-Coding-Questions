/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/

void countDistinct(int A[], int k, int n)
{
    map<int,int> mp;
    int count = 0;
    for(int i=0;i<k;i++)
    {
        if(mp[A[i]] == 0)
        {
            count++;
        }
        mp[A[i]]++;
    }
    cout << count << " ";
    for(int i=k;i<n;i++)
    {
        if(mp[A[i-k]] == 1)
        {
            count--;
        }
        mp[A[i-k]]--;
        if(mp[A[i]] == 0)
        {
            count++;
        }
        mp[A[i]]++;
        cout << count << " ";
        
    }
}