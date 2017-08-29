class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        flowerbed.emplace(flowerbed.begin(),0);
        flowerbed.emplace_back(0);
        int len=flowerbed.size();
        for(int i=0; n!=0 && i<len-2; i++){
            if(flowerbed[i]==0 && flowerbed[i+1]==0 && flowerbed[i+2]==0){
                flowerbed[i+1] = 1;
                n--;
            }
        }
        return n<=0;
    }
};

//NOTE: greedy algo suffices