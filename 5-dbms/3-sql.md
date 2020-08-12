# Chapter 3- SQL
SQL (Structured Query Language) is used to perform operations on the records stored in the database such as updating records, deleting records, creating and modifying tables, views, etc.

SQL is just a query language; it is not a database. To perform SQL queries, you need to install any database, for example, Oracle, MySQL, MongoDB, PostGre SQL, SQL Server, DB2, etc.

## SQL Syntax
SQL follows some unique set of rules and guidelines called syntax. Here, we are providing all the basic SQL syntax.

SQL is not case sensitive. Generally, SQL keywords are written in uppercase. In this language statements are dependent on text lines. We can place a single SQL statement on one or multiple text lines. Through this language, you get an access to perform most of the action in a database with SQL statements. SQL depends on relational algebra and tuple relational calculus.
## SQL statement
SQL statements are started with any of the SQL commands/keywords like SELECT, INSERT, UPDATE, DELETE, ALTER, DROP etc. and the statement ends with a semicolon (;).

### Example of SQL statement:

    SELECT "column_name" FROM "table_name";  

### Why semicolon is used after SQL statements:

A Semicolon is used to separate SQL statements. It is a standard way to separate SQL statements in a database system in which more than one SQL statements are used in the same call.

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

## SQL Data Types
Data types are used to represent the nature of the data that can be stored in the database table. For example, in a particular column of a table, if we want to store a string type of data then we will have to declare a string data type of this column.

Data types mainly classified into three categories for every database.

* String Data types
* Numeric Data types
* Date and time Data types


## SQL Operators
SQL statements generally contain some reserved words or characters that are used to perform operations such as comparison and arithmetical operations etc. These reserved words or characters are known as operators.

Generally there are three types of operators in SQL:

1. SQL Arithmetic Operators

| Operators | Descriptions| Examples|
|-----------|-------------------------------------------------------------------------|--------------------|
| Add(+)            | It is used to add containing values of both operands                    | a+b will give 150  |
| Subtract(-)            | It subtracts right hand operand from left hand operand | a-b will give -50  |
| Multiply(*)            | It multiply both operand's values | a*b will give 5000 |
| Divide(/)            | It divides left hand operand by right hand operand | b/a will give 2    |
| Modulus(%)            | It divides left hand operand by right hand operand and returns reminder | b%a will give 0    |

2. SQL Comparison Operators

Let's take two variables "a" and "b" that are valued 50 and 100.

| Operator | Description                                                                                                                        | Example            |
|----------|------------------------------------------------------------------------------------------------------------------------------------|--------------------|
| =        | Examine both operands value that are equal or not,if yes condition become true.                                                    | (a=b) is not true  |
| !=       | This is used to check the value of both operands equal or not,if not condition become true.                                        | (a!=b) is true     |
| < >      | Examines the operand's value equal or not, if values are not equal condition is true                                               | (a<>b) is true     |
| >        | Examine the left operand value is greater than right Operand, if yes condition becomes true                                        | (a>b) is not true  |
| <        | Examines the left operand value is less than right Operand, if yes condition becomes true                                          | (a<b) is true                 |
| >=       | Examines that the value of left operand is greater than or equal to the value of right operand or not,if yes condition become true | (a>=b) is not true |
| <=       | Examines that the value of left operand is less than or equal to the value of right operand or not, if yes condition becomes true  | (a<=b) is true     |
| !<       | Examines that the left operand value is not less than the right operand value                                                      | (a!<b) is not true                |
| !>       | Examines that the value of left operand is not greater than the value of right operand                                             | (a!>b) is true     |

3. SQL Logical Operators