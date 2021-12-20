#include <iostream>
#include <thread>

using namespace std;

int a()
{
    int n = 1, i, m = 0, flag = 0;
    m = n / 2;
    for (i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            cout << "o " << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "i " << endl;
    return 0;
}

int main() 
{
    int n = 1;
beginning:

    int i, m = 0, flag = 0;
    m = n / 2;
    for (i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            cout << "o ";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "i ";
    n++;
    if (n < 30000)      //put the limit here
        goto beginning; 
    
    return 0;
}