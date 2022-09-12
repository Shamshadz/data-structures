#include <iostream>
using namespace std;
class Employee
{
private:
    string name;
    int id;
    float salary;

public:
    void make(string name, int id, float salary){
        name = name;
        id = id;
        salary = salary;
    }

    // void input(){
    //     string x;
    //     int y;
    //     float z;
    //     cout<<"Enter Real and imaginary part"<<endl;
    //     cin>>x>>y;
    //     cout<<"Enter Real and imaginary part"<<endl;
    //     cin>>x>>y;
    //     name = x;
    //     id = y;
    //     salary = z;
    // };

    void print(int i ,Employee e[]){
        cout<<"Name: "<<e[i].name<<endl;
        cout<<"Id: "<<e[i].id<<endl;
        cout<<"Salary: "<<e[i].salary<<endl;
    }
    

    void check(Employee e[3]){
        for(int i = 0; i<2; i++){
            for(int j = 1; j<3; j++){
                if (e[i].salary > e[j].salary){
                    cout<<"Name: "<<e[i].name<<endl;
                    cout<<"Id: "<<e[i].id<<endl;
                    cout<<"Salary: "<<e[i].salary<<endl;
                }
            }
        }
    }

};


int main()
{
    Employee e[3];

    e[0].make("sumit",12133,100000);
    e[1].make("bala", 12134, 10000);
    e[2].make("vedant", 12135, 50000);

    // e[0].check(e);
    e[0].print(0, e);


    return 0;
}