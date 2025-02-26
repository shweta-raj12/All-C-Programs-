//Wap to find the highest factor of a number n ( other than n itself) using break statement 

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    for(int i=n/2; i>=1; i--)
    {
        if(n%i==0)
        {
            cout << i << endl;
            break; //to get out of the loop
        }
    }

}