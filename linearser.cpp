#include<iostream>
#include<vector>
using namespace std;
int searchnum(vector<int>& vec)
{
    int target;
    cout<<"enter the number : ";
    cin>>target;
   int index=-1;
   for(int i=0;i<vec.size();i++){
    if(vec[i]==target){
       
        return i ;
    }
  
   }
 

}


int main()
{
vector<int>vec={12,1,3,14,15};

int index= searchnum(vec);

if(index!=-1){
    cout<<"NO.found at index : "<<index<<endl;
}else{
    cout<<"no not found";
}

return 0 ;

}
