#include<iostream>
using namespace std;
//recursion method
void rev(string s,int st,int e){
    if(st==e){
        cout<<s;
    }
    swap(s[st],s[e]);
    rev(s,st+1,e-1);
    
}

int main(){
    string s = "abcde";
    int st=0;
    int e=s.length()-1;

//normal method

    // while(st!=e){
    //     swap(s[st],s[e]);
    //     st++;
    //     e--;
    // }
    // cout<<s;

//recursion method
    rev(s,st,e);




    return 0;
}