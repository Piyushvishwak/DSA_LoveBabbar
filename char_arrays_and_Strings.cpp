#include<iostream>
using namespace std;
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
    cout<<"Reversed name is: "<<name;
}
int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter your name: ";  
    cin>>name;
    // name[2]='\0'; // This will print only 'Yo' because we have terminated the string at index 2
    cout<<"Your name is: "<<name;
    cout<<endl;
    cout<<"Length of your name is: "<<getLength(name);
    cout<<endl;
    reverse(name,getLength(name));

    return 0;

}