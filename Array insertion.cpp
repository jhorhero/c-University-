#include<iostream>
using namespace std;

int main(){

int arr[500], n, x, pos;

cout<<"Enter number of element: ";
cin>>n;

cout<<"Enter the elements of array: \n";

for(int i=0; i<n; i++){
    cin>> arr[i];
    cout << arr[i] << " ";
}

cout<< "Enter the pos : \n";
cin>>pos;

cout<< "Enter the element to insert: \n";
cin>> x;

if(pos<1 || pos>n+1){
    cout<<"Invalid ";
    return 0;
}

for(int i=n-1; i>= pos-1; i--){
    arr[i+1]=arr[i];
}
arr[pos-1] =x;
n++;
cout<< "Array after insertion: \n";
for(int i=0; i<n;i++){
    cout<< arr[i] << " ";
}
return 0;
}

