class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        s1=[None]*len(s)
        for i in range(0,len(s)):
            s1[indices[i]]=s[i]
        
        return ''.join(s1)    