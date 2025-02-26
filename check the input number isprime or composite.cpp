//WAP to check the Number is Prime or Composite

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    bool flag = true; //true means prime
    for(int i=n=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag=false; //false means composite
            break; //to get out of the loop
        }
    }
    if(n==1)
    {
        cout << "Neither Prime nor Composite " << endl;
    }
    else if(flag==true)
    {
        cout << "Prime " << endl;
    }
    else {
        cout << "Composite " << endl;
    }
}