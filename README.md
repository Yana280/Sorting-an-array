# Sorting-an-array
## Sorting using Bubble sort
This program implements the bubble sort algorithm to sort an unsorted array of integers in ascending order.

The main function initializes an unsorted array 'arr' with 5 integers: 120, 30, 40, 500, and 100.
The main function calls the 'Bubble' function and passes the array 'arr' and its length '5' as arguments.
The 'Bubble' function takes two parameters: an integer array 'a' and its length 'n'.


The 'Bubble' function initializes variables 'passes', 'comparisons', 'i', 'j', and 'temp'.
The 'passes' variable is set to 'n-1', which represents the number of passes required to sort the array.

The 'comparisons' variable is also set to 'n-1', which represents the number of comparisons required in each pass.
The 'for' loop runs from 0 to 'passes-1' and performs 'passes-1' iterations.

The inner 'for' loop runs from 0 to 'comparisons-i-1' and performs 'comparisons-i-1' iterations.
The 'if' statement inside the inner loop checks if the current element 'a[j]' is greater than the next element 'a[j+1]'.

If the 'if' condition is true, it swaps the elements using the 'temp' variable to store the temporary value.
The 'Bubble' function prints the first and last elements of the sorted array 'a' using array indexes 0 and 4, respectively.
![Screenshot (297)](https://user-images.githubusercontent.com/125993593/234355869-756716ee-37a7-4abf-9b63-27b31841ec9a.png)
### Algorithm
START
Step 1: Sub BubbleSort(a As Integer(), n As Integer)

Step 2:     Dim passes, comparisons, i, j, temp As Integer


Step 3:     passes = n - 1

Step 4:     comparisons = n - 1

Step 5: 

Step 6:     For i = 0 To passes - 1

Step 7:         For j = 0 To comparisons - i - 1

Step 8:             If a(j) > a(j + 1) Then

Step 9:                 temp = a(j)

Step 10:                 a(j) = a(j + 1)

Step 11:                 a(j + 1) = temp

Step 12:             End If

Step 13:         Next

Step 14:     Next

Step 15:

Step 16:     Console.WriteLine("First ele: {0}", a(0))

Step 17:     Console.WriteLine("Last Ele: {0}", a(n - 1))

Step 18: End Sub

Step 19:

Step 20: Sub Main()

Step 21:     Dim arr As Integer() = {120, 30, 40, 500, 100}

Step 22:     BubbleSort(arr, 5)

Step 23: End Sub

STOP

## Sorting using Selection sorting
The Selectionsort function takes two arguments: an integer array a and the size of the array n. It begins by initializing a variable smallest to the first element of the array.

Then, two loops are used. The outer loop iterates through the array from the first element to the second-to-last element. For each element in the outer loop, the inner loop finds the index of the smallest element in the remaining unsorted portion of the array.

If the smallest element is not the current element being sorted, then the current element is swapped with the smallest element found in the inner loop.

Once the loops have completed, the sorted array is printed using printf.
### Algorithm
 
 Start
Create a function called Selectionsort which takes an array a and integer n as arguments

Declare integer variables i, j, smallest, and temp

For i = 0 to n-2

Set smallest = i

For j = i+1 to n-1

If a[smallest] > a[j], set smallest = j

If i != smallest

Set temp = a[i]

Set a[i] = a[smallest]

Set a[smallest] = temp

Print the sorted array using the printf function

End the function

Create the main function

Declare an integer array called array of size 5 and initialize it with values

Call the Selectionsort function with array and 5 as arguments

Return 0 to indicate successful completion

End the main function

End the program.


