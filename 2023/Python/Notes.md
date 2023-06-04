# Boot.dev
## Learn Python
 - Variables
 - Computing
 - Comparisons
 - Loops
 - Lists
 - Functions
 - Dictionaries
 - Sets
 - Errors

## Learn OOP
 - Classes
 - Encapsulation
 - Abstraction
 - Inheritance
 - Polymorphism

## Build a local dev env

## Learn Algorithms
 - Introduction
   - Median
   ```python
   def median_followers(nums):
     nums.sort()
     n = len(nums)
     if n % 2 == 0:
         return (nums[n // 2 - 1] + nums[n // 2]) / 2
     return nums[n // 2]
   ```
 - Math
   - Exponents
   - Logarithm
   - Factorial
   - Exponential Decay
   ```python
   def decayed_followers(intl_followers, percent_lost_daily, days):
     res = intl_followers * (1 - percent_lost_daily) ** days
     return res
   ```
   - Logarithmic scale
   ```python
   def log_scale(data, base):
     new_data = []
     for number in data:
         new_data.append(math.log(number,base))
     return new_data
   ```
 - Polynomial
   - Big O Notation
     > Big O is a characterization of algorithms according to their worst-case growth rate


     ![Big-O Complexity Chart](./images/big-o-chart.jpeg)
     - Examples:
       - O(n) - Order"n": find_min; find_max. Any algorithms that loops over all elements once.
       ```python
       def find_max(nums):
           max = float("-inf")
           for num in nums:
               if max < num:
                  max = num
           return max
       ```
       - O(n^2) - Order "n squared": Nested loops.
       ```python
       def does_name_exist(first_names, last_names, full_name):
           for first_name in first_names:
               for last_name in last_names:
                   if first_name + " " + last_name == full_name:
                       return True
           return False
       ```
        - O(nm): If "n" and "m" increase at the same rate, O(nm) complexity is the same as O(n^2). Else, better to calculate complexity separately
       ```python
       # all_handles = [
       #   ["cosmofan1010", "cosmogirl", "billjane321"],
       #   ["cosmokiller", "gr8", "cosmojane3"],
       #   ["iloveboots", "paperthin"]
       # ]
       # brand_name = "cosmo"
       
       # Expected output: 1.33 (Because 4 handles contained "cosmo" and there are 3 lists)
       
       
       def get_avg_brand_followers(all_handles, brand_name):
           count = 0
           for influencer in all_handles:
               for follower in influencer:
                   if brand_name in follower:
                       count += 1
           return count / len(all_handles)
                
       ```
 - Recusion
 - Exponential
 ### Sorting
 #### Bubble
   Slowest sorting, stable and easiest.
 
   Big O Complexity = O(n^2)
    
 ```python
 def bubble_sort(nums):
     swapping = True
     while swapping == True:
         swapping = False
             for i in range(len(nums)):
                 if nums[i-1] > nums[i]:
                     nums[i-1], nums[i] = nums[i], nums[i-1]
                     swapping = True
     return nums
 
 ```
 #### Merge
   Fast sorting if you're not concern with memory. Stable if condition between left and right is `<=`
   
   Big O complexity = O(n*log(n))
   
   ```python
   def merge_sort(nums):
       if len(nums) < 2:
           return nums
       left = merge_sort(nums[:len(nums) // 2])
       right = merge_sort(nums[len(nums) // 2:])
       return merge(left, right)
       
    def merge(left, right):
       final = []
       i = 0
       j = 0
       while i < len(left) and j < len(right):
           if left[i] <= right[j]:
               final.append(left[i])
               i += 1
           else:
               final.append(right[j])
               j += 1
       while i < len(left):
           final.append(left[i])
           i += 1
       while j < len(right):
           final.append(right[j])
           j += 1
       return final
   ```
   
 #### Insertion
 Slow sorting, however, better than bubble sorting, stable and goes well with pre-sorted lists. Can be used in production cause it uses less memory than merge sort, but should be used with small lists. (couple hundreds)

Big O Complexity = O(n^2); At best: O(n)

```python
def insertion_sort(nums):
    for i in range(len(nums)):
        j = i
        while j > 0 and nums[j-1] > nums[j]:
            if nums[j - 1] > nums[j]:
                nums[j - 1], nums[j] = nums[j], nums[j - 1]
                j -= 1
    return nums
```
 #### Quicksort
 ### Prime Factorization
 ## Learn Data Structures
