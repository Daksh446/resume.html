#include<iostream>
#include<vector>
using namespace std;
int num(vector<int>& vec)

{
int ans = 0;
for(int val: vec){
    
    ans=ans^val;
   
}
return ans;


}

int main(){
vector<int> vec ={1,2,2,3,3,4};
int uniqnum=num(vec);
    cout<<uniqnum;
}