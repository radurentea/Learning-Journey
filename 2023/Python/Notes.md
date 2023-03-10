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
 #### Bubble
 #### Merge
 #### Insertion
 #### Quicksort
