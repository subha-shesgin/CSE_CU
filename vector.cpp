#include<iostream>
#include<vector>
using namespace std;
 
 int main()
 {
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    cout<<"the size of the vector is "<<v1.size()<<endl;
    cout<<"the capacity of the vector is "<<v1.capacity()<<endl;

    /*for(int i :v1)
    {
        cout<<i<<endl;
    }*/
    cout<<"the content of the vector is "<<endl;

    vector<int> :: const_iterator it;
    for(it = v1.begin() ;it != v1.end();it++)
    {
        cout<<*it<<endl;
    }

 }