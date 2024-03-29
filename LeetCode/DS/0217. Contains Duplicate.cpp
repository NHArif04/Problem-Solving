#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>store;
        for(int i=0;i<nums.size();i++){
            if(store.find(nums[i]) !=store.end()){
                return true;
                }
            else{
                store[nums[i]]=i;
            }
        }
        return  false;
    }
};

/**class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    //     set<int>data;
    //     for(auto it:nums){
    //         data.insert(it);
    //     }
    //     return data.size()!=nums.size();

       unordered_map<int,int>freq(0);
        for(int i:nums){
            freq[nums[i]]++;
            if(freq[i]>1)
                return true;
        }
        return false;
    
        // sort(nums.begin(),nums.end());
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]==nums[i-1]) return true;
        // }
        // return false;
    }
}; 
*/
int main(){
    Solution ob;
    vector<int>v;
    v={1,2,3,4324,12,2};
    if(ob.containsDuplicate(v)){
        cout <<"true"<<endl;
    }
    else cout<<"false"<<endl;
    return 0;
}