#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    // int basic[3] = {1, 2, 3};


// //Array
//     array<int, 4> a = {1, 2, 3, 4};

//     int size = a.size(); 

//     for(int i = 0; i < size; i++) {
//         cout << a[i] << endl;
//     }

//     cout << "Element at 2nd Index-> " << a.at(2) << endl;
//     cout << "Empty or not-> " << a.empty() << endl;
//     cout << "First Element-> " << a.front() << endl;
//     cout << "Last Element-> " << a.back() << endl; 


// //Vector

//     vector<int> v;
//     vector<int> a(4, 100); // 4 elements with value 100
//     vector<int> last(a); // copy of a
//     for(int i = 0; i < a.size(); i++) {
//         cout << a[i] << endl;
//     }
//     cout<<"Size->"<<v.capacity()<<endl;
//     v.push_back(1);
//     cout<<"Size->"<<v.capacity()<<endl;
//     v.push_back(2);
//     cout<<"Size->"<<v.capacity()<<endl;
//     v.push_back(3);
//     cout<<"Size->"<<v.capacity()<<endl;
//     v.push_back(4);
//     cout << "Element at 2nd Index-> " << a.at(2) << endl;
//     cout << "Empty or not-> " << a.empty() << endl;
//     cout << "First Element-> " << a.front() << endl;
//     cout << "Last Element-> " << a.back() << endl;
//     for(int i = 0; i < v.size(); i++) {
//         cout << v[i] << endl;
//     }
//     v.pop_back();
//     for(int i = 0; i < v.size(); i++) {
//         cout << v[i] << endl;
//     }
//     cout<<"Size before clear->"<<v.size()<<endl;
//     v.clear();   //size becomes 0 after clear but, capacity is same
//     cout<<"Size after clear->"<<v.size()<<endl;



// //Deque

//     deque<int> d;
//     d.push_back(1);
//     d.push_front(2);
//     d.push_back(3);
//     d.push_front(4);
//     d.push_back(5);
//     for(int i = 0; i < d.size(); i++) {
//         cout << d[i] << " ";
//     }
//     cout<<endl;
//     // d.pop_front();
//     // for(int i = 0; i < d.size(); i++) {
//     //     cout << d[i] << endl;
//     // }
//     cout<<"ele at index 1"<<d.at(1);
//     cout<<d.front();
//     cout<<d.back();
//     cout<<d.empty()<<endl;

//     cout<<"before erase"<<endl;
//     for(int i = 0; i < d.size(); i++) {
//         cout << d[i] << " ";
//     }
//     cout<<endl;
//     cout<<"After erase"<<endl;
//     d.erase(d.begin()+1,d.begin()+3);   //size becomes 0 after erase but, maxsize is same
//     for(int i = 0; i < d.size(); i++) {
//         cout << d[i] << " ";
//     }


// //List

//     list<int> myList;

//     list<int> n(5, 100);

//     cout << "Printing n" << endl;
//     for (int i : n) {
//         cout << i << " ";
//     }

//     myList.push_back(1);
//     myList.push_front(2);

//     cout << endl;

//     for (int i : myList) {
//         cout << i << " ";
//     }

//     cout << endl;

//     myList.erase(myList.begin());

//     cout << "after erase" << endl;

//     for (int i : myList) {
//         cout << i << " ";
//     }

//     cout << "size of list: " << myList.size() << endl;



// //Stack

//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     cout<<s.top()<<endl;
//     s.pop();
//     cout<<s.top()<<endl;
//     cout<<s.size()<<endl;
//     cout<<s.empty()<<endl;


// //Queue

//     queue<string> q;
//     q.push("Love");
//     q.push("Babbar");
//     q.push("Chhunnu");
//     q.push("Bhubhu");
//     cout<<q.front()<<endl;
//     q.pop();
//     cout<<q.front()<<endl;
//     cout<<q.size()<<endl;
//     cout<<q.empty()<<endl;
     
// //Priority Queue

//     priority_queue<int> maxi;//maxheap
//     priority_queue<int,vector<int>,greater<int>> mini;//minheap
//     maxi.push(5);
//     maxi.push(1);
//     maxi.push(10);
//     maxi.push(30);
//     int n=maxi.size();
//     for(int i=0;i<n;i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     }
//     cout<<endl;
//     mini.push(5);
//     mini.push(1);
//     mini.push(10);
//     mini.push(30);
//     int n2=mini.size();
//     for(int i=0;i<n2;i++){
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }
//     cout<<endl;
//     cout<<mini.size()<<endl;
//     cout<<mini.empty()<<endl;



// //Sets

//     set<int> s;

//     s.insert(5);
//     s.insert(5);
//     s.insert(5);
//     s.insert(1);
//     s.insert(6);
//     s.insert(6);
//     s.insert(0);
//     s.insert(0);

//     for(auto i : s) {
//         cout << i << " ";
//     }
//     cout << endl;
//     set<int>::iterator it = s.begin();
//     it++;
//     s.erase(it);

//     for(auto i : s) {
//         cout << i << " ";
//     }
//     cout << endl;

//     cout << "-5 is present or not: " << s.count(-5) << endl;
//     set<int>::iterator itr = s.find(5);
//     for(auto it = itr; it != s.end(); it++) {
//         cout << *it << " ";
//     }
//     cout << endl;


// // Map

//     map<int, string> m;
//     m[1] = "abc";
//     m[3] = "cdc";
//     m[2] = "efg";
//     m[4] = "hij";
//     m.insert({5, "klm"});
//     for(auto i : m) {
//         cout << i.first << " " << i.second << endl;
//     }
//     cout<<"finding 3->"<<m.count(3)<<endl;
//     m.erase(3);
//     for(auto i : m) {
//         cout << i.first << " " << i.second << endl;
//     }
//     cout<<endl;
//     auto it = m.find(2);
//     for(auto i = it; i != m.end(); i++) {
//         cout << i->first << " " << i->second << endl;
//     }



//Algorithms

    vector<int> v = {1, 2, 3, 4, 5,15,17};
    cout<<"finding 15->"<<binary_search(v.begin(),v.end(),15)<<endl;
    cout<<"lower bound"<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    cout<<"upper bound"<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;
    int a=5;
    int b=6;
    cout<<"max of 5 and 6->"<<max(a,b)<<endl;
    cout<<"min of 5 and 6->"<<min(a,b)<<endl;
    cout<<"swap a and b->"<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"swap a and b->"<<a<<" "<<b<<endl;
    cout<<"reverse of v->";
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"rotate v->";
    rotate(v.begin(),v.begin()+3,v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"sort of v->";
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    




    return 0;
}