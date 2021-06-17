# Climbing Stairs
---------

There are two common dynamic programming strategies that you'll need to familiarize yourself with, bottom-up and top-down.

**Bottom-up strategy (iteration):** In this strategy, you start solving from the smallest subproblem up towards the original problem. If you’re doing this, you’ll solve all of the subproblems, thereby solving the larger problem. The cache in bottom-up solutions is usually an **array** (either one or multi-dimensional).

**Top-down strategy (recursion):** Start solving the identified subproblems. If a subproblem hasn’t been solved yet, solve it and cache the answer; if it has been solved, return the cached answer. This is called memoization. The cache in top-down solutions is usually a **hash table, binary search tree, or other dynamic data structure**.

# 1. Top-down Approach(recursion)

## without dp

```c++
// Top-down approach using recursion
int climbingStairs(int n) {
    
    // Base case using recursion
    if(n==1 || n==2){
        return n;
    }
    if(n<=0){
        return 0;
    }
    
    // recursive case
    return climbingStairs(n-1)+climbingStairs(n-2);  
    
}

```
## with dp

```c++

// Top-down approach using recursion
vector<int> ds(50,0);

int climbingStairs(int n) {
    // Base case using recursion
    if(n==1 || n==2){
        ds[n] = n;
        return n;
    }
    if(n<=0){
        ds[0] = 0;
        return 0;
    }
    
    // recursive case
    if(ds[n] == 0 ){
        ds[n] = climbingStairs(n-1)+climbingStairs(n-2);
        return ds[n];
    }else{
    return ds[n];
    
    }
       
}

```

# 2. Bottom-up Approach(Iteration)


## with dp

```c++

int climbingStairs(int n) {
    int arr[n+1] = {0};
    
    arr[1] = 1;
    arr[2] = 2;
    
    for(int i = 3; i <= n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
    
    return arr[n];
}

```

# Optimized solution  - O(1) space

```c++

int climbingStairs(int n){

int a=1,b=2;
    if(n==1)
        return a;
    if(n==2)
        return b;
    
    for(int i=0;i<n-2;i++)
    {
        int c=a+b;
        a=b;
        b=c;
    }    
return b;
}


```
