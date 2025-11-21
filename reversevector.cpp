#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>& vec){
    int start = 0 ,end = vec.size()-1;
    while(start<end){
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}

int main()
{
vector<int>vec={12,13,14,15,16};
int n=vec.size();
reverse(vec);

for(int i=0 ;i<n;i++)
{
    cout<<vec[i]<<" ";
}
return 0;

}
