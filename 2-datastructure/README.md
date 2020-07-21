# Data Structures

A data structure is a special way of organizing and storing data in a computer so that it can be used efficiently. Array, LinkedList, Stack, Queue, Tree, Graph etc are all data structures that stores the data in a special way so that we can access and use the data efficiently.


As we have discussed above, anything that can store data can be called as a data structure, hence Integer, Float, Boolean, Char etc, all are data structures. They are known as Primitive Data Structures.  


Then we also have some complex Data Structures, which are used to store large and connected data. Some example of Abstract Data Structure are :

1. Linked List
2. Graph
3. Heap
4. Queue
5. Stack
6. Tree

All these data structures allow us to perform different operations on data. We select these data structures based on which type of operation is required. We will look into these data structures one by one in more details below : -


## 1. Link List

A linked list is a dynamic data structure where each element (called a node) is made up of two items - the data and a reference (or pointer) which points to the next node. A linked list is a collection of nodes where each node is connected to the next node through a pointer.</p>

### Example of Singly Link List
![linklist](https://codeforwin.org/ezoimgfmt/secureservercdn.net/160.153.138.219/b79.d22.myftpupload.com/wp-content/uploads/2015/09/Singly-linked-list.png?ezimgfmt=rs:392x193/rscb1)
### Example of Doubly Link List
![doublylinklist](https://camo.githubusercontent.com/b7ac8182d84eeb21230f22d5cf2ff3ecff342fb9/68747470733a2f2f63646e2d696d616765732d312e6d656469756d2e636f6d2f6d61782f323630302f312a474f4b6d6b756346484e5f676d544d557479433273512e706e67)

### Types of Link List

* Singly Link List
* Doubly Link List
### Advantages 

1. Linked list is a  **Dynamic Data Structure**. Meaning it's size can grow and shrink during runtime. 
2. Insertion and Deletion operations are easier as compared to arrays. 

### Disadvantages

1. They use more memory than arrays because they use pointers.
2. Accessing an element has to be done sequentially, i.e, start from the first node. 
3. Nodes are stored incontigously which increases time required to access individual elements.

### Applications

1. Implementation of stacks and queues can be done using linked list.
2. Music Player: Songs are linked to previous and next song. 
3. Implementation of graphs.
4. Implementation of hash maps. 
5. Performing arithmetic operations on long integers. 

## 2. Graph

 A graph consists of a set of nodes or vertices together with a set of edges or arcs where each edge joins two vertices. Unless otherwise specified, a graph is undirected: each edge is an unordered pair {u,v} of vertices, and we don't regard either of the two vertices as having a distinct role from the other.
 ### Example

 ![graph](https://www.geeksforgeeks.org/wp-content/uploads/undirectedgraph.png)

 ### Advantages

1) Allows easier processing of data.

2) It allows information stored on disk very efficiently.

3) These are necessary for designing an efficient algorithm.

4) It provides management of databases like indexing with the help of hash tables and arrays.

5) We can access data anytime and anywhere.

6) It is secure way of storage of  data.

7) Graphs models real life problems 

8) It allows processing of data on software system

### Disadvantages

1) It is applicable only for advanced users.

2) If any issue occurs it can be solved only by experts.

3) Slow access in case of some data types

### Application
1. For fast data lookup, data indexing, Ip addressing, parsers, dynamic memory allocation,process scheduling,dictionary, directory traversal,web crawling , organizing file hierarchy etc.

## 3. Heap

 A heap is a specialized tree-based data structure that satisfied the heap property: if B is a child node of A, then key(A) ≥ key(B). This implies that an element with the greatest key is always in the root node, and so such a heap is sometimes called a max-heap. Of course, there's also a min-heap.

### Example
 ![heap](https://www.geeksforgeeks.org/wp-content/uploads/MinHeapAndMaxHeap.png)

### Advantages 
 1. garbage collection run on the heap memory to free the memory used by object. they doesn't have reference.any object created in the heap space has global access .

2. it helps to find minimum number and greatest number.

3.heap data structure efficiently used graph algorithm such as Dijkstra.

4. heat widely used because it is very efficient\

### Disadvantages

1. Memory management is more complex in heap memory because it is used globally.heap memory is divided into two parts-old generation and young generation etc at java garbage collection.

2. it take to much time in execution compare then other.

### Applications
1. Heaps are used in many famous algorithms such as Dijkstra's algorithm for finding the shortest path, the heap sort sorting algorithm, implementing priority queues, and more. 
2. Essentially, heaps are the data structure you want to use when you want to be able to access the maximum or minimum element very quickly.

## 4. Queue
Queue is an abstract data structure, somewhat similar to Stacks. Unlike stacks, a queue is open at both its ends. One end is always used to insert data (enqueue) and the other is used to remove data (dequeue). Queue follows First-In-First-Out methodology, i.e., the data item stored first will be accessed first.

### Example
![queue](https://miro.medium.com/max/3148/0*TRbfsq86lqDoqW6b.png)

### Advantages
 1. It can basically have infinite length compared with the use of fixed-length arrays. It is fast and flexible . It can handle multiple data types.
 2. A queue allows for O(1) insertion from the end and O(1)deletion from the front.

### Disadvantages
1. Moreover, queues can be of potentially infinite length compared with the use of fixed-length arrays. 
2. A major disadvantage of a classical queue is that a new element can only be inserted when all of the elements are deleted from the queue.

### Application
Queue is used when things don’t have to be processed immediately, but have to be processed in First In First Out order like Breadth First Search. This property of Queue makes it also useful in following kind of scenarios.
1) When a resource is shared among multiple consumers. Examples include CPU scheduling, Disk Scheduling.
2) When data is transferred asynchronously (data not necessarily received at same rate as sent) between two processes. Examples include IO Buffers, pipes, file IO, etc.

## 5. Stack
 A stack is a basic data structure that can be logically thought of as a linear structure represented by a real physical stack or pile, a structure where insertion and deletion of items takes place at one end called top of the stack. This structure is used all throughout programming.

### Example
 ![stack](https://res.cloudinary.com/practicaldev/image/fetch/s--s1Qbl8Gf--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://thepracticaldev.s3.amazonaws.com/i/mwcwre09s12vqa3gvl7a.png)

 ### Advantages
 1. Easy to started
2.  Less Hardware Requirement
3. Cross- Platform

 ### Disadvantages
1. not flexible
2. Lack of scailability
3. Unable to Copy & Paste

 ### Applications
1. The stack can be used to convert some infix expression into its postfix equivalent, or prefix equivalent. 
2. These postfix or prefix notations are used in computers to express some expressions.


## 6. Tree
A tree is a nonlinear data structure, compared to arrays, linked lists, stacks and queues which are linear data structures. A tree can be empty with no nodes or a tree is a structure consisting of one node called the root and zero or one or more subtrees.

### Example
 ![tree](https://miro.medium.com/max/975/1*PWJiwTxRdQy8A_Y0hAv5Eg.png)

 ### Advantages
1. Trees reflect structural relationships in the data. 
2. Trees are used to represent hierarchies. Trees provide an efficient insertion and searching. 
3. Trees are very flexible data, allowing to move subtrees around with minumum effort.

### Disadvantages
1. Binary trees are only efficient when the tree is balanced. If the tree is unbalanced, it won't provide same benefits. Since the leaf and non-leaf nodes are of different sizes, data storage is complicated.
2.  Data storage on the heap is slower and comparison takes more time than other data structures.

 ### Applications
1. Store hierarchical data, like folder  
    structure, organization structure, XML/HTML data.
1. Binary Search Tree is a tree that allows fast 
   search, insert, delete on a sorted data. It also allows finding closest item
1. Heap is a tree data structure which is 
   implemented using arrays and used to implement priority queues.
1. B-Tree and B+ Tree : They are used to 
   implement indexing in databases.
1. Syntax Tree: Used in Compilers.

1. Spanning Trees and shortest path trees are used in routers and bridges respectively in computer networks
1. As a workflow for compositing digital images for visual effects.

![edit2](https://img.shields.io/static/v1?label=topic&message=datastructure&color=orange)![edit](https://img.shields.io/github/languages/top/vaibhavpratapsingh22/Courses)![edit2](https://img.shields.io/static/v1?label=madeby&message=Vaibhav&color=<COLOR>)![edit2](https://img.shields.io/static/v1?label=reviewer&message=Udey&color=<COLOR>)![edit](https://img.shields.io/static/v1?label=PRs&message=Welcome&color=<COLOR>)[![Awesome](https://cdn.rawgit.com/sindresorhus/awesome/d7305f38d29fed78fa85652e3a63e154dd8e8829/media/badge.svg)](https://github.com/sindresorhus/awesome#readme)
