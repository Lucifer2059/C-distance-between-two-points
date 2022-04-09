#include <iostream>
#include <math.h>
using namespace std;

class sq
{

private:
    float x1, y1;
    float x2, y2;

public:
    void set()
    {
        cout << "Enter the point x1" << endl;
        cin >> x1;
        cout << "Enter the point y1" << endl;
        cin >> y1;
        cout << "Enter the point x2" << endl;
        cin >> x2;
        cout << "Enter the point y2" << endl;
        cin >> y2;
    }
    void print()
    {
        cout << "Yours points is (" << x1 << "," << y1 << ")" << endl;
        cout << "Yours points is (" << x2 << "," << y2 << ")" << endl;
    }

    void cal();
};
void sq::cal()
{
    cout << "The result is" << sqrt((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));}

int main(){

    cout<<"*****************MADE BY Rabean subedi***********"<<endl;
    sq obj;
    obj.set();
    obj.print();
    obj.cal();
    return 0;
}