#include <iostream>
using namespace std;
int main() {
    int size,num;
    cout<<"Enter number of integers you want to input :";
    cin>>num;
    
    int ary[num]={0};
    
    //1)Accept array from user

    cout<<"\tGive integer input only\n";

    for(int i=0;i<num;i=i+1) {
        cout<<"Enter element - "<<i+1<<" : ";
        cin>>ary[i]; 
        if (ary[i]==0) {
            cout<<"Successfully Exited\n";
            break;
        }
    }

    size=sizeof(ary)/sizeof(ary[0]);
    cout<<"\nSize of array is "<<size<<endl<<"\n";
    
    //2)Forward display of array

    for (int j=0;j<num;j=j+1) {
        cout<<"Element - "<<j+1<<" = "<<ary[j]<<endl;
        if(ary[j]==0) {
            cout<<"Element "<<j+2<<" to "<<size<<" are equal to 0\n"<<endl;  
            break;
        }
    }

    //3)Reverse display of array
    
    cout<<"\n";
    for (int k=size-1;k>=0;k=k-1) {
        cout<<"Element "<<k+1<< " = "<<ary[k]<<endl;
    }

    //4) Display of second largest and smallest element
    
    int largest_element=ary[0],second_largest;
    int smallest_element=ary[0],second_smallest;
    
    for(int i=1;i<num;i=i+1) {
        if (ary[i]>largest_element) {
            second_largest=largest_element;
            largest_element=ary[i];
        }
        else if (ary[i]>second_largest) {
            second_largest=ary[i];
        }
        if (ary[i]<smallest_element) {
            second_smallest=smallest_element;
            smallest_element=ary[i];
        }
        else if(ary[i]<second_smallest) {
            second_smallest=ary[i];
        }
    }

    cout<<"\nLargest element in the array is "<<largest_element<<endl;
    cout<<"Second largest element in the array is "<<second_largest<<endl;
    cout<<"Smallest element in the array is "<<smallest_element<<endl;
    cout<<"Second smallest element in the array is "<<second_smallest<<endl;
    
    return 0;

}