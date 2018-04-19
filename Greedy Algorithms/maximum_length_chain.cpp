/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/

struct val{
	int first;
	int second;
};
bool cmp(val a,val b)
{
    return a.second < b.second;
}
int maxChainLen(struct val p[],int n)
{
	sort(p,p+n,cmp);
	int ans = 1;
	int last_finish = p[0].second;
	for(int i=1;i<n;i++)
	{
		if(p[i].first > last_finish)
		{
		    last_finish = p[i].second;
			ans++;
		}
	}
	return ans;
}