#include<iostream>
using std::cout;using std::endl;using std::cin;
void lol(){
    int age=2;
    if (age>=18){
        cout<<"eligible"<<endl;
    }
    else cout<<"Not eliglible"<<endl;
}
/*#define repeat(n) for(int i = 0, x = n;  i<x; ++i)
namespace lol{
    void arr(){
        cout<<"f u"<<endl;
    }
}
int main(){
    int arr[8]={2,3,5,7,11,13,17,19};
    cout<<"[";
    for(int i=0;i<7;i++)cout<<arr[i]<<",";
    cout<<arr[7]<<"]"<<endl;
    repeat(4){lol::arr();}

}*/
int main(){
    cout<<(true || false && false)<<endl;
    
}
