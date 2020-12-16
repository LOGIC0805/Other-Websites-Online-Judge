class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int len = nums.size();
        int data[len];
        for(int i = 0; i < len ; i++){
            data[i] = 0;
        }
        int result = 0;
        for(int i = 0; i < len ; i++){
            if(data[nums[i]]){
                result = nums[i];
                break;
            }else{
                data[nums[i]]++;
            }
        }
        return result;
    }
};