# Chapter - 4 CRUD Operations

CRUD operations refer to the basic Insert, Read, Update and Delete operations. In the previous chapter, we learnt about how to create a database and drop the database in MongoDB. Now, let us learn how to perform CRUD (Create/Read/Update/Delete) operations in MongoDB.
So let's learn about these crud operations one by one as follow:

## 1. Inserting a document into a collection(Create)
To insert data into MongoDB collection, you need to use MongoDB's insert() method. We can perform two operations in insert command as follow:

### The insertOne() method
If you need to insert only one document into a collection you can use this method.

**Syntax**: The basic syntax of insertOne() command is as follows:

    db.COLLECTION_NAME.insertOne(document)

**For Example**: In the below example we are creating a document inside the users collections. We insert three fields that are name, age, status as shown: 

<img src="https://docs.mongodb.com/manual/_images/crud-annotated-mongodb-insertOne.bakedsvg.svg" height="" width="">

### The insertMany() method

You can insert multiple documents using the insertMany() method. To this method you need to pass an array of documents.

**Syntax**: The syntax of insertMany() command is as follows:

      db.COLLECTION_NAME.insertMany([{document1}, {document2}, ...])

**For Example**: In the below example we insert three documents at one go in the collection named empDetails.  


    db.empDetails.insertMany
    (
    	[
    		{
    			First_Name: "Radhika",
    			Last_Name: "Sharma",
    			Date_Of_Birth: "1995-09-26",
    			e_mail: "radhika_sharma.123@gmail.com",
    			phone: "9000012345"
    		},
    		{
    			First_Name: "Rachel",
    			Last_Name: "Christopher",
    			Date_Of_Birth: "1990-02-16",
    			e_mail: "Rachel_Christopher.123@gmail.com",
    			phone: "9000054321"
    		},
    		{
    			First_Name: "Fathima",
    			Last_Name: "Sheik",
    			Date_Of_Birth: "1990-02-16",
    			e_mail: "Fathima_Sheik.123@gmail.com",
    			phone: "9000054321"
    		}
    	]
    )


## 2. Read Operations
Read operations retrieve documents from a collection i.e. query a collection for documents. In MongoDB, when you execute find() method, then it displays all fields of a document. To limit this, you need to set a list of fields with value 1 or 0. 1 is used to show the field while 0 is used to hide the fields. MongoDB provides the following methods to read documents from a collection.

### Syntax and Examples

**Syntax**:
   
    db.collection.find({},{KEY: 1 OR 0})   

**Example**: Consider the collection mycol has the following data:

    {_id : 1"), title: "MongoDB Overview"},
    {_id : 2"), title: "NoSQL Overview"},
    {_id : 3"), title: "Tutorials Point Overview"}

Following example will display the title of the document while querying the document as shown:

    db.mycol.find({},{"title":1,_id:0})
    {"title":"MongoDB Overview"}
    {"title":"NoSQL Overview"}
    {"title":"Tutorials Point Overview"}


**Note**: _id field is always displayed while executing find() method, if you don't want this field, then you need to set it as 0.

## Update Operations
The update() method updates the values in the existing document.

**Syntax**: The basic syntax of update() method is as follows:

    db.COLLECTION_NAME.update(SELECTION_CRITERIA,     UPDATED_DATA)

### 1. findOneAndUpdate() method
The findOneAndUpdate() method updates the values in the existing document.

**Syntax**: The basic syntax of findOneAndUpdate() method is as follows:

    db.COLLECTION_NAME.findOneAndUpdate    (SELECTIOIN_CRITERIA, UPDATED_DATA)

**Example**: Assume we have created a collection named empDetails and inserted three documents in it as shown below:

    db.empDetails.insertMany(
   	[
   		{
   			First_Name: "Radhika",
   			Last_Name: "Sharma",
   			Age: "26",
   			e_mail: "radhika_sharma.123@gmail.com",
   			phone: "9000012345"
   		},
   		{
   			First_Name: "Rachel",
   			Last_Name: "Christopher",
   			Age: "27",
   			e_mail: "Rachel_Christopher.123@gmail.com",
   			phone: "9000054321"
   		},
   		{
   			First_Name: "Fathima",
   			Last_Name: "Sheik",
   			Age: "24",
   			e_mail: "Fathima_Sheik.123@gmail.com",
   			phone: "9000054321"
   		}
   	]
    )

Following example updates the age and email values of the document with name 'Radhika'.

     db.empDetails.findOneAndUpdate(
    	{First_Name: 'Radhika'},
    	{ $set: { Age: '30',e_mail: 'radhika_newemail@gmail.com'}}
     )
     {
     	"_id" : ObjectId("5dd6636870fb13eec3963bf5"),
     	"First_Name" : "Radhika",
     	"Last_Name" : "Sharma",
     	"Age" : "30",
     	"e_mail" : "radhika_newemail@gmail.com",
     	"phone" : "9000012345"
     }

### 2. updateOne() method
This methods updates a single document which matches the given filter.

**Syntax**: The basic syntax of updateOne() method is as follows:

    db.COLLECTION_NAME.updateOne(<filter>, <update>)

Example:
 
    db.empDetails.updateOne(
	{First_Name: 'Radhika'},
	{ $set: { Age: '30',e_mail: 'radhika_newemail@gmail.com'}}
)


### 3. updateMany() method
The updateMany() method updates all the documents that matches the given filter.

**Syntax**: The basic syntax of updateMany() method is as follows:

    db.COLLECTION_NAME.update(<filter>, <update>)

**Example**: 

    db.empDetails.updateMany(
	{Age:{ $gt: "25" }},
	{ $set: { Age: '00'}}
    )


## Delete Operations
Delete operations remove documents from a collection. MongoDB's remove() method is used to remove a document from the collection. remove() method accepts two parameters. One is deletion criteria and second is justOne flag.

* **deletion criteria**: (Optional) deletion criteria according to documents will be removed

* **justOne**: (Optional) if set to true or 1, then remove only one document

**Syntax**: Basic syntax of remove() method is as follows:

    db.COLLECTION_NAME.remove(DELLETION_CRITTERIA)

**Example**: Consider the mycol collection has the following data:

    {_id : ObjectId("507f191e810c19729de860e1"), title: "MongoDB Overview"},
    {_id : ObjectId("507f191e810c19729de860e2"), title: "NoSQL Overview"},
    {_id : ObjectId("507f191e810c19729de860e3"), title: "Tutorials Point Overview"}
    
Following example will remove all the documents whose title is 'MongoDB Overview'.

    db.mycol.remove({'title':'MongoDB Overview'})
    WriteResult({"nRemoved" : 1})
    db.mycol.find()
    {"_id" : ObjectId("507f191e810c19729de860e2"), "title" : "NoSQL Overview" }
    {"_id" : ObjectId("507f191e810c19729de860e3"),  "title" : "Tutorials Point Overview"