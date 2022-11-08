#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int roll_call;

public:
    int id_no;
    char div;
    void setdata(string x, int y)
    {
        name = x;
        roll_call = y;
    }
    void getdata()
    {
        cout << "name of the stduent is : " << name << endl;
        cout << "roll no of the student is :" << roll_call << endl;
    }

    void printdata()
    {
        cout << "id card no =" << id_no << endl;
        cout << "division is =" << div << endl;
    }
};
int main()
{
    student s1;
    s1.setdata("gaurav", 12);
    s1.id_no = 12312313;
    s1.div = 'a';
    s1.getdata();
    s1.printdata();

    return 0;
}
