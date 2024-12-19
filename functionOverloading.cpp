#include <iostream>
using namespace std;
void area(float b,float h){
    float area = (b*h)/2;
    cout<<"area of triangle = "<<area;
}

void area(int r){
    float area = 3.14*r*r;
    cout<<"area of circle = "<<area;
}

void area(int l,int b){
    float area = l*b;
    cout<<"area of rectangle = "<<area;
}

int main() {
    int n;
    cout<<"Enter choice:\n1.Triangle\n2.Circle\n3.Rectangle\n";
    cin>>n;
    switch(n){
        case 1:
            float b,h;
            cout<<"enter base: ";
            cin>>b;
            cout<<"enter height: ";
            cin>>h;
            area(b,h);
            break;
        case 2:
            int r;
            cout<<"enter radius: ";
            cin>>r;
            area(r);
            break;
        case 3:
            int l,bb;
            cout<<"enter length: ";
            cin>>l;
            cout<<"enter breadth: ";
            cin>>bb;
            area(l,bb);
            break;
    }
    return 0;
}