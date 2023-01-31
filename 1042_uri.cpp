#include<iostream>
using namespace std;
int main(){
    int arr[3];
    
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
    int counter = 1;
    while(counter < 2){
        for(int i=0;i<3-counter;i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }

    for(int i = 0;i < 3;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    return 0;
}