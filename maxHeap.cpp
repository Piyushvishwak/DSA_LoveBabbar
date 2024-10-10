#include<iostream>
#include<queue>
using namespace std;
class heap{
    public:
    int size;
    int arr[100];
    heap(){
        size=0;
        arr[0]=-1;
    }

    void deleteFromHeap(){
        if(size==0){
            cout<<"Heap is empty"<<endl;
            return;
        }
        // stp1: swap root with last element
        arr[1]=arr[size];
        // stp2: delete last element
        size--;
        // stp3: heapify
        int i=1;
        while(i<size){
            int leftIndex=2*i;
            int rightIndex=2*i+1;
            if(leftIndex<size && arr[i]<arr[leftIndex]){
                swap(arr[i],arr[leftIndex]);
                i=leftIndex;
            }
            else if(rightIndex<size && arr[i]<arr[rightIndex]){
                swap(arr[i],arr[rightIndex]);
                i=rightIndex;
            }
            else{
                return;
            }
        }
    }

    void insert(int val){
        size+=1;
        int index=size;
        arr[index]=val;

        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                break;
            }
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


    void heapify(int arr[], int n, int i){
        int largest=i;
        int left=2*i;
        int right=2*i+1;
        if(left<=n && arr[largest]<arr[left]){
            largest=left;
        }
        if(right<=n && arr[largest]<arr[right]){
            largest=right;
        }
        if(largest!=i){
            swap(arr[largest],arr[i]);
            heapify(arr,n,largest);
        }
    }
    void heapSort(int arr[], int n){
        int size=n;
        while(size>1){
            swap(arr[size],arr[1]);
            size--;
            heapify(arr,size,1);
        }
    }
};

int main(){
    heap h;
    // h.insert(50);
    // h.insert(55);
    // h.insert(53);
    // h.insert(52);
    // h.insert(54);
    // h.deleteFromHeap();
    // h.print();
    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2; i>0; i--){
        h.heapify(arr,n,i);
    }
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    h.heapSort(arr,n);
    cout<<endl;

    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

// Using priority queue

    priority_queue<int> pq;
    pq.push(23);
    pq.push(12);
    pq.push(1);
    pq.push(97);
    cout<<endl;
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    if(pq.empty()){
        cout<<"empty";
    }else{
        cout<<"not empty";
    }
    cout<<endl;

    //minheap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(12);
    minHeap.push(11);
    minHeap.push(18);
    minHeap.push(10);

    cout<<minHeap.top()<<endl;
    minHeap.pop();
    cout<<minHeap.top()<<endl;
    cout<<minHeap.size()<<endl;
    if(minHeap.empty()){
        cout<<"empty";
    }else{
        cout<<"not empty";
    }


    return 0;
}