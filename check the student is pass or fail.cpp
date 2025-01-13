//Wap a program to decide wheather the Student is pass or fail

// CODE BY SHWETA RAJ
#include<iostream>
using namespace std;

int main()
{
    int m;  //Marks of the student
    cout << " ENTER MARKS OF STUDENT OUT OF 100 : ";
    cin >> m;
    if(m>40)
    {
        cout << " PASSED " <<endl;
    }
    if(m<40)
    {
        cout << " FAILED " << endl;
    }
    return 0;
}

// CODE BY SHWETA RAJ