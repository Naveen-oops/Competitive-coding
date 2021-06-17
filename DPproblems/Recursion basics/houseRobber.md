# House Rober problem

### Question:
You are planning to rob houses on a specific street, and you know that every house on the street has a certain amount of money hidden. The only thing stopping you from robbing all of them in one night is that adjacent houses on the street have a connected security system. The system will automatically trigger an alarm if two adjacent houses are broken into on the same night.

Given a list of non-negative integers nums representing the amount of money hidden in each house, determine the maximum amount of money you can rob in one night without triggering an alarm.

### Example

For nums = [1, 1, 1], the output should be
houseRobber(nums) = 2.

The optimal way to get the most money in one night is to rob the first and the third houses for a total of 2.

### Solution

```c++
int houseRobber(vector<int> house) {

  // dynamic programming
  // i is the position where we start loot
  // steal[i] = max(steal[i-1], steal[i-2] + house[i])
  int n = house.size(); 
  
  // Base Case
  if(n==0){
      return 0;
  }
  if(n==1){
      return house[0];
  }
  if(n==2){
      return max(house[0],house[1]);
  }
  
  vector<int> steal(n,0);
  
    steal[0] = house[0];
    steal[1] = max(house[0],house[1]);
    
    for(int i=2; i<n;i++){
        
        steal[i] = max(steal[i-1], steal[i-2]+house[i]);
    }
    
    
    return steal[n-1];
}
```
