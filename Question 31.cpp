#include<iostream>

#include<vector>

#include<algorithm>

using namespace std;

int main(){

//creating an array of 10 integers

int array[10];

//creating an empty vector

vector<int> vec;

//asking and reading 10 integers into the array

cout<<"Enter 10 integers:"<<endl;

for(int i=0;i<10;i++){

cin>>array[i];

}

//using sort algorithm, sorting array (passing first and last address of array)

sort(array, array+10);

//using unique_copy algorithm and a back_inserter, copying and adding each

//unique value from the array to vector

unique_copy(array, array+10, back_inserter(vec));

//displaying the unique values.

cout<<"The unique values are: "<<endl;

for(int i=0;i<vec.size();i++){

cout<<vec[i]<<" ";

}

cout<<endl;

return 0;

}
