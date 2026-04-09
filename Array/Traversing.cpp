#include<bits/stdc++.h>
using namespace std;
int main(){
    double arr[15]={25,3,14,58,69,74,100,57,30,14,25,24,16,39,79};

    //Finding Maximum value:
    double Maximum_value=INT_MIN;
    for(int i=0;i<15;i++){
        if(arr[i]>Maximum_value)
            Maximum_value=arr[i];
    }
    cout<<"Maximum value: "<< Maximum_value<<endl;
    
    //Minimum Value:
    double Minimum_value=INT_MAX;
    for(int i=0;i<15;i++){
        if(arr[i]<Minimum_value)
            Minimum_value=arr[i];
    }
    cout<<" Minimum value: " << Minimum_value<<endl;

    //Average value:
    double sum=0, average=0;
    for(int i=0;i<15;i++){
       sum+=arr[i];
    }
    average=sum/15;
    cout<< " Average" << average<<endl;
    
    //Total value:
    cout<<"Total: " << sum<<endl;

    //Sin value:
    for(int i=0;i<15;i++){
        cout<<"Sin value: " << sin(arr[i])<<" "<<endl;
    }

    return 0;
}