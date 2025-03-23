// Converting data from one type to another type
#include<iostream>
using namespace std;
int main(){
char name = 'a';
int num = name;
cout<<num<<endl;

// type casting
double price = 100.98;
int newPrice = (int)price;
cout<<newPrice<<endl;
return 0;
}