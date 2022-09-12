#include <iostream>
using namespace std;

class decrement{
    int a;
    int b;
    public:
    
    decrement(int r = 0, int i = 0){a=r;b=i;}

    decrement operator - (decrement const &obj){
        decrement res;
        res.a = a + obj.a;
        res.b = b + obj.b;
        return res;
    }

    void print() { cout << a - b << '\n'; }
};

// main() is where program execution begins.
int main() {
   
    decrement x2(3,4), x3(6,7);
    decrement x1 = x2 - x3;
    x1.print();

   return 0;
}