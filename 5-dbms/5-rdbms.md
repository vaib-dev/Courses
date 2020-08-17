# Chapter -5 RDBMS

RDBMS stands for Relational Database Management Systems. All modern database management systems like SQL, MS SQL Server, IBM DB2, ORACLE, My-SQL and Microsoft Access are based on RDBMS. Data is represented in terms of tuples (rows) and attribute(column) in RDBMS. Relational database is most commonly used database. It contains number of tables and each table has its own primary key. Due to a collection of organized set of tables, data can be accessed easily in RDBMS.

The RDBMS database uses tables also known as relations to store data. A table is a collection of related data entries and contains rows and columns to store data. A table is the simplest example of data storage in RDBMS.

## Normalization
Normalization is the process of organizing the data in the database. Normalization is used to minimize the redundancy(duplicacy) from a relation or set of relations. It is also used to eliminate the undesirable characteristics like Insertion, Update and Deletion Anomalies. Normalization divides the larger table into the smaller table and links them using relationship. There are four types of normal forms:

<img src="https://www.gatevidyalay.com/wp-content/uploads/2018/04/Normal-Forms-in-DBMS.png" height="" width="">

### 1. First Normal Form (1NF)
A relation will be 1NF if it contains an atomic value.
It states that an attribute of a table cannot hold multiple values. It must hold only single-valued attribute. First normal form disallows the multi-valued attribute, composite attribute, and their combinations. In 1NF every column should contain the value of the same domain and order of rows and column are irrelevant.

<img src="https://user-images.githubusercontent.com/54719422/90340181-f5240380-e013-11ea-865e-f6bca2e12191.png" height="" width=""></p>

### 2. Second Normal Form (2NF)
In the 2NF, relational must be in 1NF. In the second normal form, all non-key attributes are fully functional dependent on the primary key.

<img src="https://user-images.githubusercontent.com/54719422/90361730-93e44a80-e07c-11ea-977d-68118442d769.png" height="" width=""><img src="https://user-images.githubusercontent.com/54719422/90361776-aeb6bf00-e07c-11ea-9235-951ae1443393.png" height="" width="">

### 3. Third Normal Form (3NF)
A relation will be in 3NF if it is in 2NF and not contain any transitive partial dependency.
3NF is used to reduce the data duplication. It is also used to achieve the data integrity. If there is no transitive dependency for non-prime attributes, then the relation must be in third normal form.

<img src="" height="" width="">

### 4. Boyce Codd normal form (BCNF)
BCNF is the advance version of 3NF. It is stricter than 3NF. A table is in BCNF if every functional dependency X → Y, X is the super key of the table.
For BCNF, the table should be in 3NF, and for every FD, LHS is super key.

<img src="" height="" width="">

## Joins

A SQL Join statement is used to combine data or rows from two or more tables based on a common field between them. Different types of Joins are:

### 1. INNER JOIN
The INNER JOIN keyword selects all rows from both the tables as long as the condition satisfies. This keyword will create the result-set by combining all rows from both the tables where the condition satisfies i.e value of the common field will be same.

### 2. LEFT JOIN
This join returns all the rows of the table on the left side of the join and matching rows for the table on the right side of join. The rows for which there is no matching row on right side, the result-set will contain null. LEFT JOIN is also known as LEFT OUTER JOIN.

### 3. RIGHT JOIN
RIGHT JOIN is similar to LEFT JOIN. This join returns all the rows of the table on the right side of the join and matching rows for the table on the left side of join. The rows for which there is no matching row on left side, the result-set will contain null. RIGHT JOIN is also known as RIGHT OUTER JOIN.

### 4. FULL JOIN
 FULL JOIN creates the result-set by combining result of both LEFT JOIN and RIGHT JOIN. The result-set will contain all the rows from both the tables. The rows for which there is no matching, the result-set will contain NULL values.

##  Advance Database Applications
### 1. ORDBMS
An Object-relational model is a combination of Object-oriented database model and a Relational database model. So, it supports objects, classes, inheritance etc. just like Object Oriented models and has support for data types, tabular structures etc. like the Relational data model.

One of the major goals of Object-relational data model is to close the gap between relational databases and the object-oriented practices frequently used in many programming languages such as C++, C#, Java etc. The advantages of the Object Relational model are −

1. **Inheritance**: The Object Relational data model allows its users to inherit objects, tables etc. so that they can extend their functionality. Inherited objects contains new attributes as well as the attributes that were inherited. 

2. **Complex Data Types**: Complex data types can be formed using existing data types. This is useful in Object relational data model as complex data types allow better manipulation of the data.

3. **Extensibility**: The functionality of the system can be extended in Object-relational data model. This can be achieved using complex data types as well as advanced concepts of object-oriented model such as inheritance.

Disadvantages of Object-Relational model:

1. The object-relational data model can get quite complicated and difficult to handle at times as it is a combination of the Object-oriented data model and Relational data model and utilizes the functionalities of both of them.

2. Why should we make a separate model which is almost same as RDBMS, to solve this some companies has added object-oriented features in RDBMS only.

## The limitations of relational DBMS

### 1. The abundance of information
 The advances in the complexity of the information can cause drawbacks for the relational database management system. Relational databases are designed in order to organize the data with the use of common characteristics. 

 ### 2. Structure limits
  This is another limitation as some of the relational databases have limits on the length of the field. Some of the search queries and names are shorter as compared to their actual position. This can lead to the loss of the data. 
 ### 3. Cost
  One of the main disadvantages of the relational database management system is high cost. The relational databases are expensive to set up and also the maintenance of the databases is also expensive. 
  
### 4.Isolated information
   Because the relational databases use a large number of tables, there are higher chances that some information can be forgotten when it is transformed from one location to another location. This is the main problem in the large-scale organization in which there is a large amount of data of the employees, accounts and financial data. Isolation of information problem arises when the organization has different database systems.

   ## Summary

   Above we discussed about the relational data management system(RDBMS), types of normalization, types of joins, advanced database application, limitations of RDBMS.

   In the next chapter, we will discuss about Extensions of DBMS,