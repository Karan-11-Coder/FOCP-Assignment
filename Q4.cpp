#include <iostream>
using namespace std;
int main() {
  int n,r,c;
    cout<<"\t#SQUARE MATRIX"<<endl;
    cout<<"\nEnter number of rows/column in matrix : ";
    cin>>n;  

    int ary[n][n];
    int top=0,bottom=n-1,left=0,right=n-1;
    for(r=0;r<=n-1;r=r+1) {
        for(c=0;c<=n-1;c=c+1) {
            cout<<"\nEnter element ("<<r+1<<","<<c+1<<") : ";
            cin>>ary[r][c];
        }

    }

    cout<<"\n\t#Input array in SPIRAL FORM\n\n";

    while (top<=bottom && left<=right) {
    //To print top row of array
        for (int i=left;i<=right;i=i+1) {
            cout<<ary[top][i]<<" ";
        }
        top=top+1;
    
    //To print right column of array
        for (int i=top;i<=bottom;i=i+1) {
            cout<<ary[i][right]<<" ";
        }
        right=right-1;

    //To print bottom row of array
        if (top<=bottom) {
            for (int i=right;i>=left;i=i-1) {
                cout<<ary[bottom][i]<<" ";
            }
            bottom=bottom-1;
        }

    //To print left column of array
        if (left<=right) {
            for (int i=bottom;i>=top;i=i-1) {
                cout<<ary[i][left]<<" ";
            }
            left=left+1;
        }
    }

    return 0;
} 