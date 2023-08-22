class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        no=0; 
        jewels=sorted(jewels)
        for i in jewels:
            if i in stones:
                no+=stones.count(i)
        return no
        