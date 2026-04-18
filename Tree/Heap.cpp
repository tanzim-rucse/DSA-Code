#include<bits/stdc++.h>
using namespace std;

// INSERT
void insertHeap(vector<int>& heap, int value){
    heap.push_back(value);
    int i = heap.size() - 1;

    while(i > 0){
        int parent = (i - 1) / 2;

        if(heap[parent] < heap[i]){
            swap(heap[parent], heap[i]);
            i = parent;
        }
        else break;
    }
}

// DELETE ROOT
int deleteHeap(vector<int>& heap){
    if(heap.empty()){
        cout << "Heap is empty" << endl;
        return -1;
    }

    int root = heap[0];
    heap[0] = heap.back();
    heap.pop_back();

    int i = 0;
    int n = heap.size();

    while(true){
        int left = 2*i + 1;
        int right = 2*i + 2;
        int largest = i;

        if(left < n && heap[left] > heap[largest])
            largest = left;

        if(right < n && heap[right] > heap[largest])
            largest = right;

        if(largest != i){
            swap(heap[i], heap[largest]);
            i = largest;
        }
        else break;
    }

    return root;
}

// PRINT
void printHeap(vector<int>& heap){
    for(int x : heap) cout << x << " ";
    cout << endl;
}

int main(){
    vector<int> heap;

    insertHeap(heap, 10);
    insertHeap(heap, 20);
    insertHeap(heap, 30);
    insertHeap(heap, 40);

    printHeap(heap);

    deleteHeap(heap);
    printHeap(heap);

    return 0;
}