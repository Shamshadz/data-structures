#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    Complex(){
        a = 0;
        b = 1;
    }

    Complex(int y){
        a = 0;
        b = y;
    }
    Complex(int x, int y){
        a = x;
        b = y;
    }
    void print(){
    	cout<<a<<" + i"<<b<<endl;
    }

};


int main()
{
    Complex c1,c2(5),c3(7,9);
    c1.print();
    c2.print();
    c3.print();
    
}