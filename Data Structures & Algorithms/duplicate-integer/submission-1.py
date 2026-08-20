class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        mapa = dict()

        for num in nums:
            if num in mapa:
                mapa[num] = mapa[num] + 1
            else:
                mapa[num] = 0    
        
        for key, value in mapa.items():
            if(value >= 1):
                return True
        
        return False