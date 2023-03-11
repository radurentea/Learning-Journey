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
