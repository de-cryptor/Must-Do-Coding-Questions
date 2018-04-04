/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/

int strstr(string s, string x)
{
     for(int i=0;i<s.size();i++)
     {
         for(int j=0;j<x.size();j++)
         {
             if(i+j < s.size())
             {
                 if(x[j] != s[i+j])
                    break;
             }
             else 
             {
                 break;
             }
             if(j == x.size() - 1)
                return i;
         }
     }
     return -1;
}