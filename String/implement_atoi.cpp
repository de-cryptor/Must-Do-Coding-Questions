/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/

int atoi(string str)
{
    int num = 0,flag =1,start=0,m=1;
    int n = str.size();
    if(str[0] == '-')
    {
        m = -1;
        start = 1;
    }
    for(int i=start;i<n;i++)
    {
        if(str[i]>= '0' && str[i] <= '9')
        {
            num = num*10 + str[i] - '0';
        }
        else
        {
            flag = 0;
        }
    }
    if(flag)
    {
        return num*m;
    }
    return -1;
}
