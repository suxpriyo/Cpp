#include <iostream>
using namespace std;

struct{
    string name;
    int age;
}info;
int main(){
    info.name ="Supriyo";
    info.age =21;
    cout <<info.name <<endl <<info.age;
}