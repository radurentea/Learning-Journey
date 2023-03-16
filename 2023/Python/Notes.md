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
 - Math
 - Polynomial
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
