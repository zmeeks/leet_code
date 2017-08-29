class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int tmp, next, prev=0, cur = 0, cnt=0, len=nums.size();
        k = (len - k%len)%len; //now shift left
        while(cnt<len){
            tmp = nums[cur];
            next = (cur+k)%len;
            do{
                nums[cur] = nums[next];
                cur = next;
                next = (next+k)%len;
                cnt++;
            }while(next != prev && cnt<len);
            nums[cur] = tmp;
            cur = ++prev;
            cnt++;
        }
    }
};