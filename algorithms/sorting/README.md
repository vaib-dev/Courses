# Sorting
Sorting refers to arranging data in a particular format. Sorting algorithm specifies the way to arrange data in a particular order.

Above we have performed all the programs of sorting in C language.
The above contains the following codes:
* bubble-sort
* count-sort
* insertion-sort
* merge-sort
* quick-sort
* radix-sort

Below we have all the Pseudo-codes of the above programs. So the question arises that what is pseudo-code so the answer is:
**Pseudocode (pronounced SOO-doh-kohd) is a detailed yet readable description of what a computer program or algorithm must do, expressed in a formally-styled natural language rather than in a programming language. Pseudocode is sometimes used as a detailed step in the process of developing a program.**

## Pseudocode for bubble-sort ->
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

do
## Pseucode for count-sort->

 Let Arr be a linear array with N elements i.e 
 Arr[1:N]. In this procedure we use an auxilary array count. The variables i,j are local integer variabls. We also us a MAX variable which stores the maximum value of the array.

    Step 1->  initialize count array with all zeros

    Step 2-> Repeat step 3 for i=1 to N

    Step 3-> Upadte the count array     

        count[arr[i]]=count[arr[i]]+1;
          [END OF STEP 2 for STATEMENT]

    Step 4-> Exit

## Pseucode for insertion-sort->

Consider an array Arr with N elements.

    Step 1-> Arr[1] by itself is sorted

    Step 2-> Arr[2] is inserted before or after Arr[1]so that Arr[1] and Arr[2] are sorted

    Step 3-> Similarly Arr[3] is inserted so that Arr[1],Arr[2] and Arr[3] are sorted

    Step 4-> This process is continued till all the elements are sorted

    Step 5->Exit

## Pseucode for merge-sort-> 
This algorithm is ahving two functions:
1. Divide
1. Merge

        Algorithm MERGE_SORT(Arr,N)
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

 ## Pseucode for quick-sort-> 

    Step 1 − Choose the highest index value has pivot

    Step 2 − Take two variables to point left and right of the list excluding pivot

    Step 3 − left points to the low index

    Step 4 − right points to the high

    Step 5 − while value at left is less than pivot move right

    Step 6 − while value at right is greater than pivot move left

    Step 7 − if both step 5 and step 6 does not match swap left and right

    Step 8 − if left ≥ right, the point where they met is new pivot


## Pseucode for radix-sort-> 
    Radix-Sort(A, d)
       for j = 1 to d do
            int count[10] = {0};
           for i = 0 to n do
                count[key of(A[i]) in pass j]++
           for k = 1 to 10 do
                count[k] = count[k] + count[k-1]
           for i = n-1 downto 0 do
            result[ count[key of(A[i])] ] = A[j]
                count[key of(A[i])]--
            for i=0 to n do
                A[i] = result[i]
       End for(j)
    End