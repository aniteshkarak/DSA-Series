
int secondlargest(int arr[],int n){
    int largest = arr[0];
    int slargest = -1;
    for(int i =0;i<n;i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}
int secondsmallest(int arr[],int n){
    int smallest =arr[0];
    int ssmallest ;
    for(int i =1;i<n;i++){
        if(arr[i]<smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]!= smallest && arr[i]<ssmallest){
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

#include<iostream>
using namespace std;
int main (){
    int n= 5;
    int a[] = {1, 2, 3,4,5};
    int slargest = secondlargest(a,n);
    int ssmallest = secondsmallest(a,n);

    cout << "Second Largest element of this arrey is = " << slargest << endl;
    cout << "Second Smalest element of this arrey is = " << ssmallest << endl;
}