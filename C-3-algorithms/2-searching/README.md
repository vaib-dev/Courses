# Searching
#### Searching for an element in the list is a process of checking wether the specified element is present in the list and determining the location of the desired element.

Types of searching :

* linear-seach
* binary-search
* breadth-first-search
* depth-first-search
* hashing

One by one we will discuss about them and also write their pseudocode.

## 1. Linear Search

Linear search is a very simple search algorithm. In this type of search, a sequential search is made over all items one by one. Every item is checked and if a match is found then that particular item is returned, otherwise the search continues till the end of the data collection.

### Example
![linearsearch](https://www.tutorialspoint.com/data_structures_algorithms/images/linear_search.gif)


    Algorithm : Linear_Search(Arr,N,X)

    Here Arr is an array containing N elements
    X is the element searched. If search is succesful this element finds the location of X in the array otherwise the value 0 is returned.
    Step1->[Search the array]
           Repeat for I=1 to N
               If Arr[I]=X then
                   Return(I) and exit
              [End of if statement]
            [End of for loop]
    Step2-> [Element not found]
               Return(0)
    Step3-> Exit          

### Complexity
**Time complexity** - O(n), where n is the number of elements in the array.

**Space complexity** - O(1). 


## 2. Binary Search

Binary Search: Search a sorted array by repeatedly dividing the search interval in half. Begin with an interval covering the whole array. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise narrow it to the upper half.

![binarysearch](https://www.geeksforgeeks.org/wp-content/uploads/Binary-Search.png)

    Algorithm:Binary_Search(A,X,N)
    Here Arr is an array containing N elements
    X is the element searched. If search is succesful this element finds the location of X in the array otherwise the value 0 is returned.

    Step1->[Initialize variables]
           First:=1
           Last:=N
           Mid=(First+Last)/2
    Step2-> if X<Arr[mid]then
                 Last:=Mid-1
            Else
                 First:=Mid+1
                 [End of if statement]
    Step4-> Mid=(First+Last)/2
            [End of step 2 loop]          
    Step5-> if Arr[mid]=X then
                return(mid)
            Else
                return(0)
            [End of of statement]
    Step6->Exit                

### Complexity
**Time complexity** - О(log n), where n is the number of items being sorted.

**Space complexity** - O(1), due to auxillary space only.

## 3. Breadth-First Search
Breadth-first search (BFS) is an algorithm that is used to graph data or searching tree or traversing structures. ... This algorithm selects a single node (initial or source point) in a graph and then visits all the nodes adjacent to the selected node. Remember, BFS accesses these nodes one by one.

![bfs](https://i1.wp.com/algorithms.tutorialhorizon.com/files/2015/05/Graph-BFS.gif)

    Algorithm : BFS(G,A)
    Given a graph G. This algorithm excecutes a breadth first traversal or searching beginning at a starting node. The variable STATUS tells us the current status of a node. Q is the name of Queue.

    Step1->[Initialize all nodes to ready state]
           Set STATUS =1 to all nides of graph G
    Step2->[Initialize first node and put it in
            the queue]
            [a] Insert starting node A in queue Q
            [b] Set STATUS =2 (waiting state) for a node A
    Step3-> [Repeat until all nodes have been
            examined]

    Step4-> [Process the Front node of queue Q]
            (a) Remove the front node , say N of queue Q
            (b)Process node N
            (c)Set STATUS= 3(Processed state) of Node N
    Step5-> [Add all neighbours of N in queue]
            (a)Insert all the neighbours of N in the queue Q
            (b) Change STATUS=2 (waiting state) all the neighbours of N
            [End of step 3 loop]
    Step6-> [Finished]
            Exit                    

### Complexity
**Time complexity** -The time complexity can be expressed as O(|V|+|E|), since every vertex and every edge will be explored in the worst case.|V| is the number of vertices and |E| is the number of edges in the graph. Note that O(|E|) may vary between O(1) and O(|V|^{2}), depending on how sparse the input graph is.

**Space complexity** - O(|V|), where |V| is the cardinality of the set of vertices (as said before). If the graph is represented by an adjacency list it occupies O(|V|+|E|) space in memory, while an adjacency matrix representation occupies O(|V|^{2})            

## 4. Depth-First Search
Depth First Search (DFS) algorithm traverses a graph in a depthward motion and uses a stack to remember to get the next vertex to start a search, when a dead end occurs in any iteration

![DFS](https://www.codesdope.com/staticroot/images/algorithm/dfs.gif)

    Algorithm : DFT(G,A)
    Given a graph G. This algorithm excecutes a depth first traversal or searching beginning at a starting node. The variable STATUS tells us the current status of a node. S is the name of Stack.
    
    Step1->[Initialize all nodes to ready state]
           Set STATUS = 1 to all nodes of graph G
    Step2->[Initialize the first node and pull it 
           into the stack]
           (a)PUSH the starting node into the  
              stack S
           (b)Set the STATUS =2 (waiting state)
              for node A.
    Step3->[Repeat until all nodes have been
           examined]
           Repeat steps 4 and 5 until the stack 
           becomes empty
    Step4->[Process the TOP node of stack S]
           (a)Pop the top node,say N of stack S.
           (b)Process node N
           (c)Set STATUS =3 (Processed state of
              node N)
    Step5->[Add all theneighbours of N in  stack]
           (a)PUSH all the neighbours of N in the
              stack S.
           (b)Change STATUS =2 (waiting state) of 
              all the neighbours of node N.
           [End of step 3 loop]
    Step6->[Finished]
          Exit


## Complexity
**Time complexity** - O(V+E), where V and E are number of vertices and edges.

## 4 .Hashing In Data Structures
Hashing in Data Structure Searching is dominant operation on any data structure. Most of the cases for inserting, deleting, updating all operations required searching first. So searching operation of particular data structure determines it’s time complexity. 

### Example
We have numbers from 1 to 100 and hash table of size 10. Hash function is mod 10. That means number 23 will be mapped to (23 mod 10 = 3) 3rd index of hash table.

![hash](https://www.thecrazyprogrammer.com/wp-content/uploads/2017/06/Hashing-Hash-Table-Hash-Function.png)

But problem is if elements (for example) 2, 12, 22, 32, elements need to be inserted then they try to insert at index 2 only. This problem is called Collision. To solve this collision problem we use different types of hash function techniques. Those are given below.

* Chaining

* Open addressing
   1. Linear probing
   2. Quadratic probing
   3. Double hashing

#### These also called collision resolution techniques.
## Chaining
In hash table instead of putting one element in index we maintain a linked list. When collision happened we place that element in corresponding linked list. Here some space is wasted because of pointers.
![chaining](https://www.thecrazyprogrammer.com/wp-content/uploads/2017/06/Hashing-1.png)

## Open Addressing
In case if we have collision we again calculate the hash value using corresponding hash function. But this time we do some minor modifications to that input. This process of searching for empty space to insert element in called Probing.

![openaddressing](https://www.thecrazyprogrammer.com/wp-content/uploads/2017/06/Hashing-2.png)

### 1. Linear Probing
* Linear probing is a scheme in computer programming for resolving collisions in hash tables, data structures for maintaining a collection of key–value pairs and looking up the value associated with a given key.
*  Along with quadratic probing and double hashing, linear probing is a form of open addressing.
### 2. Quadratic Probing

* It is same as linear probing. But when collision occurs we use different function. If collision happened that element try to occupy at quadratic distance instead of linear distance.
* Due to this “Primary clustering” will be reduced. But secondary clustering won’t be eliminated.

### 3. Double Hashing
* In double hashing, there are two hash functions. The second hash function is used to provide an offset value in case the first function causes a collision. 
* The following function is an example of double hashing: (firstHash(key) + i * secondHash(key)) % tableSize.

          
      Algorithm : Hashing
      1. Create an array of structure, data (i.e
         a hash table).
      2. Take a key to be stored in hash table 
         as  input.
      3. Corresponding to the key, an index will  
         be generated.
      4. In case of absence of data in that 
         index  of array, create one and insert
         the data item  (key and value) into it
          and increment the  size of hash table.
      5. In case the data already exists, the 
         new  data cannot be inserted if the 
         -already  present data does not match 
         given key.
      6. To display all the elements of hash 
         table,  data at each index is extracted 
         and elements  (key and value) are read 
         and printed.
      7. To remove a key from hash table, we 
         will  first calculate its index and 
         extract its  data, delete the key in
         case it matches the  given key.
      8. Exit


## AVL Tree
These are also called height balanced BST. AVL tree is a self-balancing binary search tree in which each node maintains extra information called a balance factor whose value is either -1, 0 or +1.
Formula to count the Balance Factor is :

**BF=(Height of left subtree -Height of right subtree)**

AVL tree got its name after its inventor Georgy **Adelson-Velsky and Landis**.

### Rotaions in AVL Tree

There are 4 types of rotaions that can be performed in the AVL tree in order to maintain the balance factor as shown in the figure :
![rotaions](https://upload.wikimedia.org/wikipedia/commons/f/f5/AVL_Tree_Rebalancing.svg)

### Why AVL is preffered over BST ?
AVL tree is also a BST but it can rebalance itself. This behavior makes it faster in worst cases. It keeps rebalancing itself so in worst case it will consume O(log n ) time when the plain BST will take O(n). So, the answer to your question: It is always better to implement AVL tree than just plain BST.







![edit2](https://img.shields.io/static/v1?label=topic&message=Algoritm&color=orange)![edit](https://img.shields.io/github/languages/top/vaibhavpratapsingh22/Courses)![edit2](https://img.shields.io/static/v1?label=madeby&message=Vaibhav&color=<COLOR>)![edit2](https://img.shields.io/static/v1?label=reviewer&message=Udey&color=<COLOR>)![edit](https://img.shields.io/static/v1?label=PRs&message=Welcome&color=<COLOR>)
