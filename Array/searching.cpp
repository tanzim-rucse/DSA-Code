#include<bits/stdc++.h>
using namespace std;


int binary_search_int(vector<int>& arr,int item){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int l=0;
    int u=n-1;
    while(l<=u){
    int mid=(u+l)/2;
    if(arr[mid]==item)return mid;
    else if(arr[mid]<item)l=mid+1;
    else u=mid-1;
    }
    return -1;
}

int linearSearch_int(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) return i; 
    }
    return -1;
}

int binary_search_string(vector<string>& arr,string item){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int l=0;
    int u=n-1;
    while(l<=u){
    int mid=(u+l)/2;
    if(arr[mid]==item)return mid;
    else if(arr[mid]<item)l=mid+1;
    else u=mid-1;
    }
    return -1;
}

int linearSearch_string(vector<string>& arr, string target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) return i; 
    }
    return -1;
}

int main(){
    vector<int>arr_int={2,88,4,5,96,77,17,36,12,15,18,13};
    int l_int=linearSearch_int(arr_int,77);
    int B_int=binary_search_int(arr_int,77);
    vector<string>str={"HEllo","Tanzim","Tanim","tanzim","Karim","sakib"};
    int l_str=linearSearch_string(str,"Tanzim");
    int B_str=binary_search_string(str,"tanzim");
    
    return 0;
}