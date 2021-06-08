// One liner using C++ function

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        next_permutation(nums.begin(), nums.end());
    }
};

// Brute force approach O(N!*N)
// generate all possibilities and find the next match for given number

// Optimal approach
// O(n)

// In this algorithm code is simple , the explanation of code part is very very important

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        // O(n) approach - google qn
        // step 1 : Iterate back  stop when a[i]>a[i+1] ; k=i
        // step 2 : Find the next greatest num(l) to k in suffix ; swap a[k] and a[l]
        // step 3 : Make the suffix in ascending order;
        
        int n = nums.size();
        int k,l;
        
        
        for(k = n-2; k>=0; k--){
            
            if(nums[k] < nums[k+1]){
                break;
            }
        }
        
        if(k<0){ // Corner case
            
            reverse(nums.begin(), nums.end());

        }else{
            // find l
            
            for(l = n-1; l>k; l--){
                
                if(nums[l] > nums[k]){
                    break;
                }
            }
            
            swap(nums[l],nums[k]);
            reverse(nums.begin()+k+1, nums.end());
            
        }
    }
};


