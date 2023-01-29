class Solution {
public:
    int minPartitions(string n) {
        auto mx=0;
        for(auto i:n){
            if(mx<i) mx=i;
            if(mx=='9') return 9;
        }
        return (mx-'0');
    }
};