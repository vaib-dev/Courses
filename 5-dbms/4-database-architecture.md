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


**Multi-level Index**: Index records comprise search-key values and data pointers. Multilevel index is stored on the disk along with the actual database files. As the size of the database grows, so does the size of the indices. There is an immense need to keep the index records in the main memory so as to speed up the search operations. If single-level index is used, then a large size index cannot be kept in memory which leads to multiple disk accesses.


<img src=https://www.tutorialspoint.com/dbms/images/multi_level_index.png height="" width="">

## Data Backup
The purpose of the backup is to create a copy of data that can be recovered in the event of a primary data failure. Primary data failures can be the result of hardware or software failure, data corruption, or a human-caused event, such as a malicious attack (virus or malware), or accidental deletion of data.
### 1.Full backups
The most basic and complete type of backup operation is a full backup. As the name implies, this type of backup makes a copy of all data to another set of media, such as a disk or tape. The primary advantage to performing a full backup during every operation is that a complete copy of all data is available with a single set of media. This results in a minimal time to restore data, a metric known as a recovery time objective. However, the disadvantages are that it takes longer to perform a full backup than other types (sometimes by a factor of 10 or more), and it requires more storage space.

Thus, full backups are typically run only periodically. Data centers that have a small amount of data (or critical applications) may choose to run a full backup daily, or even more often in some cases. Typically, backup operations employ a full backup in combination with either incremental or differential backups.

<img src="https://www.nakivo.com/blog/wp-content/uploads/2017/11/full-backup.png" height="" width="">

### 2.Incremental backups
An incremental backup operation will result in copying only the data that has changed since the last backup operation of any type. An organization typically uses the modified time stamp on files and compares it to the time stamp of the last backup. Backup applications track and record the date and time that backup operations occur in order to track files modified since these operations.

Because an incremental backup will only copy data since the last backup of any type, an organization may run it as often as desired, with only the most recent changes stored. The benefit of an incremental backup is that it copies a smaller amount of data than a full.Thus, these operations will complete faster, and require less media to store the backup.

<img src="https://www.nakivo.com/blog/wp-content/uploads/2017/11/incremental-backup.png" height="" width="">

### 3.Differential backups
A differential backup operation is similar to an incremental the first time it is performed, in that it will copy all data changed from the previous backup. However, each time it is run afterwards, it will continue to copy all data changed since the previous full backup. Thus, it will store more data than an incremental on subsequent operations, although typically far less than a full backup. Moreover, differential backups require more space and time to complete than incremental backups, although less than full backups.

<img src="https://www.handybackup.net/images/features/differential-backup-scheme.png" height="" width="">