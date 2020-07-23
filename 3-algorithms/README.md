# Algorithm

An algorithm (pronounced AL-go-rith-um) is a procedure or formula for solving a problem, based on conducting a sequence of specified actions. A computer program can be viewed as an elaborate algorithm. In mathematics and computer science, an algorithm usually means a small procedure that solves a recurrent problem.

In this section u will cover the following topics 

1. [Sorting Algorithms](3-algoritms\1-sorting)
2. [Searching Algorithms](3-algoritms\2-searching)
3. [Greedy Method](3-algoritms\3-greedy-method)
4. [Dynamic Method](3-algoritms\4-dynamic-method)


## Properties Of Algorithm :
1. The inputs must be specified.
2. The outputs must be specified.
3. Definiteness - Definiteness means every statement of the algorithm should be clear and unambiguous.

4. Finiteness - Finiteness means every algorithm should lead to some solution after certain number of steps.
5. Effectiveness - All operations to be performed must be sufficiently basic that they can be done exactly and in finite length.

## Complexity Of Algorithm :
Algorithm complexity is a measure which evaluates the order of the count of operations, performed by a given or algorithm as a function of the size of the input data. To put this simpler, complexity is a rough approximation of the number of steps necessary to execute an algorithm. When we evaluate complexity we speak of order of operation count, not of their exact count. For example if we have an order of N2 operations to process N elements, then N2/2 and 3*N2 are of one and the same quadratic order.

Algorithm complexity is commonly represented with the O(f) notation, also known as asymptotic notation or “Big O notation”, where f is the function of the size of the input data.

![complexity](https://he-s3.s3.amazonaws.com/media/uploads/c950295.png)

## Steps For Good Algorithm :
1. Input and output should be defined precisely.
2. Each step in the algorithm should be clear and unambiguous.
3. Algorithms should be most effective among many different ways to solve a problem.
4. An algorithm shouldn't include computer code. 5. Instead, the algorithm should be written in such a way that it can be used in different programming languages.

## Basic Examples Of Algorithms :
**1. Write an algorithm to add two numbers entered by the user.**

    Step 1: Start

    Step 2: Declare variables num1, num2 and sum. 
    Step 3: Read values num1 and num2. 
    Step 4: Add num1 and num2 and assign the result to sum.
        sum←num1+num2 
    Step 5: Display sum 
    Step 6: Stop

**2. Write an algorithm to find the largest among three different numbers entered by the user.**

    Step 1: Start
    Step 2: Declare variables a,b and c.
    Step 3: Read variables a,b and c.
    Step 4: If a > b
           If a > c
              Display a is the largest number.
           Else
              Display c is the largest number.
        Else
           If b > c
              Display b is the largest number.
           Else
              Display c is the greatest number.  
   Step 5: Stop