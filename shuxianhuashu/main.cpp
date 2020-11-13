#include <iostream>

using namespace std;

int main()
{
    int i,j,k,l;
    for(i=100;i<1000;i++)
    {
        j = i/100;
        k = i/10%10;
        l = i%10;
        if(j*j*j+k*k*k+l*l*l == i)
           {
                cout << i << " ";
           }
    }
    cout << endl;
    return 0;
}
