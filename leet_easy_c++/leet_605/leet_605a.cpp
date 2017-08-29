class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len=flowerbed.size();
        if(flowerbed[0]==0 && (len==1 || (len>1 && flowerbed[1] == 0) )){
            n--;
            flowerbed[0] = 1;
        }
        for(int i=1; n!=0 && i<len-1; i++){
            if(flowerbed[i-1]==0 && flowerbed[i]==0 && flowerbed[i+1]==0){
                flowerbed[i] = 1;
                n--;
            }
        }
        if(len > 2 && flowerbed[len-1]==0 && flowerbed[len-2] == 0) n--;
        return n<=0;
    }
};

//NOTE: greedy algo suffices