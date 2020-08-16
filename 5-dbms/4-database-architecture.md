# Chapter 4- Database Architecture
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

**Clustering Index** − Clustering index is defined on an ordered data file. The data file is ordered on a non-key field. Ordered Indexing is of three types −

**a) Dense Index**: In dense index, there is an index record for every search key value in the database. This makes searching faster but requires more space to store index records itself. Index records contain search key value and a pointer to the actual record on the disk.

<img src=https://www.tutorialspoint.com/dbms/images/dense_index.png height="" width="">

**b) Sparse Index**: In sparse index, index records are not created for every search key. An index record here contains a search key and an actual pointer to the data on the disk. To search a record, we first proceed by index record and reach at the actual location of the data. If the data we are looking for is not where we directly reach by following the index, then the system starts sequential search until the desired data is found.

<img src=https://www.tutorialspoint.com/dbms/images/sparse_index.png height="" width="">


**c) Multi-level Index**: Index records comprise search-key values and data pointers. Multilevel index is stored on the disk along with the actual database files. As the size of the database grows, so does the size of the indices. There is an immense need to keep the index records in the main memory so as to speed up the search operations. If single-level index is used, then a large size index cannot be kept in memory which leads to multiple disk accesses.


<img src=https://www.tutorialspoint.com/dbms/images/multi_level_index.png height="" width="">

### 2. Hashing

In a huge database structure, it is very inefficient to search all the index values and reach the desired data. Hashing technique is used to calculate the direct location of a data record on the disk without using index structure. In this technique, data is stored at the data blocks whose address is generated by using the hashing function. The memory location where these records are stored is known as data bucket or data blocks. 

In this, a hash function can choose any of the column value to generate the address. Most of the time, the hash function uses the primary key to generate the address of the data block. A hash function is a simple mathematical function to any complex mathematical function. We can even consider the primary key itself as the address of the data block. That means each row whose address will be the same as a primary key stored in the data block. There are two main words used in hashing these are as follow:

a) **Bucket** − A hash file stores data in bucket format. Bucket is considered a unit of storage. A bucket typically stores one complete disk block, which in turn can store one or more records.

b) **Hash Function** − A hash function (h), is a mapping function that maps all the set of search-keys (K) to the address where actual records are placed. It is a function from search keys to bucket addresses.

<img src="https://static.javatpoint.com/dbms/images/dbms-hashing_2.png" height="" width="">

## Data Backup
The purpose of the backup is to create a copy of data that can be recovered in the event of a primary data failure. Primary data failures can be the result of hardware or software failure, data corruption, or a human-caused event, such as a malicious attack (virus or malware), or accidental deletion of data.
### 1. Full backups
The most basic and complete type of backup operation is a full backup. As the name implies, this type of backup makes a copy of all data to another set of media, such as a disk or tape. The primary advantage to performing a full backup during every operation is that a complete copy of all data is available with a single set of media. This results in a minimal time to restore data, a metric known as a recovery time objective. However, the disadvantages are that it takes longer to perform a full backup than other types (sometimes by a factor of 10 or more), and it requires more storage space.

Thus, full backups are typically run only periodically. Data centers that have a small amount of data (or critical applications) may choose to run a full backup daily, or even more often in some cases. Typically, backup operations employ a full backup in combination with either incremental or differential backups.

<img src="https://www.nakivo.com/blog/wp-content/uploads/2017/11/full-backup.png" height="" width="">

### 2. Incremental backups
An incremental backup operation will result in copying only the data that has changed since the last backup operation of any type. An organization typically uses the modified time stamp on files and compares it to the time stamp of the last backup. Backup applications track and record the date and time that backup operations occur in order to track files modified since these operations.

Because an incremental backup will only copy data since the last backup of any type, an organization may run it as often as desired, with only the most recent changes stored. The benefit of an incremental backup is that it copies a smaller amount of data than a full.Thus, these operations will complete faster, and require less media to store the backup.

<img src="https://www.nakivo.com/blog/wp-content/uploads/2017/11/incremental-backup.png" height="" width="">

### 3. Differential backups
A differential backup operation is similar to an incremental the first time it is performed, in that it will copy all data changed from the previous backup. However, each time it is run later, it will continue to copy all data changed since the previous full backup. Thus, it will store more data than an incremental on subsequent operations, although typically far less than a full backup. Moreover, differential backups require more space and time to complete than incremental backups, although less than full backups.

<img src="https://www.handybackup.net/images/features/differential-backup-scheme.png" height="" width="">

## Database Transaction Handling
A transaction is a single logical unit of work which accesses and possibly modifies the contents of a database. Transactions access data using read and write operations. In order to maintain consistency in a database, before and after the transaction, certain properties are followed known as **ACID** properties.

### Acid Properties

 ACID is an abbreviation for Atomicity, Consistency, Isolation, and Durability which are properties to maintain data consistency. Transactions are a set of SQL statements used to modify the data in the database. Transactions perform read and write operations on the database. To maintain the consistency in data we use ACID properties as explained below.

<img src="https://2s7gjr373w3x22jf92z99mgm5w-wpengine.netdna-ssl.com/wp-content/uploads/2018/06/acid.png" height="" width="">

**Atomicity**: It means that either the entire transaction takes place at once or doesn’t happen at all. There is no midway i.e. transactions do not occur partially. Each transaction is considered as one unit and either runs to completion or is not executed at all.

**Consistency**: This means that integrity constraints must be maintained so that the database is consistent before and after the transaction. It refers to the correctness of a database.

**Isolation**: This property ensures that multiple transactions can occur concurrently without leading to the inconsistency of database state. Transactions occur independently without interference. Changes occurring in a particular transaction will not be visible to any other transaction until that particular change in that transaction is written to memory or has been committed. This property ensures that the execution of transactions concurrently will result in a state that is equivalent to a state achieved these were executed serially in some order.

**Durability**: This property ensures that once the transaction has completed execution, the updates and modifications to the database are stored in and written to disk and they persist even if a system failure occurs. These updates now become permanent and are stored in non-volatile memory. The effects of the transaction, thus, are never lost.

>The ACID properties, in totality, provide a mechanism to ensure correctness and consistency of a database in a way such that each transaction is a group of operations that acts a single unit, produces consistent results, acts in isolation from other operations and updates that it makes are durably stored.

### Transaction States in DBMS
States through which a transaction goes during its lifetime. These are the states which tell about the current state of the Transaction and also tell how we will further do processing we will do on the transactions. These states govern the rules which decide the fate of the transaction whether it will commit or abort.

<img src="https://www.tutorialspoint.com/dbms/images/transaction_states.png" height="" width="">

1. **Active State**: When the instructions of the transaction is running then the transaction is in active state. If all the read and write operations are performed without any error then it goes to “partially committed state”, if any instruction fails it goes to “failed state”.
2. **Partially Committed**: After completion of all the read and write operation the changes are made in main memory or local buffer. If the the changes are made permanent on the Data Base then state will change to “committed state” and in case of failure it will go to “failed state”.

3. **Failed State**: When any instruction of the transaction fails it goes to “failed state” or if failure occurs in making permanent change of data on Data Base.
4. **Aborted State**: After having any type of failure the transaction goes from “failed state” to “aborted state” and in before states the changes are only made to local buffer or main memory and hence these changes are deleted or rollback.
5. **Committed Stage**: It is the stage when the changes are made permanent on the Data Base and transaction is complete and therefore terminated in “terminated state”.
6. **Terminated State**: If there is any roll back or the transaction come from “committed state” then the system is consistent and ready for new transaction and the old transaction is terminated.


## Deadlock

Deadlock is a situation where a set of processes are blocked because each process is holding a resource and waiting for another resource acquired by some other process. To handle a deadlock situation we have three different scenarios as follow:

<img src="https://user-images.githubusercontent.com/54719422/90315369-a3f31180-df38-11ea-9213-d8f4618fd74a.png" height="" width="">

### Deadlock Avoidance 

When a database is stuck in a deadlock, It is always better to avoid the deadlock rather than restarting or aborting the database. Deadlock avoidance method is suitable for smaller database whereas deadlock prevention method is suitable for larger database.
One method of avoiding deadlock is using application consistent logic.  Another method for avoiding deadlock is to apply both row level locking mechanism and READ COMMITTED isolation level. However, It does not guarantee to remove deadlocks completely.

### Deadlock Detection 
When a transaction waits indefinately to obtain a lock, The database managememt system should detect whether the transaction is involved in a deadlock or not. 

Wait-for-graph is one of the methods for detecting the deadlock situation. This method is suitable for smaller database. In this method a graph is drawn based on the transaction and their lock on the resource. If the graph created has a closed loop or a cycle, then there is a deadlock.

### Deadlock prevention
For large database, deadlock prevention method is suitable. A deadlock can be prevented if the resources are allocated in such a way that deadlock never occur. The DBMS analyzes the operations whether they can create deadlock situation or not, If they do, that transaction is never allowed to be executed.

Deadlock prevention mechanism proposes two schemes:

**Wait-Die Scheme**: In this scheme, If a transaction request for a resource that is locked by other transaction, then the DBMS simply checks the timestamp of both transactions and allows the older transaction to wait until the resource is available for execution.

**Wound-Wait Scheme**: In this scheme, if older transactions requests for a resource held by younger transaction, then older transaction forces younger transaction to kill the transaction and release the resource. The younger transaction is restarted with minute delay but with same timestamp. If the younger transaction is requesting a resource which is held by older one, then younger transaction is asked to wait till older releases it.

## Concurrent modifications

Several applications or users often need to share the same data source. This sharing can lead to problems if they try to access a record concurrently, that is, if they try to process the same data source record at the same time. To ensure the integrity of a data source, concurrent transactions must execute as if they were isolated from each other. The changes of one transaction to a data source must be concealed from all other transactions until that transaction is committed. To do otherwise, runs the risk of open transactions being exposed to interim inconsistent images of the data source, and consequently, corrupting the data source.

To prevent users from corrupting the data in this way, the database management system (DBMS) must coordinate concurrent access. The concurrency control protocol can be divided into three categories:

1. **Lock based protocol**: Lock-based Protocols
Database systems equipped with lock-based protocols use a mechanism by which any transaction cannot read or write data until it acquires an appropriate lock on it. There are four types of lock protocols available:

   a) Simplistic Lock Protocol: These protocols allow transactions to obtain a lock on every object before a 'write' operation is performed. Transactions may unlock the data item after completing the ‘write’ operation.

   b) Pre-claiming Lock Protocol: These protocols evaluate their operations and create a list of data items on which they need locks. Before initiating an execution, the transaction requests the system for all the locks it needs beforehand. If all the locks are granted, the transaction executes and releases all the locks when all its operations are over. If all the locks are not granted, the transaction rolls back and waits until all the locks are granted.
   
   c) Two-Phase Locking 2PL: This locking protocol divides the execution phase of a transaction into three parts. In the first part, when the transaction starts executing, it seeks permission for the locks it requires. The second part is where the transaction acquires all the locks. As soon as the transaction releases its first lock, the third phase starts. In this phase, the transaction cannot demand any new locks; it only releases the acquired locks. Two-phase locking has two phases, one is *growing*, where all the locks are being acquired by the transaction; and the second phase is *shrinking*, where the locks held by the transaction are being released.

    d) Strict Two-Phase Locking: The first phase of Strict-2PL is same as 2PL. After acquiring all the locks in the first phase, the transaction continues to execute normally. But in contrast to 2PL, Strict-2PL does not release a lock after using it. Strict-2PL holds all the locks until the commit point and releases all the locks at a time. 


2. **Time-stamp protocol**: Timestamp-based Protocols
The most commonly used concurrency protocol is the timestamp based protocol. This protocol uses either system time or logical counter as a timestamp. Every transaction has a timestamp associated with it, and the ordering is determined by the age of the transaction. A transaction created at 0002 clock time would be older than all other transactions that come after it.

3. **Validation based protocol**: The timestamp-ordering protocol ensures serializability(it is the classical concurrency scheme. It ensures that a schedule for executing concurrent transactions is equivalent to one that executes the transactions serially in some order) among transactions in their conflicting read and write operations. This is the responsibility of the protocol system that the conflicting pair of tasks should be executed according to the timestamp values of the transactions.

## Summary

We learned about the Database Architecture. It includes Design Phases like Conceptual Design, Logical Design, Physical Design. Then we discussed about Database Storages, Database Backup, Database Transaction Handling. 

In the upcoming chapter we will start with Relational Database Management System(RDBMS).
