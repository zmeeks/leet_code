class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int num, first, cnt=1, len = nums.size();
        priority_queue<int> pq;
        for(int i=0; i<len; i++) pq.emplace(nums[i]);
        first = num = pq.top();
        pq.pop();
        while(!pq.empty()){
            if(pq.top() != num){
                cnt++;
                num = pq.top();
            }
            if(cnt==3) return num;
            pq.pop();
        }
        return first;
    }
};