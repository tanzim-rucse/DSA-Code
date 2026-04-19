#include<bits/stdc++.h>
using namespace std;

// Corrected merge function - sizes আলাদা করে পাস করতে হবে
void marge(int a[], int na, int b[], int nb, int c[]) {
    int i = 0;
    
    // প্রথম array কপি করি
    for(int j = 0; j < na; j++) {
        c[i++] = a[j];
    }
    
    // দ্বিতীয় array কপি করি
    for(int j = 0; j < nb; j++) {
        c[i++] = b[j];
    }
}

int main() {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b[10] = {11,12,13,14,15,16,17,18,19,20};  // ভিন্ন নাম্বার দিলাম যাতে বোঝা যায়
    
    int marged[20];   // 10 + 10 = 20
    
    marge(a, 10, b, 10, marged);   // সাইজ পাস করছি
    
    // Print করি
    for(int i = 0; i < 20; i++) {      // range-based for loop এখানে সহজে কাজ করে না কারণ fixed size
        cout << marged[i] << " ";
    }
    
    return 0;
}