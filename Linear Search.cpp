#include<iostream>
using namespace std;
int main(){
    int arr[]={5,6,7,8};
    int i, n, index=-1;
    int data = 9;
    n=sizeof(arr)/sizeof(arr[0]);

    for(i=0;i<n; i++){
        if(arr[i]==data){
            index= i;
            break;
        }
    }
    if(index==-1){

        cout<< "Data not found ";
    }
    else{
        cout<< "DAta is found index : " << index << " Data is "<< arr[i];
    }
}
