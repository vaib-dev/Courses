# Chapter 2- Data Modeling
Data models define how the logical structure of a database is modeled. Data Models are fundamental entities to introduce abstraction in a DBMS. Data models define how data is connected to each other and how they are processed and stored inside the system.
## Relational Algebra
Relational algebra is a procedural query language. It gives a step by step process to obtain the result of the query. It uses operators to perform queries.
### Types of Relational operation

<img src="https://static.javatpoint.com/dbms/images/dbms-relational-algebra.png" height="" width="">

1. **Select Operation**: The select operation selects tuples(rows) that satisfy a given predicate.
It is denoted by sigma (σ).

       Notation:  σ p(r)
       Where:
        σ is used for selection prediction
        r is used for relation(table name)
        p is used as a propositional logic
         formula which may use connectors like: 
         AND OR and NOT. These relational can use 
         as relational operators like =, ≠, ≥, <, 
         >, ≤.
   For example: **LOAN Relation**
   
   | BRANCH_NAME | LOAN_NO | AMOUNT |
   |-------------|---------|--------|
   | Downtown    | L-17    | 1000   |
   | Redwood     | L-23    | 2000   |
   | Ontario     | L-15    | 1500   |
   
   **Input**:
   
   σ BRANCH_NAME="Ontario" (LOAN)  
   **Output**:

| BRANCH_NAME | LOAN_NO | AMOUNT |
|-------------|---------|--------|
| Ontario     | L-15    | 1500   |
2. **Project Operation**: This operation shows the list of those attributes(columns) that we wish to appear in the result. Rest of the attributes are eliminated from the table.
It is denoted by ∏.
 
       Notation: ∏ A1, A2, An (r)   
       Where:
       A1, A2, A3 is used as an attribute(column) name of relation r.

   Example: **CUSTOMER RELATION**
   
   | NAME    | STREET  | CITY     |
   |---------|---------|----------|
   | Jones   | Main    | Harrison |
   | Smith   | North   | Rye      |
   | Hays    | Main    | Harrison |
   
   **Input**:
   
   ∏ NAME, CITY (CUSTOMER)  
   **Output**:
   | NAME    | CITY     |
   |---------|----------|
   | Jones   | Harrison |
   | Smith   | Rye      |
   | Hays    | Harrison |
3. **Union Operation**: Suppose there are two tuples(rows) R and S. The union operation contains all the tuples that are either in R or S or both in R & S.
It eliminates the duplicate tuples(rows). It is denoted by ∪.

       Notation: R ∪ S   
       A union operation must hold the following condition:
       1.R and S must have the attribute of the same number.
       2.Duplicate tuples are eliminated automatically.
   Example: **DEPOSITOR RELATION**
   
   | CUSTOMER_NAME | ACCOUNT_NO |
   |---------------|------------|
   | Johnson       | A-101      |
   | Smith         | A-121      |
   | Mayes         | A-321      |
   
   **BORROW RELATION**
   
   | CUSTOMER_NAME | LOAN_NO |
   |---------------|---------|
   | Jones         | L-17    |
   | Smith         | L-23    |
   | Hayes         | L-15    |
   
   **Input**:
   
   ∏ CUSTOMER_NAME (BORROW) ∪ ∏ CUSTOMER_NAME    (DEPOSITOR)  
   Output:
   
   | CUSTOMER_NAME |
   |---------------|
   | Johnson       |
   | Smith         |
   | Hayes         |
   | Mayes         |
   
4. **Set Intersection**: Suppose there are two tuples R and S. The set intersection operation contains all tuples that are in both R & S.
It is denoted by intersection ∩.
Notation: R ∩ S   
Example: Using the above **DEPOSITOR table** and **BORROW table**.

   **Input**:
   
   ∏ CUSTOMER_NAME (BORROW) ∩ ∏ CUSTOMER_NAME    (DEPOSITOR)  
   **Output**:
   
   | CUSTOMER_NAME |
   |---------------|
   | Smith         |
   | Jones         |
5. **Set Difference**: Suppose there are two tuples R and S. The set intersection operation contains all tuples that are in R but not in S.
It is denoted by intersection minus (-).
      
        Notation: R - S  
   Example: Using the above **DEPOSITOR table** and **BORROW table**.
   **Input**:
   
   ∏ CUSTOMER_NAME (BORROW) - ∏ CUSTOMER_NAME    (DEPOSITOR)  
   
   **Output**:
   
   | CUSTOMER_NAME |
   |:--------------: |
   | Jackson       |
   | Hayes         |
6. **Cartesian product**: The Cartesian product is used to combine each row in one table with each row in the other table. It is also known as a cross product.
It is denoted by X.
       
       Notation: E X D  
   Example:
   **EMPLOYEE**
   | EMP_ID | EMP_NAME | EMP_DEPT |
   |--------|----------|----------|
   | 1      | Smith    | A        |
   | 2      | Harry    | C        |
   | 3      | John     | B        |
  
   **DEPARTMENT**
   | DEPT_NO | DEPT_NAME |
   |---------|-----------|
   | A       | Marketing |
   | B       | Sales     |
  
   **Input**:
   
   EMPLOYEE X DEPARTMENT  
   **Output**:
   
   | EMP_ID | EMP_NAME | EMP_DEPT | DEPT_NO |    DEPT_NAME |
   |--------|----------|----------|---------|   -----------|
   | 1      | Smith    | A        | A       |    Marketing|
   | 1      | Smith    | A        | B       |    Sales    |         |
   | 2      | Harry    | C        | A       |    Marketing|
   | 2      | Harry    | C        | B       |    Sales    |
   | 3      | John     | B        | A       |    Marketing|
   | 3      | John     | B        | B       |    Sales    |
7. **Rename Operation**: The rename operation is used to rename the output relation. It is denoted by rho (ρ).

   Example: We can use the rename operator to rename STUDENT relation to STUDENT1.

## Semantic Modeling
Semantic Modeling is nothing but a way to represent complex data or a big data in the form of relationships. Before we get into the model, let's look at a simple relationship between an artist and an album. A given artist has a relationship to an album because they record the album. This can be expressed as follows:

<img src="https://study.com/cimages/multimages/16/semantic_model_artist_example.png" height="" width="">

Semantic modeling can be represented in two forms:

1. **Using entity Concepts and Terminology and UML**: We can build a model either with the help of Entity Concepts or with the help of UML diagram. UML diagrams are discussed in software engineering course in detail. ER diagrams are discussed later in this chapter. 

<img src="https://d2slcw3kip6qmk.cloudfront.net/marketing/pages/chart/examples/entityrelationshipdiagram.svg" height="" width="">

2. **Logical data modeling using the Relational Model**: We can also represent the semantic model using Relational model. A relational model is nothing but a table of values. Every row in the table represents a collection of related data values. These rows in the table denote a real-world entity or relationship.

<img src="https://www.researchgate.net/publication/6130193/figure/fig3/AS:667608747610143@1536181737968/Relational-model-design-of-the-database-On-a-conceptual-level-the-database-is.png" height="" width="">

## ER Model
ER model stands for an Entity-Relationship model.It is a high-level data model. This model is used to define the data elements and relationship for a specified system. It develops a conceptual design for the database. It also develops a very simple and easy to design view of data. In ER modeling, the database structure is portrayed as a diagram called an entity-relationship diagram.

### Component of ER Diagram

<img src="https://static.javatpoint.com/dbms/images/dbms-er-model-concept-diagram.png" height="" width="">

1. **Entity**:
An entity may be any object, class, person or place. In the ER diagram, an entity can be represented as rectangles.
<img src="https://www.studytonight.com/dbms/images/er-entity.png" height="" width="">

   a. **Weak Entity**- An entity that depends on another entity called a weak entity. The weak entity doesn't contain any key attribute of its own. The weak entity is represented by a double rectangle.
2. **Attribute**- The attribute is used to describe the property of an entity. Eclipse is used to represent an attribute.
<img src="https://www.studytonight.com/dbms/images/er-attributes.png" height="" width="">

   a. **Key Attribute**- The key attribute is used to represent the main characteristics of an entity. It represents a primary key. The key attribute is represented by an ellipse with the text underlined.

<img src="https://www.studytonight.com/dbms/images/er-key-attr.png" height="" width="">

   b. **Composite Attribute**- An attribute that composed of many other attributes is known as a composite attribute. The composite attribute is represented by an ellipse, and those ellipses are connected with an ellipse.

   <img src="https://www.studytonight.com/dbms/images/er-composite-attr.png" height="" width="">

   c. **Multi-valued Attribute**- An attribute can have more than one value. These attributes are known as a multi-valued attribute. The double oval is used to represent multi-valued attribute.

<img src="https://www.studytonight.com/dbms/images/er-multi-attr.png" height="" width="">

   d. **Derived Attribute**- An attribute that can be derived from other attribute is known as a derived attribute. It can be represented by a dashed ellipse.

   <img src="https://www.gatevidyalay.com/wp-content/uploads/2018/06/Derived-Attributes-Example.png" height="" width="">

3. **Relationship**- A relationship is used to describe the relation between entities. Diamond or rhombus is used to represent the relationship.
<img src="https://www.studytonight.com/dbms/images/relationship-example.jpg" height="" width="">

   Types of relationship are as follows:

   a. **One-to-One Relationship**- When only one instance of an entity is associated with the relationship, then it is known as one to one relationship.

   <img src="https://www.studytonight.com/dbms/images/one-to-one-example.jpg" height="" width="">

   b. **One-to-many relationship**- When only one instance of the entity on the left, and more than one instance of an entity on the right associates with the relationship then this is known as a one-to-many relationship.

   <img src="https://www.studytonight.com/dbms/images/one-to-many-example.jpg" height="" width="">

   c. **Many-to-one relationship**- When more than one instance of the entity on the left, and only one instance of an entity on the right associates with the relationship then it is known as a many-to-one relationship.

   <img src="https://www.studytonight.com/dbms/images/many-to-one.jpg" height="" width="">

   d. **Many-to-many relationship**- When more than one instance of the entity on the left, and more than one instance of an entity on the right associates with the relationship then it is known as a many-to-many relationship.

   <img src="https://www.studytonight.com/dbms/images/many-to-many-example.jpg" height="" width="">

## Enhanced ER Model
Enhanced entity-relationship diagrams are advanced database diagrams very similar to regular ER diagrams which represents requirements and complexities of complex databases. There are mainly three types of EER as follows:

1. **Generalization**: Generalization is a process of generalizing an entity which contains generalized attributes or properties of generalized entities. The entity that is created will contain the common features. Generalization is a Bottom up process.
<img src="https://www.studytonight.com/dbms/images/generalization.jpg" height="" width="">

2. **Specialization**: Specialization is a process of identifying subsets of an entity that shares different characteristics. It breaks an entity into multiple entities from higher level (super class) to lower level (sub class) or we can say by applying Top-down approach.
<img src="https://www.studytonight.com/dbms/images/specialization.jpg" height="" width="">

3. **Composition**: Composition is a form of aggregation that represents an association between entities, where there is a strong ownership between the 'whole' and the 'part'. For example, a tree and a branch have a composition relationship.
<img src="https://media.geeksforgeeks.org/wp-content/uploads/aggregation.png" height="" width="">

## Summary
Above we have discussed about relation data model, semantic modeling and its forms. Then we started with the ER diagrams begging with its terminology and learned upto drawing EER.

In the upcoming chapter we will have an overview on SQL language. So stay safe and stay tuned!

![Chapter-1](https://img.shields.io/static/v1?label=Finished&message=Data-Modeling&color=green) ![Chapter-1](https://img.shields.io/static/v1?label=Source&message=www.javatpoint.com&color=blue)![Chapter-1](https://img.shields.io/static/v1?label=PRs&message=Welcome&color=yellow)
