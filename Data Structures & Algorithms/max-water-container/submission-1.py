class Solution:
    def maxArea(self, heights: List[int]) -> int:
         start = 0
         moveStart = True
         max_water = 0
         length = len(heights)
         end = length - 1

         while(start < end and end < length):
            if(min(heights[start], (heights[end])) * (end-start) > max_water):
                max_water = min(heights[start], (heights[end])) * (end-start) 
            if(heights[start] < heights[end]):
                start+=1
            else:
                end -=1
         return max_water


        