// C++ program to show unary operator overloading
#include <iostream>
using namespace std;


int main()
{
    int n, d;
	cout<<"Enter the number and digit:";
    cin>>n>>d;

    int digits = 0;
    int n1 = n;
    while(n1){
        n1 = n1/10;
        digits++;
    }
    cout<<digits<<endl;

	return 0;
}
