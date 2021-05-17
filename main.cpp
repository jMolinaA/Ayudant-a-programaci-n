#include<iostream>
using namespace std;

int main(){

    int N;
    cin>>N;
    int arr[N];

    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }

    for(int i = 0; i < N; i++){
        if(arr[i] < 0){
            if(arr[i]%2 == 0) cout<<"negpar ";
            else cout<<"negimpar ";
        }

        else if(arr[i] > 0){
            if(arr[i]%2 == 0) cout<<"pospar ";
            else cout<<"posimpar ";
        }

        else if(arr[i] == 0){
            if((i < N-1 && arr[i+1] == 0) || (i > 0 && arr[i-1] == 0)) cout<<"cerogemelo ";
            else cout<<"cerosolitario ";
        }

    }

    return 0;
}