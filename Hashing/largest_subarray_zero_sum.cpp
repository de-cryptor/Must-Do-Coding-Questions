/* 
  @Author - Jatin Goel
  @Institute - IIIT Allahabad
  Hardwork definitely pays off. 
  There is no substitute of hardwork.
  There is no shortcut to success. 
*/
int maxLen(int A[],int n)
{
  map<int,int> sums;
  int sum = 0,ans = 0;
  for(int i=0;i<n;i++)
  {
    sum += A[i];
    if(A[i] == 0 && ans == 0)
        ans = 1;
    if(sum == 0)
        ans = i+1;
    if(sums.find(sum) != sums.end())
    {
        ans = max(ans,i - sums[sum]);
    }
    else
    {
        sums[sum] = i;
    }
  }
  return ans;
}
