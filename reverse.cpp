#include<bits/stdc++.h>
using namespace std;
vector<int> reverseArray(vector<int> &a) {
    int s=0;
    int e=a.size()-1;
    while(s<e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
    return a;
}

int main(){
    vector<int> a={1,2,3,4,5};
    vector<int> res=reverseArray(a);
    for(int n:res){
        cout<<n<<", ";
    }
    return 0;
}