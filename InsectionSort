#include<iostream>
using namespace std;
void insectionSort(int arr[], int n){

int i, j, key;

for(i=1;i<n;i++)
{
    key= arr[i];
    j= i-1;

    while(j>=0 && arr[j]>key)
    {
        arr[j+1]= arr[j];
        j--;
    }
    arr[j+1]= key;
}

}

int main(){
int n, arr[n];
cout<<"Enter the size: "<<endl;
cin>>n;

for(int i =0;i<n;i++){
    cin>>arr[i];
}
 //display

insectionSort(arr,n);
cout<< "Sorted number: ";
for(int i=0;i<n;i++){
    cout<< arr[i];
}

}
