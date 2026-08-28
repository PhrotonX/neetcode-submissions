class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int leftX = 0;
        int rightX = matrix.size() - 1;

        while(leftX <= rightX){
            int midX = (leftX + rightX) / 2;
            int currentX = matrix[midX][0];

            if(currentX == target){
                return true;
            }else{
                int leftY = 0;
                int rightY = matrix[midX].size() - 1;

                while(leftY <= rightY){
                    int midY = (leftY + rightY) / 2;
                    int currentY = matrix[midX][midY];

                    if(currentY == target){
                        return true;
                    }

                    if(currentY < target){
                        leftY = midY + 1;
                    }else if(currentY > target){
                        rightY = midY - 1;
                    }

                    //cout << "Y: Current: " << currentY << endl;
                }
            }

            if(currentX < target){
                leftX = midX + 1;
            }
            else if(currentX > target){
                rightX = midX - 1;
            }

            //cout << "X: Current: " << currentX << endl;
        }

        return false;
    }
};
