// Implement C++ program for finding out the saddle point in a matrix.
#include <iostream>
using namespace std;
class saddle_pt
{
    int a[3][3];
    public:
    void input()
    {
        cout << "Enter data in Matrix : " << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << "Enter element [" << i << "," << j << "] : ";
                cin >> a[i][j];
            }
        }
    }
    void display()
    {
        cout << "\nMatrix : " << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    void ifSaddlePoint()
    {
        bool check;
        int ch = 0;
        cout << endl;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                check = false;
                for (int k = 0; k < 3; k++)
                {
                    if (a[i][j] >= a[k][j] && a[i][j] <= a[i][k])
                        check = true;
                    else
                    {
                        check = false;
                        break;
                    }
                }
                if (check == true)
                {
                    cout << a[i][j] << " is the Saddle point at position " << i << "," << j << endl
                         << endl;
                    ch++;
                }
            }
        }
        if (ch == 0)
            cout << "There's no Saddle point in the matrix.\n"
                 << endl;
    }
};
int main()
{
    saddle_pt obj;
    obj.input();
    obj.display();
    obj.ifSaddlePoint();
    return 0;
}