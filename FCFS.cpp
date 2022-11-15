#include<bits/stdc++.h>
using namespace std;
 
  void ExtTime(int n , vector<int> &pro , vector<int> &arr , vector<int> &Ext){
       Ext[0] = pro[0];
          for(int i=1; i<n; i++){
            Ext[i] = Ext[i-1]+pro[i];
          }
  }
    void TatTime(int n , vector<int> &Ext ,vector<int> &arr ,  vector<int> &TAT){
          for(int i=0; i<n; i++){
               TAT[i] = Ext[i] - arr[i]; 
          }
    } 
     void WaitTime(int n , vector<int> &TAT ,vector<int> &pro , vector<int> &WT){
          for(int i=0; i<n; i++){
               WT[i] = TAT[i] - pro[i];
          }
     }   
  

int main(){
    int n;
    cin>>n;
    vector<int> pro(n);
    vector<int> arr(n);
     vector<int> Ext(n) , TAT(n) , WT(n);
    for(int i=0; i<n; i++){
        cin>>pro[i];
    }  
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
      ExtTime(n , pro ,arr , Ext);
      TatTime(n , Ext ,arr , TAT);
      WaitTime(n ,TAT ,pro , WT);
      int  tat = 0;
      double  AvgTAt;
      for(int i=0; i<n; i++){
         tat +=  TAT[i];
       }
         int wt = 0;
         double AvgWt;
      for(int i=0; i<n; i++){
         wt += WT[i];
      }
      AvgTAt =   double(tat)/double(n);
      AvgWt =   double(wt)/ double(n);
      cout<<"Average Turn Around"<<": "<<AvgTAt<<endl;
      cout<<"Average Waiting Time"<<": "<<AvgWt<<endl;
    return 0;

}