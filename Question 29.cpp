#include<iostream>
using namespace std;

void report_type(int val){
cout<<val<<" is an integer.\n";
}

void report_type(double val){
cout<<val<<" is a double.\n";
}

int main(){
report_type(45);
report_type(3.56);
return 0;
}