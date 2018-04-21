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

bool cmp(vector<int> a,vector<int> b)
{
    return a[1]*a[2] < b[1]*b[2] ;
}
int maxHeight(int height[],int width[],int length[],int n)
{
    vector < vector<int> > boxes;
    for(int i=0;i<n;i++)
    {
        vector<int> box1,box2,box3;
        int h,w,l;
        h = height[i];
        w = width[i];
        l = length[i];
        //box1
        box1.push_back(h);
        box1.push_back(min(w,l));
        box1.push_back(max(w,l));
        boxes.push_back(box1);
        //box2
        box2.push_back(w);
        box2.push_back(min(h,l));
        box2.push_back(max(h,l));
        boxes.push_back(box2);
        //box3
        box3.push_back(l);
        box3.push_back(min(h,w));
        box3.push_back(max(h,w));
        boxes.push_back(box3);
        
    }
    sort(boxes.rbegin(),boxes.rend(),cmp);
    n = boxes.size();
    int dp[n+5];
    for(int i=0;i<n;i++)
    {
        dp[i] = boxes[i][0];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(boxes[i][1] < boxes[j][1] && boxes[i][2] < boxes[j][2] && dp[i] < dp[j] + boxes[i][0])
            {
                dp[i] = dp[j] + boxes[i][0];
            }
        }
    }
    int mxheight = -1;
    for(int i=0;i<n;i++)
    {
        mxheight = max(mxheight,dp[i]);
    }
    return mxheight;
    
}