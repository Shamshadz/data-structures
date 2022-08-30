// Add complex number
#include <iostream>
using namespace std;

class complex
{
private:
    /* data */
    float real;
    float ima;

public:
    void input(){
        float x;
        float y;
        cout<<"Enter Real and imaginary part"<<endl;
        cin>>x>>y;
        real = x;
        ima = y;
    };
    void show()
    {
    cout<<real<<" "<<"+"<<" "<<"j"<<ima<<endl;;
    };

    void add(complex c1 , complex c2){
        float a =  c1.real +c2.real;
        float b =  c1.ima + c2.ima;
        cout<<a<<" "<<"+"<<" "<<"j"<<b<<endl;
    };
};


// main() is where program execution begins.
int main() {
    
    complex c1,c2,c3;
    c1.input();
    c2.input();
    c1.show();
    c2.show();
    cout<<"Add of above two complex No. is: ";
    c3.add(c1,c2);

   return 0;
}