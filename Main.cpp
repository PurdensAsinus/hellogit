#include<iostream>
#include<vector>
#include "Data.h"

using namespace std;

void bubbleSort(auto& D)
{
	for(int i=0;i<D.size();i++)//each iteration is a pass
	for(int j=0;j<D.size()-1;j++)
	if(D[j].getX()>D[j+1].getX())
	swap(D[j],D[j+1]);
}

int main()
{
 vector<Data> v;

 v.push_back({7,21.01});
 Data d;
 v.push_back(d);
 d.setX(10);
 d.setY(12.10);
 v.push_back(d);

 for (int i=0;i<v.size();i++)
 {
  //cout<< v[i] ERROR
  cout<< v[i].getX()<<" ";
  cout<< v[i].getY()<<endl;
 }
 
 for(auto a:v)
 {
  cout<<a.getX()<<" ";
  cout<<a.getY()<<endl;
 }
 bubbleSort(v);
}


