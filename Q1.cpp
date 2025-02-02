#include <iostream>
using namespace std;
int main() {
    int n,i,l,k;
    cout<<"Enter a integer :";
    cin>>n;
    
//1) n is prime or not

if(n<=1) {
    cout<<"Input valid number\n";
    }
  else if (n>=2) {
    for(i=2;i<n;i++) {
        if(n%i==0) {
            cout<<n<<" --> not prime\n";
            cout<<"# Factors of "<<n<<" are "<<endl;
            break;
               }
            }
        if(i==n) {
            cout<<n<<" --> Prime\n";
        }
   }

//2) n is not prime 
if (i!=n) {
for(int j=2;j<n;j++) {
    if(n%j==0) {
        cout<<j;
        cout<<" ";
               }
            }
}

//3) n is prime
if (i==n) {
    for (k=n+1;k<n+10;k++) {
        for (l=2;l<k;l++) {
            if (k%l==0) {
                break; 
            }
        }
        if (l==k) {
            break;
        }
    }
    if (l==k) {
            cout<<"Next prime number is "<<k;
        }
}

return 0;

}