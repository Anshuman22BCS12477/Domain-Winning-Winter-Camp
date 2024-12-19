#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int sum=(n*(n+1))/2;
    cout<<"Sum of "<< n <<" natural numbers = "<<sum;
    return 0;
}