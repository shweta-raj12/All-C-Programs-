//Wap to find the highest factor of a number n ( other than n itself)

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    //Print Factor of n
    int i;
    cout << "Factors of "<< n << " is " << endl;
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
            cout << i << endl;
    }
    int f=1; //for storing highest Factor of n
    for(int i=1; i<n; i++)
    {
        if(n%i==0)   f=i;
    }
    cout <<"Highest Factor of "<<n<<" except "<<n<<" is " << f << endl;

    return 0;
}