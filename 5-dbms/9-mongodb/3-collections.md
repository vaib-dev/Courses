# Chapter - 4 Collections

In MongoDB, the first basic step is to have a database and collection in place. The database is used to store all of the collections, and the collection in turn is used to store all of the documents. The documents in turn will contain the relevant Field Name and Field values.

So, now we have understood that we have to make a database before making a collection. 

## Database
We can perform two operations on database as follow:

### 1. Create Database
In MongoDB we use **use DATABASE_NAME** is used to create database. The command will create a new database if it doesn't exist, otherwise it will return the existing database.

**Syntax**:\
Basic syntax of use DATABASE statement is as follows:

    use database_name

**Example**: If you want to use a database with name <shopdb>, then use DATABASE statement would be as follows:

>use shopdb
switched to db shopdb

**To check your currently selected database**: use the command db

>db
shopdb

**If you want to check your databases list**: use the command show dbs.

>show dbs\
local     0.78125GB\
test      0.23012GB\

**Note**:Your created database (shopdb) is not present in list. To display database, you need to insert at least one document into it.

### 2. Drop Database

In mongoDB db.dropDatabase() command is used to drop a existing database.

**Syntax**: Basic syntax of dropDatabase() command is as follows:

    db.dropDatabase()

This will delete the selected database. If you have not selected any database, then it will delete default 'test' database.

**Example**:
First, check the list of available databases by using the command **show dbs**.

>show dbs\
local      0.78125GB\
shopdb       0.23012GB\
test       0.23012GB

> If you want to delete new database <shopdb>, then dropDatabase() command would be as follows:

>use shopdb\
switched to db shopdb\
>db.dropDatabase()

>{ "dropped" : "shopdb", "ok" : 1 }

>Now check list of databases.

>show dbs\
local      0.78125GB\
test       0.23012GB

The database is now deleted successfully.


## Creating Collections

MongoDB db.createCollection(name, options) is used to create collection.

**Syntax**: Basic syntax of createCollection() command is as follows:

    db.createCollection(name, options)

In the command, name is name of collection to be created. Options is a document and is used to specify configuration of collection.

<img src="https://user-images.githubusercontent.com/54719422/91653711-b6388800-eac0-11ea-9335-59b8dc7137fa.png" height="" width="">

Options parameter is optional, so you need to specify only the name of the collection. Following is the list of options you can use as shown:

<img src="https://user-images.githubusercontent.com/54719422/91653771-28a96800-eac1-11ea-9056-efe10f48190a.png" height="" width="">

**Examples**: Basic syntax of createCollection() method without options is as follows:

>use test\
switched to db test\
>db.createCollection("mycollection")\
{ "ok" : 1 }


You can check the created collection by using the command show collections.

>show collections\
mycollection\
system.indexes

## Practical 
Now from above we have learned and understood the operations of database and collections. Now it's time to implement them on your system. As by implementing these commands the concept will get more clear and will be saved in the memory for a long period of time.
