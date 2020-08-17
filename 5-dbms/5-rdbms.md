# Chapter -5 RDBMS

RDBMS stands for Relational Database Management Systems. All modern database management systems like SQL, MS SQL Server, IBM DB2, ORACLE, My-SQL and Microsoft Access are based on RDBMS. Data is represented in terms of tuples (rows) and attribute(column) in RDBMS. Relational database is most commonly used database. It contains number of tables and each table has its own primary key. Due to a collection of organized set of tables, data can be accessed easily in RDBMS.

The RDBMS database uses tables also known as relations to store data. A table is a collection of related data entries and contains rows and columns to store data. A table is the simplest example of data storage in RDBMS.

## Normalization
Normalization is the process of organizing the data in the database. Normalization is used to minimize the redundancy(duplicacy) from a relation or set of relations. It is also used to eliminate the undesirable characteristics like Insertion, Update and Deletion Anomalies. Normalization divides the larger table into the smaller table and links them using relationship. There are four types of normal forms:

<img src="https://www.gatevidyalay.com/wp-content/uploads/2018/04/Normal-Forms-in-DBMS.png" height="" width="">

### 1. First Normal Form (1NF)
A relation will be 1NF if it contains an atomic value.
It states that an attribute of a table cannot hold multiple values. It must hold only single-valued attribute. First normal form disallows the multi-valued attribute, composite attribute, and their combinations. In 1NF every column should contain the value of the same domain and order of rows and column are irrelevant.

**Example**: Relation EMPLOYEE is not in 1NF because of multi-valued attribute EMP_PHONE.

<img src="https://user-images.githubusercontent.com/54719422/90362135-854a6300-e07d-11ea-9f6d-2d288ec45294.png" height="" width="">

### 2. Second Normal Form (2NF)
In the 2NF, relational must be in 1NF. In the second normal form, all non-key attributes are fully functional dependent on the primary key.

**Example**: Let's assume, a school can store the data of teachers and the subjects they teach. In a school, a teacher can teach more than one subject.

<img src="https://user-images.githubusercontent.com/54719422/90361730-93e44a80-e07c-11ea-977d-68118442d769.png" height="" width=""><img src="https://user-images.githubusercontent.com/54719422/90361776-aeb6bf00-e07c-11ea-9235-951ae1443393.png" height="" width="">

### 3. Third Normal Form (3NF)
A relation will be in 3NF if it is in 2NF and not contain any transitive partial dependency.
3NF is used to reduce the data duplication. It is also used to achieve the data integrity. If there is no transitive dependency for non-prime attributes, then the relation must be in third normal form.

**Example**: Let's have a Employee details table of a company which contains complete imformation of the employee.

<img src="https://user-images.githubusercontent.com/54719422/90362383-1d484c80-e07e-11ea-90c4-d907ef9956eb.png" height="" width="">

Super key in the table above:

>{EMP_ID}, {EMP_ID, EMP_NAME}, {EMP_ID, EMP_NAME, EMP_ZIP}....so on  

Candidate key: 
>{EMP_ID}

Non-prime attributes: 
> all attributes except EMP_ID are non-prime.

Here, EMP_STATE & EMP_CITY dependent on EMP_ZIP and EMP_ZIP dependent on EMP_ID. The non-prime attributes (EMP_STATE, EMP_CITY) transitively dependent on super key(EMP_ID). It violates the rule of third normal form.

That's why we need to move the EMP_CITY and EMP_STATE to the new <EMPLOYEE_ZIP> table, with EMP_ZIP as a Primary key.

<img src="https://user-images.githubusercontent.com/54719422/90362499-67313280-e07e-11ea-8986-71f361b23303.png" height="" width="">

### 4. Boyce Codd normal form (BCNF)
BCNF is the advance version of 3NF. It is stricter than 3NF. A table is in BCNF if every functional dependency X → Y, X is the super key of the table.
For BCNF, the table should be in 3NF, and for every FD, LHS is super key.

Example: Let's assume there is a company where employees work in more than one department.

<img src="https://user-images.githubusercontent.com/54719422/90363160-c6dc0d80-e07f-11ea-9999-7e8d101944b2.png" height="" width="">

Functional dependencies are as follows:

>EMP_ID  →  EMP_COUNTRY  
EMP_DEPT  →   {DEPT_TYPE, EMP_DEPT_NO}  

Candidate key:
> {EMP-ID, EMP-DEPT}

The table is not in BCNF because neither EMP_DEPT nor EMP_ID alone are keys.

To convert the given table into BCNF, we decompose it into three tables:

<img src="https://user-images.githubusercontent.com/54719422/90363161-c80d3a80-e07f-11ea-85e5-9879ca2ea563.png" height="" width="">

Functional dependencies:

>EMP_ID   →    EMP_COUNTRY  
EMP_DEPT   →   {DEPT_TYPE, EMP_DEPT_NO}  

Candidate keys:

>For the first table: EMP_ID                           
For the second table: EMP_DEPT          
For the third table: {EMP_ID, EMP_DEPT}

Now, this is in BCNF because left side part of both the functional dependencies is a key.

## Joins

A SQL Join statement is used to combine data or rows from two or more tables based on a common field between them. Different types of Joins are:

<img src="https://cdn.mindmajix.com/blog/images/db-01_2119.png" height="" width="">

### 1. INNER JOIN
The INNER JOIN keyword selects all rows from both the tables as long as the condition satisfies. This keyword will create the result-set by combining all rows from both the tables where the condition satisfies i.e value of the common field will be same.

### 2. LEFT JOIN
This join returns all the rows of the table on the left side of the join and matching rows for the table on the right side of join. The rows for which there is no matching row on right side, the result-set will contain null. LEFT JOIN is also known as LEFT OUTER JOIN.

### 3. RIGHT JOIN
RIGHT JOIN is similar to LEFT JOIN. This join returns all the rows of the table on the right side of the join and matching rows for the table on the left side of join. The rows for which there is no matching row on left side, the result-set will contain null. RIGHT JOIN is also known as RIGHT OUTER JOIN.

### 4. FULL JOIN
 FULL JOIN creates the result-set by combining result of both LEFT JOIN and RIGHT JOIN. The result-set will contain all the rows from both the tables. The rows for which there is no matching, the result-set will contain NULL values.

##  Advance Database Applications
### ORDBMS
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