#include <iostream>
#include <cmath>
using namespace std;

/* Global variables ---------------------------------------------------------*/
double a, b, c;

/* Global function ----------------------------------------------------------*/
int Check_sides (){
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
            cout << "These sides can't form a triangle." << endl;
            return 0;
        };
};

int main() {

    cout << "Enter side a: ";
    cin >> a;
    cout << "Enter side b: ";
    cin >> b;
    cout << "Enter side c: ";
    cin >> c;

       if( Check_sides()){
        return 0;
       };

    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "Area: " << area << endl;
    return 0;
}