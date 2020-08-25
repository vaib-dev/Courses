# Chapter - 7 ORDBMS
An object-relational database management system (ORDBMS) is a database management system with that is similar to a relational database, except that it has an object-oriented database model. This system supports objects, classes and inheritance in database schemas and query language.

<img src="https://1.bp.blogspot.com/-nKW9boFHquA/VD_luiDggfI/AAAAAAAABLU/avo9JLWYHtI/s1600/ordbms.jpg" height="" width="">

Object-relational database management systems provide a middle ground between relational and object-oriented databases. In an ORDBMS, data is manipulated using queries in a query language. These systems bridge the gap between conceptual data modeling techniques such as entity-relationship diagrams and object-relational mapping using classes and inheritance. ORDBMS is also support data model extensions with custom data types and methods. This allows developers to raise the abstraction levels at which problem domains are viewed.

## Row & Reference type

The %ROWTYPE attribute provides a record type that represents a row in a database table. The record can store an entire row of data selected from the table or fetched from a cursor or cursor variable. Variables declared using %ROWTYPE are treated like those declared using a datatype name.

A reference type specification defines a pointer: its value is a value that references some site. A site either does or does not have a REF value. For example, this REF specification defines a reference type based on a UDT called my_udt:

    REF(my_udt)

 The value in a REF coloumn “refers” to a row in a Base table that has the  REF value property (this is a known as a typed table). The row that the REF value points to contains a value of the UDT that the REF Column is based on.

## User-Defined types
 In object-relational database management system (ORDBMS), User-Defined types means that users can define additional kinds of data--specifying both the structure of the data and the ways of operating on it--and use these types within the relational model. This approach adds value to the data stored in a database. User-defined data-types make it easier for application developers to work with complex data such as images, audio, and video. Object types store structured business data in its natural form and allow applications to retrieve it that way. For that reason, they work efficiently with applications developed using object-oriented programming techniques. The Objects option adds two categories of user-defined data-types:

### 1. Object types
 An object type is a schema object with three kinds of components:

1. **Name**: which serves to identify the object type uniquely within that schema.
2. **Attributes**: which model the structure and state of the real-world entity. Attributes are built-in types or other user-defined types.
3. **Methods**: which are functions or procedures written in PL/SQL or Java and stored in the database, or written in a language such as C and stored externally. Methods implement operations the application can perform on the real-world entity.

### 2. Collection types
Each collection type describes a data unit made up of an indefinite number of elements, all of the same datatype. The collection types are array types and table types.

Array types and table types are schema objects. The corresponding data units are called VARRAYs and Nested tables. When there is no danger of confusion, we often refer to the collection types as VARRAYs and nested tables. Let us now understand these data units:

1. **VARRAYs**: VARRAY stands for varrying array
array. An array is an ordered set of data elements. All elements of a given array are of the same datatype. Each element has an index, which is a number corresponding to the element's position in the array.

2. **Nested Tables**: A nested table is an unordered set of data elements, all of the same datatype. It has a single column, and the type of that column is a built-in type or an object type. If an object type, the table can also be viewed as a multi-column table, with a column for each attribute of the object type.

## Supertype / Subtype relationships

A supertype is a generic entity type that has a relationship with one or more subtypes. A subtype is a sub-grouping of the entities in an entity type that is meaningful to the organization and that shares common attributes or relationships distinct from other subgroups.

There are two criteria that help the designer determine when to use subtypes and super-types:

1. There must be different, identifiable kinds or types of the entity in the user’s environment.

2. The different kinds or types of instances should have one or more attributes that are unique to that kind or type of instance.

<img src="http://www.myreadingroom.co.in/images/stories/docs/dbms/Entity%20Supertypes%20and%20Subtypes.JPG" height="" width="" alt="Sorry, Network Error">

## Table Inheritance
 Tables that are defined on named row types support table inheritance. Table inheritance is the property that allows a table to inherit the behavior (constraints, storage options, triggers) from the super-table above it in the table hierarchy. A table hierarchy is the relationship that you can define among tables in which sub-tables inherit the behavior of super-tables. A table inheritance provides the following advantages:
It encourages modular implementation of your data model.
- It ensures consistent reuse of schema components.
- It allows you to construct queries whose scope can be some or all of the tables in the table hierarchy.

There are two types of table inheritance as follow:

## 1. STI (Single Table Inheritance)

Single table inheritance is a way to emulate object-oriented inheritance in a object-relational database. When mapping from a database table to an object in an object-oriented language, a field in the database identifies what class in the hierarchy the object belongs to. All fields of all the classes are stored in the same table, hence the name "Single Table Inheritance". 

We use STI when the Subclasses have the same fields/columns but different behavior. A good indication, that STI is right is when the different subclasses have the same fields/columns but different methods. 

<img src="https://cayenne.apache.org/docs/3.0/images/single-table-inheritance.png" height="" width="">

### 2. MTI (Multi Table Inheritance)

Multiple inheritance is a feature of some object-oriented computer programming languages in which an object or class can inherit characteristics and features from more than one parent object or parent class.

We use MTI when the Subclasses have vastly different fields/columns but share common behavior. When subclasses have vastly different fields/columns, placing them all in a single table will have a lot of null columns, which is ultimately a waste of space, conceptually confusing, and reduces the effectiveness of indices. 

<img src="https://danchak99.files.wordpress.com/2014/07/er_10061.jpg" height="" width="">

## Collection Types
Collection types are the common variations of data collections, such as:

### 1. Nested Tables
 An ordered group of items of type TABLE are called nested tables. Nested table is a table within a table and some of its properties are:

- Nested tables can contain multiple columns.
- Nested tables are unbounded, ie., it can grow in size. In other words, we don’t specify the maximum size as we do for other data types.
- Within the database, nested tables can be considered one-column database tables. Oracle stores the rows of a nested table in no particular order. But, when you retrieve the nested table into a PL/SQL variable, the rows are given consecutive subscripts starting at 1. That gives you array-like access to individual rows.
- A nested table can be either used in a PL/SQL block to declare as a variable temporarily or as a column of a table which can persistently store the data in the database. 

### 2. VARRAY (Varrying Array)

VARRAY is one of the collection data types in Oracle to store column(s) that contain multiple values. That is, an attribute of type VARRAY is a multi-valued attribute. For example, assume a customer with multiple phone numbers. To store all phone numbers as part of single record, we would use VARRAY. Some properties of VARRAY are: 
- Unlike nested tables, VARRAY has a limit. In other words, we use VARRAY attributes to store limited number of entries. It has a limit like other data types NUMBER, CHAR etc.
- We cannot access the individual VARRAY elements using array_name[1] like format. But it can be accessed in PL/SQL using array_name[] format.
- The values that are stored under a VARRAY attribute is stored in-line, that is in the same tablespace as the other data in its row of the same table.
- VARRAY can be created as either
   -   an array of particular data type like NUMBER,  CHAR, VARCHAR, etc. 
   - or an array of user defined data types.

## Large Objects
Large Objects(LOBs) are a collection of data-types which is designed to hold a large amount of data. A LOB is able to hold up to maximum size ranging from 8 terabytes to 128 terabytes, depending upon how your database is configured. Storing data into LOBs helps you to manipulate & access data efficiently in your own application. Large Objects are suitable for above last two kinds of data: semi-structured & unstructured data. Large objects features allow you to store these two kinds of data in the database as well as in operating system files that are usually accessed from the database.

There are three types of LOBs as follow:

### 1. BLOBs (Binary LOBs) 
A Binary Large OBject (BLOB) is a collection of binary data stored as a single entity in a database management system. Blobs are typically images, audio or other multimedia objects, though sometimes binary executable code is stored as a blob. Database support for blobs is not universal.
### 2. CLOBs (Character LOBs) 
A character large object (CLOB) is a large block of text stored in a database in some form of text encoding. Oracle and IBM DB2 database provide explicit support for CLOBs, though other databases can manipulate large amounts of text in some way. CLOBs can be very large, up to two gigabytes or larger.

It is similar to a binary large object (BLOB) in that they are both large amounts of data. The key difference is that a CLOB is stored using a text encoding method such as ASCII or Unicode. CLOBs can encompass long documents such as books. They can range up to two gigabytes in size or even more. Some databases store CLOBs by referencing out-of-table data.

### 3. BFILE Datatype
External LOBs are data objects stored in operating system files outside the database table-spaces, that have no transactional support from the database server.
BFILEs are having read-only datatypes. The database allows read-only byte stream access to data stored in BFILEs. You cannot write to a BFILE from within your application.


## Summary

Above we learned about ORDBMS and its functions or we can say features like Row & Reference types, User-defined types, Supertype / Subtype relationships, User-defined procedures, Table Inheritance, Collection Types and Large objects.

In the next chapter we will learn about advance management of data.
