
#Linear Search Function
def search(arr, x):

	for i in range(len(arr)):

		if arr[i] == x:
			return i

	return -1

#list of numbers to search from
arr=[45,76,92,61,43,25]
#Item to be searched
x=43
#Function Call
result=search(arr,x)
if result!=-1:
    print("Item is found at index: ",result)
else:
    print("Item not found")
    
"""
    Output:
    Item is found at index: 4
"""