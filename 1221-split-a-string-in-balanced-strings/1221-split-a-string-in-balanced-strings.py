class Solution:
    def balancedStringSplit(self, s: str) -> int:
        countl=countr=count=0
        for i in s:
            if i=='L':
                countl+=1
            else:
                countr+=1
            if countl==countr:
                count+=1
                countl= countr=0
               
        return count        
        