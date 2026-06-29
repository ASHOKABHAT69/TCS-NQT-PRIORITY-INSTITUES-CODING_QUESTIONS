/*
<<THIS IS MEDIUM QUESTION ASKED IN NQT>>

Initially happy=n,sad=0;
n is the number of poeple. 

  CONDITIONS->>
  1->From happy state:
  happy=30% of happy
  sad= 70% if happy

  2->From sad state:
  happy=50% of sad
  and sad=50%sad
  Print Final Happy and sad after 4 iterations.*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int happyS=n;
    int sadS=0;
    int sadthap=0;
    for(int i=0;i<4;i++){
        int happytosad=happyS*0.7;
        happyS=happyS*0.3;
        if(i!=0){
        sadthap=sadS*0.5;
        sadS=0.5*sadS;
        }
        sadS+=happytosad;
        happyS+=sadthap;
        cout<<"H  "<<happyS<<" S "<<sadS<<endl;
    }
    cout<<"Happy: "<<happyS<<" Sad: "<<sadS;
}
