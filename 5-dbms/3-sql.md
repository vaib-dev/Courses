# Chapter 3- SQL
SQL (Structured Query Language) is used to perform operations on the records stored in the database such as updating records, deleting records, creating and modifying tables, views, etc.

SQL is just a query language; it is not a database. To perform SQL queries, you need to install any database, for example, Oracle, MySQL, MongoDB, PostGre SQL, SQL Server, DB2, etc.

## SQL Syntax
SQL follows some unique set of rules and guidelines called syntax. Here, we are providing all the basic SQL syntax.

SQL is not case sensitive. Generally, SQL keywords are written in uppercase. In this language statements are dependent on text lines. We can place a single SQL statement on one or multiple text lines. Through this language, you get an access to perform most of the action in a database with SQL statements. SQL depends on relational algebra and tuple relational calculus.

## SQL Commands
These are some important SQL command:

1. **SELECT**: it extracts data from a database.
2. **UPDATE**: it updates data in the database.
3. **DELETE**: it deletes data from the database.
4. **CREATE TABLE**: it creates a new table.
5. **ALTER TABLE**: it is used to modify the
  table.
6. **DROP TABLE**: it deletes a table.
7. **CREATE DATABASE**: it creates a new database.
8. **ALTER DATABASE**: It is used to modify a
 database.
9. **INSERT INTO**: it inserts new data into a 
database.
10. **CREATE INDEX**: it is used to create an index (search key).
11. **DROP INDEX**: it deletes an index.

## Components of SQL

### 1. DDL
The Data Definition Language (DDL) consist of SQL statements used to define the database structure or schema. It simply deals with descriptions of the database schema and is used to create and modify the structure of database objects in databases.

The DDL provides a set of definitions to specify the storage structure and access methods used by the database system. Commands which comes under Data Definition Language are:

a) **Create**: To create tables in the database.

b) **Alter**: Alters the structure of the database.

c) **Drop**: Delete tables from database.

d) **Truncate**: Remove all records from a table,    
also release the space occupied by those records.

### 2. DML

A Data Manipulation Language (DML) is a computer programming language used for adding (inserting), removing (deleting), and modifying (updating) data in a database. In SQL, the data manipulation language comprises the SQL-data change statements, which modify stored data but not the schema of the database table.

After the database schema has been specified and the database has been created, the data can be manipulated using a set of procedures which are expressed by DML. Commands which comes under Data Manipulation Language are:

a) **Insert**: Inserts data into a table

b) **Update**: Updates the existing data within a table.

c) **Delete**: Deletes all records from a table, but not the space occupied by them.

d) **Select**: The SELECT statement is used to query or retrieve data from a table in the database.

### 3. DCL
A Data Control Language (DCL) is a programming language used to control the access of data stored in a database. It is used for controlling privileges in the database (Authorization). The privileges are required for performing all the database operations such as creating sequences, views of tables etc Commands which come under Data Control Language are:

a) **Grant**: Grants permission to one or more users to perform specific tasks.

b) **Revoke**: Withdraws the access permission given by the GRANT statement.

## SQL Data Types
Data types are used to represent the nature of the data that can be stored in the database table. For example, in a particular column of a table, if we want to store a string type of data then we will have to declare a string data type of this column.

Data types mainly classified into three categories for every database:
### 1. String Data types:
 These are further of two types: 
 
 a) **CHAR(Size)**: It is used to specify a fixed length string that can contain numbers, letters, and special characters. Its size can be 0 to 255 characters. Default is 1.

 b) **VARCHAR(Size)**-	It is used to specify a variable length string that can contain numbers, letters, and special characters. Its size can be from 0 to 65535 characters.
### 2. Numeric Data types
 These are further of three types: 

a) **INT(size)**:	It is used for the integer value. Its signed range varies from -2147483648 to 2147483647 and unsigned range varies from 0 to 4294967295. The size parameter specifies the max display width that is 255.

b) **INTEGER(size)**:	It is equal to INT(size).

c) **FLOAT(size, d)**:	It is used to specify a floating point number. Its size parameter specifies the total number of digits. The number of digits after the decimal point is specified by d parameter.

### 3. Date and time Data types
 These are further of two types: 

a) **DATE**:	It is used to specify date      format YYYY-MM-DD. Its supported range is from '1000-01-01' to '9999-12-31'.

b) **DATETIME(fsp)**:	It is used to specify date and time combination. Its format is YYYY-MM-DD hh:mm:ss. Its supported range is from '1000-01-01 00:00:00' to 9999-12-31 23:59:59'.

## SQL statement
SQL statements are started with any of the SQL commands/keywords like SELECT, INSERT, UPDATE, DELETE, ALTER, DROP etc. and the statement ends with a semicolon (;).

### Example of SQL statement:

    SELECT "column_name" FROM "table_name";  

### Why semicolon is used after SQL statements?

A Semicolon is used to separate SQL statements. It is a standard way to separate SQL statements in a database system in which more than one SQL statements are used in the same call.


## SQL Constraints
Constraints are the rules that we can apply on the type of data in a table. That is, we can specify the limit on the type of data that can be stored in a particular column in a table using constraints. The available constraints in SQL are:

1. **NOT NULL**: This constraint tells that we cannot store a null value in a column. That is, if a column is specified as NOT NULL then we will not be able to store null in this particular column any more.
2. **UNIQUE**: This constraint when specified with a column, tells that all the values in the column must be unique. That is, the values in any row of a column must not be repeated.
3. **PRIMARY KEY**: A primary key is a field which can uniquely identify each row in a table. And this constraint is used to specify a field in a table as primary key.
4. **FOREIGN KEY**: A Foreign key is a field which can uniquely identify each row in a another table. And this constraint is used to specify a field as Foreign key.

5. **COMPOSITE KEY**: A primary key having two or more attributes is called composite key. It is a combination of two or more columns.

5. **CHECK**: This constraint helps to validate the values of a column to meet a particular condition. That is, it helps to ensure that the value stored in a column meets a specific condition.
6. **DEFAULT**: This constraint specifies a default value for the column when no value is specified by the user.

## SQL Table
SQL Table is a collection of data which is organized in terms of rows and columns. In DBMS, the table is known as relation and row as a tuple.
Table is a simple form of data storage. A table is also considered as a convenient representation of relations.Operations on Table:
### 1. Create table
SQL create table is used to create a table in the database. To define the table, you should define the name of the table and also define its columns and column's data type. Syntax:

    create table "table_name"    
    ("column1" "data type",    
    "column2" "data type",    
    "column3" "data type",    
    ...    
    "columnN" "data type");   

### 2. Drop table
A SQL drop table is used to delete a table definition and all the data from a table. When this command is executed, all the information available in the table is lost forever, so you have to very careful while using this command. Syntax:

    DROP TABLE "table_name";
### 3. Delete table
In SQL, DELETE statement is used to delete rows from a table. We can use WHERE condition to delete a specific row from a table. If you want to delete all the records from the table, then you don't need to use the WHERE clause. Syntax:

    DELETE FROM table_name WHERE condition;  

### 4. Rename table
In SQL, Rename table is used to rename an old row name to a new name. Firstle we have to use ALTER command which enables us to edit a table without changing the data present inside the table. Syntax:

    ALTER TABLE table_name RENAME TO new_table_name;

## SQL Index
Indexes are special lookup tables. It is used to retrieve data from the database very fast.
An Index is used to speed up select queries and where clauses. But it shows down the data input with insert and update statements. Indexes can be created or dropped without affecting the data.
An index in a database is just like an index in the back of a book. For example, When you reference all pages in a book that discusses a certain topic, you first have to refer to the index, which alphabetically lists all the topics and then referred to one or more specific page numbers.

### 1. Create Index statement
It is used to create an index on a table. It allows duplicate value. Syntax:

    CREATE INDEX index_name  
    ON table_name (column1, column2, ...);  

### 2. Unique Index statement
It is used to create a unique index on a table. It does not allow duplicate value. Syntax:

    CREATE UNIQUE INDEX index_name  
    ON table_name (column1, column2, ...);      

### 3. Drop Index Statement
It is used to delete an index in a table. Syntax:

    DROP INDEX index_name;      

## SQL Joins
1. **INNER JOIN**: The INNER JOIN keyword selects all rows from both the tables as long as the condition satisfies. This keyword will create the result-set by combining all rows from both the tables where the condition satisfies i.e value of the common field will be same. Syntax:

       SELECT table1.column1,table1.column2,table2.  column1,...
       FROM table1 
       INNER JOIN table2
       ON table1.matching_column = table2.  matching_column;

   <img src="https://blog.codinghorror.com/content/images/uploads/2007/10/6a0120a85dcdae970b012877702708970c-pi.png" height="" width="">

2. **LEFT JOIN**: This join returns all the rows of the table on the left side of the join and matching rows for the table on the right side of join. The rows for which there is no matching row on right side, the result-set will contain null. LEFT JOIN is also known as LEFT OUTER JOIN. Syntax:

       SELECT table1.column1,table1.column2,table2.column1,... FROM table1 
       LEFT JOIN table2
       ON table1.matching_column = table2.matching_column;

    <img src="https://i.stack.imgur.com/VkAT5.png" height="" width="">

3. **RIGHT JOIN**: RIGHT JOIN is similar to LEFT JOIN. This join returns all the rows of the table on the right side of the join and matching rows for the table on the left side of join. The rows for which there is no matching row on left side, the result-set will contain null. RIGHT JOIN is also known as RIGHT OUTER JOIN. Syntax:
      
       SELECT table1.column1,table1.column2,table2.column1,... FROM table1
       RIGHT JOIN table2
       ON table1.matching_column = table2.matching_column;

   <img src="https://user-images.githubusercontent.com/54719422/90247919-36ba8000-de55-11ea-80cb-10c15ae668e2.png" height="" width="">

4. **FULL JOIN**: FULL JOIN creates the result-set by combining result of both LEFT JOIN and RIGHT JOIN. The result-set will contain all the rows from both the tables. The rows for which there is no matching, the result-set will contain NULL values.Syntax:

       SELECT table1.column1,table1.column2,table2.column1,...FROM table1 FULL JOIN table2
       ON table1.matching_column = table2.matching_column;
 
    <img src="https://user-images.githubusercontent.com/54719422/90247885-273b3700-de55-11ea-9e2e-9151776b78bb.png" height="" width="">

## SQL Set Operation
The SQL Set operation is used to combine the two or more SQL SELECT statements.

Types of Set Operation
### 1. Union
The SQL Union operation is used to combine the result of two or more SQL SELECT queries.
In the union operation, all the number of datatype and columns must be same in both the tables on which UNION operation is being applied.
The union operation eliminates the duplicate rows from its result.Syntax:

    SELECT column_name FROM table1  
    UNION  
    SELECT column_name FROM table2;  

### 2. UnionAll

Union All operation is equal to the Union operation. It returns the set without removing duplication and sorting the data. Syntax:

    SELECT column_name FROM table1  
    UNION ALL  
    SELECT column_name FROM table2;  

### 3. Intersect

It is used to combine two SELECT statements. The Intersect operation returns the common rows from both the SELECT statements. In the Intersect operation, the number of datatype and columns must be the same. It has no duplicates and it arranges the data in ascending order by default. Syntax:

    SELECT column_name FROM table1  
    INTERSECT  
    SELECT column_name FROM table2; 

### 4. Minus    

It combines the result of two SELECT statements. Minus operator is used to display the rows which are present in the first query but absent in the second query.
It has no duplicates and data arranged in ascending order by default. Syntax:

    SELECT column_name FROM table1  
    MINUS  
    SELECT column_name FROM table2;  

## Summary

This chapter gives you an overview of SQL language. We have discussed SQL commands, its syntax, components, data types and constraints. Later we discussed about SQL index and SQL set operations.

The next chapter will be about Database Architecture.

![Chapter-1](https://img.shields.io/static/v1?label=Finished&message=SQL&color=green) ![Chapter-1](https://img.shields.io/static/v1?label=Source&message=www.javatpoint.com&color=blue)![Chapter-1](https://img.shields.io/static/v1?label=PRs&message=Welcome&color=yellow)

