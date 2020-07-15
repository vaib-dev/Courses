# Sorting
Sorting refers to arranging data in a particular format. Sorting algorithm specifies the way to arrange data in a particular order.

Above we have performed all the programs of sorting in C language.
The above contains the following codes:
* Selection Sort
* Insertion Sort
* Bubble Sort
* Quick Sort
* Merge Sort
* Radix Sort
* Count Sort


Below we have all the Pseudo-codes of the above programs. So the question arises that what is pseudo-code so the answer is:
**Pseudocode (pronounced SOO-doh-kohd) is a detailed yet readable description of what a computer program or algorithm must do, expressed in a formally-styled natural language rather than in a programming language. Pseudocode is sometimes used as a detailed step in the process of developing a program.**

---

## 1.Selection Sort:
This sorting algorithm is an in-place comparison-based algorithm in which the list is divided into two parts, the sorted part at the left end and the unsorted part at the right end.
Initially, the sorted part is empty and the unsorted part is the entire list. The algorithm maintains two subarrays in a given array.

1. The subarray which is already sorted.
2. Remaining subarray which is unsorted.

### Example ->
![selectionsort](https://www.studytonight.com/data-structures/images/simple-selection-sort.png)

### Complexity
Time complexity - О(n^2), where n is the number of items being sorted. 

Space complexity - O(1), due to auxillary space only.

    Algorithm : Selection_sort(Arr,N)
     
    Let an array Arr with N elements i.e Arr[1:N]

    Step1-> Repeat step 2 to4 for K=1 to N-1
    Step2-> Set MIN:=A[k]
            POSITION:=k
    Step3->[Make a pass and obtain element with     
           smallest vallue]
           Repeat for I=k-1 to N
           if MIN>Arr[I] then
             MIN:=A[I] and
             POSITION:=I
           [End of if statement]
    Step4-> [Exchange elments]         
            if POSITION!=K then
               TEMP=A[k]
               Arr[k]=Arr[POSITION]
               Arr[POSITION]=TEMP
            [End of if statemnt]
    Step5-> [Finished]   
            Exit

## 2. Insertion Sort
Insertion sort is based on the idea that one element from the input elements is consumed in each iteration to find its correct position i.e, the position to which it belongs in a sorted array. It iterates the input elements by growing the sorted array at each iteration.
![insertionsort](https://www.studytonight.com/data-structures/images/basic-insertion-sort.png)

### Complexity -> 
**Time complexity**

* Best Case: O(n)

* Average and Worst Case: О(n2)

*where n is the number of items being sorted.*

**Space complexity -**

* O(1), due to auxillary space only.


      Algorithm :Insertion_Sort(Arr,N)

      Consider an array Arr with N elements.

      Step 1-> Arr[1] by itself is sorted

      Step 2-> Arr[2] is inserted before or after Arr[1]so that Arr[1] and Arr[2] are sorted

      Step 3-> Similarly Arr[3] is inserted so that Arr [1],Arr[2] and Arr[3] are sorted
  
      Step 4-> This process is continued till all the elements are sorted

      Step 5->Exit

## 3.Bubble Sort :
This is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order. It makes multiple passes through a list, compares adjacent items and exchanges those that are out of order. Each pass through the list places the next largest value in its proper place.
 
 ### Example
![bubblesort](https://tech.queryhome.com/?qa=blob&qa_blobid=9990396289959433440)

#### Complexity ->
**Time complexity** - О(n^2), where n is the number of items being sorted.

**Space complexity** - O(1), due to auxillary space only.

    Algorithm : Bubble_Sort(Arr,N)
    Let Arr be a linear array with N elements i.e Arr[1:N]. The variables i,j are local integer variabls.

    Step 1-> Repeat steps 2 and 3 for i=1 to N-1

    Step 2-> Repeat step 3 for j=1 to N-1

    Step 3-> [Swaping]
           
        if Arr[j]>Arr[j+1] then
        TEMP:=Arr[j]
        Arr[j]=Arr[j+1]
        Arr[j+1]=TEMP
        [END OF IF STATEMENT]
        [END OF STEP 2 for STATEMENT]
        [END OF STEP 1 for SATEMENT]

    Step 4-> Exit 

## 4.Quick Sort-> 
 QuickSort is one of the most efficient sorting algorithms and is based on the splitting of an array into smaller ones. The name comes from the fact that, quick sort is capable of sorting a list of data elements significantly faster than any of the common sorting algorithms. And like Merge sort, Quick sort also falls into the category of divide and conquer approach of problem-solving methodology.

 ### Example 1->

 ![quicksort](https://camo.githubusercontent.com/c98c115a53ba3f64b64c99bc3936e6d684c3651e/68747470733a2f2f75706c6f61642e77696b696d656469612e6f72672f77696b6970656469612f636f6d6d6f6e732f392f39632f517569636b736f72742d6578616d706c652e676966)
 
 ### Example 2 -->
Below given is an array, which needs to be sorted. We will use the Quick Sort Algorithm to sort this array(this example chooses any element as pivot):

![Quick Sort 2](https://miro.medium.com/max/600/1*DtH6fEdBhoUGnjBWudJ8pA.png)
 - After the above step, the first pivot is in its required place, similarly we sort the left and right halves of the array in a recursive manner.

 ### Complexity->

**Time Complexity** -> is O(nLogn).

**Worst Case** -> it becomes O(n^2).

**Space Complexity** -> O(Logn).

    Algorithm : Quick_Sort

    Step 1 − Choose the highest index value has pivot

    Step 2 − Take two variables to point left and right of the list excluding pivot

    Step 3 − left points to the low index

    Step 4 − right points to the high

    Step 5 − while value at left is less than pivot move right

    Step 6 − while value at right is greater than pivot move left

    Step 7 − if both step 5 and step 6 does not match swap left and right

    Step 8 − if left ≥ right, the point where they met is new pivot
    
    Step9 -Exit


### 5.Merge Sort ->
Merge sort is a divide-and-conquer algorithm based on the idea of breaking down a list into several sub-lists until each sublist consists of a single element and merging those sublists in a manner that results into a sorted list.

### Example :

![mergesort](https://www.researchgate.net/profile/Ahmet_Erdogan/publication/221577430/figure/fig5/AS:667654490701834@1536192643267/Merge-sort-paradigm-11.ppm)

This algorithm basically works on two functions:
1. Divide
1. Merge


       Algorithm : MERGE_SORT(Arr,N)

        This algorithm sort the array Arr having N elements.
        Step1->[Call the recursive function divide]
            Call divide(Arr,1,N)
        Step2->[Finished]
        Exit

#### Now we will build a recursive function named divide which will have 3 parameters.

    Procedure:divide(Arr,first,last) 

    This function consider the array Arr. the first and last variables represent the index of first and last element of the array. The variable mid repreaents the middle value of the array.

    Step1->  [divide the array recursively]
             if (first<last)then             
                mid:=(first+last)/2
                call divide (Arr,first,last)
                call divide (Arr,mid+1,last)
                call merge (A,first,mid,last)
             [End of if statement]
    Step2-> [finished]
            Return 

#### Now we will build a recursive function named merge which will have 4 parameters.

    Procedure:merge(Arr,first,mid,last)
    Here first,mid,last represents the first,mid,last positions of the array Arr. In thus procedure we use an auxilary array TEMP.The variables i,j,k are local integer variables.
    
    Step1->[Initialize]
    i:=first
    j:=mid+1
    k:=first

    Step2-> [Compare elements and output 
            the smaller in array TEMP]
            Repeat while (i<=mid)and(j<=last)
            if( A[i]< A[j])then
                TEMP[k]:=A[i]
                i++
                k++
            ELSE
                TEMP[k]:=A[i]
                j++
                k++
    [End of if statement]
    [End of while loop]
    
    Step3->[Copy the remaining unprocessed
           elments into the array TEMP]
           Repeat while(i<=mid)
                TEMP[k]:=A[i]
                k++
                i++
    [End of loop]
           Repeat while(j<=last)
                 TEMP[k]:=A[j]
                 k++
                 j++
    [End of loop]

    Step4->[Copy array temp to array Arr]
           Repeat for i:=first to last
           A[i]:=TEMP[i]
           [End of for loop]
    Step5->[Finished]
           Return





 

## 6.Radix Sort
Radix Sort. Radix sort is an integer sorting algorithm that sorts data with integer keys by grouping the keys by individual digits that share the same significant position and value (place value). Radix sort uses counting sort as a subroutine to sort an array of numbers.

### Example :
![radixsort](https://image.slidesharecdn.com/algoppt-150414075622-conversion-gate01/95/counting-sort-and-radix-sort-algorithms-36-638.jpg?cb=1428998345)

### Complexity Analysis ->

**Time Complexity** -->

* Best case time complexity : Ω(nk)

* Average case time complexity : Θ(nk)

* Worst case time complexity : O(nk)

**Space complexity** : O(n + k)

*where n = number of input data , k = maximum element in input data.*

    Algorithm : Radix-Sort(Arr, d)
     Step1-> for j = 1 to d
               do
                 int count[10] = {0};
     Step2-> for i = 0 to n do
                count[key of(Arr[i]) in pass j]++
     Step3-> for k = 1 to 10 do
                count[k] = count[k] + count[k-1]
             for i = n-1 to 0 
               do
                 result[ count[key of(Arr[i])] ] = Arr[j]
                 count[key of(Arr[i])]--
             for i=0 to n do
                Arr[i] = result[i]
       [End of  for loop]
       
    Step4 ->End

## 7.Count Sort
Counting sort is a stable sorting technique, which is used to sort objects according to the keys that are small numbers. It counts the number of keys whose key values are same.

### Example :
![countsort](https://www.codesdope.com/staticroot/images/algorithm/counting3.png)

### Complexity ->
**Space Complexity**: O(n+k)

**Counting Sort has linear time complexity.**

**Time Complexity**: O(n+k) where n is the number of elements in input array and k is the range of input.

    Algorithm : Count_Sort(arr,N)

    Let Arr be a linear array with N elements i.e 
    Arr[1:N]. In this procedure we use an uxilary array count. The variables i,j are local integer variabls. We also us a MAX variable which stores the maximum value of the array.

    Step 1->  initialize count array with all zeros

    Step 2-> Repeat step 3 for i=1 to N

    Step 3-> Upadte the count array     

        count[arr[i]]=count[arr[i]]+1;
          [END OF STEP 2 for STATEMENT]

    Step 4-> Exit
