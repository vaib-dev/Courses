# Chapter 1 - Introduction

**E.F. Codd** invented the database in 1970. A database is an organized collection of data that it can be easily accessed and managed. You can organize data into tables, rows, columns, and index it to make it easier to find relevant information. Database handlers create a database in such a way that only one set of software program provide access of data to all the users.

The main purpose of the database is to operate a large amount of information by storing, retrieving, and managing data.

### Types of Database
There are mainly seven types of database that are discussed and shown below:

<img src="https://static.javatpoint.com/dbms/images/types-of-databases.png" height="" width="">

1) **Centralized Database**: It is the type of database that stores data at a centralized database system. It comforts the users to access the stored data from different locations through several applications. Example of a Centralized database can be Central Library that carries a central database of each library in a college/university.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20200501155803/Capturecentraldb.png" height="" width="">

2) **Distributed Database(DDB)**: Unlike a centralized database system, in distributed systems, data is distributed among different database systems of an organization. These database systems are connected via communication links. Such links help the end-users to access the data easily. Examples of the Distributed database are Apache Cassandra, HBase, Ignite, etc.

<img src="https://docs.oracle.com/html/E25494_01/img/admin046.png" height="" width="">

3) **NoSQL Database**: Non-SQL/Not Only SQL is a type of database that is used for storing a wide range of data sets. It is not a relational database as it stores data not only in tabular form but in several different ways. It came into existence when the demand for building modern applications increased.

<img src="https://www.guru99.com/images/1/101818_0537_NoSQLTutori1.png" height="" width="">

4) **Relational Database**: This database is based on the relational data model, which stores data in the form of rows(tuple) and columns(attributes), and together forms a table(relation). A relational database uses SQL for storing, manipulating, as well as maintaining the data. Each table in the database carries a key that makes the data unique from others. Examples of Relational databases are MySQL, Microsoft SQL Server, Oracle, etc.

<img src="https://www.slideteam.net/media/catalog/product/cache/960x720/e/m/employee_competency_assessment_table_data_analysis_data_analysis_ppt_powerpoint_presentation_summary_designs_slide01.jpg" height="" width="">

5) **Network Databases**: It is the database that typically follows the network data model. Here, the representation of data is in the form of nodes connected via links between them. Unlike the hierarchical database, it allows each record to have multiple children and parent nodes to form a generalized graph structure.

<img src="https://miro.medium.com/max/2214/1*ZuDEekCV_ScCSLSS8rT17g.png" height="" width="">

6) **Object-oriented Databases**: The type of database that uses the object-based data model approach for storing data in the database system. The data is represented and stored as objects which are similar to the objects used in the object-oriented programming language.

<img src="https://www.oreilly.com/library/view/hands-on-big-data/9781788620901/assets/593c262a-15ee-4277-91ea-1eb60be153a6.png" height="" width="">

7) **Hierarchical Databases**: It is the type of database that stores data in the form of parent-children relationship nodes. Here, it organizes data in a tree-like structure.

<img src="https://image2.slideserve.com/4935970/hierarchical-database-model-n.jpg" height="" width="">

## Importance and Applications

1. **Manages large amounts of data**: A database stores and manages a large amount of data on a daily basis. This would not be possible using any other tool such as a spreadsheet as they would simply not work.

2. **Easy to update data**: In a database, it is easy to update data using various Data Manipulation languages (DML) available. One of these languages is SQL.

3. **Security of data**: Databases have various methods to ensure the security of data. There are user logins required before accessing a database and various access specifiers. These allow only authorized users to access the database.

4. **Data integrity**: This is ensured in databases by using various constraints for data. Data integrity in databases makes sure that the data is accurate and consistent in a database.

5) **Cloud Database**: A type of database where data is stored in a virtual environment and executes over the cloud computing platform. It provides users with various cloud computing services (Software as a Service(SaaS), Platform as a Service(PaaS), Infrastructure as a service (IaaS), etc.) for accessing the database.
## Database Management System
The Database management system is a software which is used to manage the database. For example: MySQL, Oracle, etc are a very popular commercial database which is used in different applications. DBMS provides an interface to perform various operations like database creation, storing data in it, updating data, creating a table in the database and a lot more.
It provides protection and security to the database. In the case of multiple users, it also maintains data consistency.

### DBMS allows users the following tasks:

1. **Data Definition**: It is used for creation, modification, and removal of the definition that defines the organization of data in the database.
2. **Data Updation**: It is used for the insertion, modification, and deletion of the actual data in the database.
3. **Data Retrieval**: It is used to retrieve the data from the database which can be used by applications for various purposes.
4. **User Administration**: It is used for registering and monitoring users, maintain data integrity, enforcing data security, dealing with concurrency control, monitoring performance and recovering information corrupted by unexpected failure.

### Advantages of DBMS

1. **Controls database redundancy**: It can control data redundancy because it stores all the data in one single database file and that recorded data is placed in the database.
2. **Data sharing**: In DBMS, the authorized users of an organization can share the data among multiple users.
3. **Easily Maintenance**: It can be easily maintainable due to the centralized nature of the database system.
4. **Reduce time**: It reduces development time.
5. **Backup**: It provides backup and recovery subsystems which create automatic backup of data from hardware and software failures and restores the data if required.

## Summary

In this chapter, we have discussed the database, its types and importance of database. Then we had a brief introduction to Database Management System(DBMS) and its advantages.

In the next chapter we will start with Data Modeling.

 ![Chapter-1](https://img.shields.io/static/v1?label=Finished&message=Introduction&color=green) ![Chapter-1](https://img.shields.io/static/v1?label=Source&message=www.javatpoint.com&color=blue)![Chapter-1](https://img.shields.io/static/v1?label=PRs&message=Welcome&color=yellow)
