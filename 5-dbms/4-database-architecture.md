# Database Architecture
The DBMS design depends upon its architecture. The basic client/server architecture is used to deal with a large number of PCs, web servers, database servers and other components that are connected with networks.
The client/server architecture consists of many PCs and a workstation which are connected via the network.
DBMS architecture depends upon how users are connected to the database to get their request done.


<img src="https://static.javatpoint.com/dbms/images/dbms-architecture.png" height="" width="">

1. **1-Tier Architecture**: In this architecture, the database is directly available to the user. It means the user can directly sit on the DBMS and uses it.
2. **2-Tier Architecture**: The 2-Tier architecture is same as basic client-server. In the two-tier architecture, applications on the client end can directly communicate with the database at the server side. For this interaction, API's like: ODBC, JDBC are used.
3. **3-Tier Architecture**: The 3-Tier architecture contains another layer between the client and server. In this architecture, client can't directly communicate with the server.

## Three Schema Architecture
_The three schema architecture is also called ANSI/SPARC architecture or three-level architecture._ This framework is used to describe the structure of a specific database system. The three schema architecture is also used to separate the user applications and physical database.

<img src="https://static.javatpoint.com/dbms/images/dbms-three-schema-architecture.png" height="" width="">

### 1. Internal Level
The internal level has an internal schema which describes the physical storage structure of the database. *The internal schema is also known as a physical schema as it uses the physical data model.* It is used to define that how the data will be stored in a block. The physical level is used to describe complex low-level data structures in detail.
### 2. Conceptual Level
The conceptual schema describes the design of a database at the conceptual level. *Conceptual level is also known as logical level.* The conceptual schema describes the structure of the whole database.
This level describes what data are to be stored in the database and also describes what relationship exists among those data. In this level, internal details such as an implementation of the data structure are hidden.
Programmers and database administrators work at this level.
### 3. External Level
At the external level, a database contains several schemas that sometimes called as subschema. The subschema is used to describe the different view of the database. *An external schema is also known as view schema.* Each view schema describes the database part that a particular user group is interested and hides the remaining database from that user group.
The view schema describes the end user interaction with database systems. 

## Database Storage
We know that data is stored in the form of records. But suppose if a have a very huge amount of data and we need to access it, it becomes very difficlt to find the exact data and it also takes a lot of time. So, to resolve this problem we can store data in two methods as follows:

### 1. Indexing
Indexing is a data structure technique to efficiently retrieve records from the database files based on some attributes on which the indexing has been done. Indexing in database systems is similar to what we see in books. Indexing is defined based on its indexing attributes. Indexing can be of the following types −

**Primary Index** − Primary index is defined on an ordered data file. The data file is ordered on a key field. The key field is generally the primary key of the relation.

**Secondary Index** − Secondary index may be generated from a field which is a candidate key and has a unique value in every record, or a non-key with duplicate values.

**Clustering Index** − Clustering index is defined on an ordered data file. The data file is ordered on a non-key field.

Ordered Indexing is of three types −

**Dense Index**: In dense index, there is an index record for every search key value in the database. This makes searching faster but requires more space to store index records itself. Index records contain search key value and a pointer to the actual record on the disk.

<img src=https://www.tutorialspoint.com/dbms/images/dense_index.png height="" width="">

**Sparse Index**: In sparse index, index records are not created for every search key. An index record here contains a search key and an actual pointer to the data on the disk. To search a record, we first proceed by index record and reach at the actual location of the data. If the data we are looking for is not where we directly reach by following the index, then the system starts sequential search until the desired data is found.

<img src=https://www.tutorialspoint.com/dbms/images/sparse_index.png height="" width="">


**Multi-level Index or B^+ Index**: Index records comprise search-key values and data pointers. Multilevel index is stored on the disk along with the actual database files. As the size of the database grows, so does the size of the indices. There is an immense need to keep the index records in the main memory so as to speed up the search operations. If single-level index is used, then a large size index cannot be kept in memory which leads to multiple disk accesses.


<img src=https://www.tutorialspoint.com/dbms/images/multi_level_index.png height="" width="">