class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        new_nums = set(nums)
        k = 0

        for num in new_nums:
            if num - 1 not in new_nums :
                current = num
                length = 1

                while current+1 in new_nums:
                    current+=1
                    length+=1

                
                k = max(k,length)
        return k
