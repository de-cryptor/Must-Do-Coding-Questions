/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/int getId(int M[MAX][MAX], int n)
{
    stack<int> s;
 
    int C; 
    for (int i = 0; i < n; i++)
        s.push(i);

    int A = s.top();
    s.pop();
    int B = s.top();
    s.pop();
 
    while (s.size() > 1)
    {
        if (M[A][B])
        {
            A = s.top();
            s.pop();
        }
        else
        {
            B = s.top();
            s.pop();
        }
    }

    C = s.top();
    s.pop();

    if (M[C][B])
        C = B;
 
    if (M[C][A])
        C = A;
 
    for (int i = 0; i < n; i++)
    {
        if ( (i != C) && (M[C][i] || !M[i][C] ))
            return -1;
    }
 
    return C;
}