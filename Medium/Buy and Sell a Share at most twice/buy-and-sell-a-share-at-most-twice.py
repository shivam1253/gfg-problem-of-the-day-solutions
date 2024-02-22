from typing import List


class Solution:
    def maxProfit(self, n : int, price : List[int]) -> int:
        # code here
        dp=[[[0 for _ in range(3)] for i in range(2)] for j in range(n+1)]
        
        for index in range(n-1,-1,-1):
            for bs in range(1,-1,-1):
                for limit in range(2,0,-1):
                    if bs:
                        buy=-price[index]+dp[index+1][0][limit]
                        skip=0+dp[index+1][1][limit]
                        dp[index][bs][limit]= max(buy,skip)
                    else:
                        sell=price[index]+dp[index+1][1][limit-1]
                        skip=0+dp[index+1][0][limit]
                        dp[index][bs][limit]= max(sell,skip)
        return dp[0][1][2] 

#{ 
 # Driver Code Starts
class IntArray:
    def __init__(self) -> None:
        pass
    def Input(self,n):
        arr=[int(i) for i in input().strip().split()]#array input
        return arr
    def Print(self,arr):
        for i in arr:
            print(i,end=" ")
        print()


if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        n = int(input())
        
        
        price=IntArray().Input(n)
        
        obj = Solution()
        res = obj.maxProfit(n, price)
        
        print(res)
        

# } Driver Code Ends