#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Table of "<<n<<" is : "<<endl;
    for(int i=1;i<11;i++){
        cout<< n << " x "<< i<<" = "<< n*i<<endl;
    }
    return 0;
}