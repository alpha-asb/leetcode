class Solution:
    def longestSubarray(self, nums: List[int], limit: int) -> int:
        minHeap,maxHeap = [],[]
        left,length = 0,0
        for j in range(len(nums)):
            heappush(maxHeap,(-nums[j],j))
            heappush(minHeap,(nums[j],j))

            while -maxHeap[0][0] - minHeap[0][0] > limit:
                left = min(maxHeap[0][1], minHeap[0][1]) + 1
                while maxHeap[0][1] < left:
                    heappop(maxHeap)
                while minHeap[0][1] < left:
                    heappop(minHeap)
            length = max(length , j-left+1)
        return length
            

        
