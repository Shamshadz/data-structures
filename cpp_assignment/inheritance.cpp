#include <iostream>
using namespace std;

class furniture{
    public:

    string material;
    float price;

    void set_furniture(){
        cout<<"Enter Material Name: ";
        cin>>material;

        cout<<"Enter Price of Furniture: ";
        cin>>price;
    }

};

class table: public furniture{
    float height;
    float surface_area;

    public:

    void set_table(){
        cout<<"Enter Height of Table: ";
        cin>>height;

        cout<<"Enter surface area of Table: ";
        cin>>surface_area;
    }

    void display(){
        cout<<"Material"<<"\t"<<"Price"<<"\t"<<"Height"<<"\t"<<"Surface Area"<<endl;
        cout<<material<<"\t\t"<<price<<"\t\t"<<height<<"\t\t"<<surface_area<<endl;
    }

};

int main()
{
	table tb;
    tb.set_furniture();
    tb.set_table();
    tb.display();

	return 0;
}