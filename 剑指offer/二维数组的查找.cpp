class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int rows=array.size();
        int cols = array[0].size();
        if(!array.empty()&& rows >0 && cols >0){
            int row=0;
            int col=cols-1;
            while(row<rows && col >0){
                if(array[row][col] == target){
                    return true;
                }
                else if(array[row][col] > target)
                    --col;
            }
            else{
                ++row;
            }
        }
    }
    return false;
    }
};