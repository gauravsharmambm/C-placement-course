#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;

    while(T--){
        int N;
        cin>>N;

        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        int len,pd;
        len = 0;
        pd = arr[0] - arr[1];
        int temp = 2;
        for(int i=0; i<N-1; i++){
            for(int j=i; j<N-1; j++){
                if((arr[j]-arr[j+1])==pd){
                    temp++;
                }  
                else{
                    pd = arr[j] - arr[j+1];
                    i = j;
                    break;
                }    
            } 
            len = max(len,temp);
            temp = 2;
        }
        cout<<len<<endl;
    }
}