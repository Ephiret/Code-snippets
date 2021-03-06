def binary_search(arr, x): 
    low = 0
    high = len(arr) - 1
    mid = 0
  
    while low <= high: 
  
        mid = (high + low) // 2
  
        # Check if x is present at mid 
        if arr[mid] < x: 
            low = mid + 1
  
        # If x is greater, ignore left half 
        elif arr[mid] > x: 
            high = mid - 1
  
        # If x is smaller, ignore right half 
        else: 
            return mid 
  
    # If we reach here, then the element was not present 
    return -1

arr = [] 
arr = [int(item) for item in input("Enter the list items : ").split()]
x = int(input("Enter the number to be searched in list:"))
  
# Function call 
result = binary_search(arr, x)

if result != -1: 
    print("Element is present at index", str(result)) 
else: 
    print("Element is not present in array")