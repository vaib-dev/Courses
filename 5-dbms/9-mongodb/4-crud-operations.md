# Chapter - 4 CRUD Operations

CRUD operations refer to the basic Insert, Read, Update and Delete operations. In the previous chapter, we learnt about how to create a database and drop the database in MongoDB. Now, let us learn how to perform CRUD (Create/Read/Update/Delete) operations in MongoDB.
So let's learn about these crud operations one by one as follow:

## 1. Inserting a document into a collection(Create)
To insert data into MongoDB collection, you need to use MongoDB's insert() method. We can perform two operations in insert command as follow:

### 1. The insertOne() method
If you need to insert only one document into a collection you can use this method.

**Syntax**: The basic syntax of insertOne() command is as follows:

    db.COLLECTION_NAME.insertOne(document)

**For Example**: In the below example we are creating a document inside the empDetails collections. We insert four fields that are First_Name, Last_Name, Date_Of_Birth, e_mail and phone as shown: 

    db.empDetails.insertOne(
	{
		First_Name: "Radhika",
		Last_Name: "Sharma",
		Date_Of_Birth: "1995-09-26",
		e_mail: "radhika_sharma.123@gmail.com",
		phone: "9848022338"
	}
    )

### 2. The insertMany() method

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

### Practical
Now we will perform practical on our system.\
In the below image we first set the database to employeedb. Then we see that there is collection named emp_details. So we insertOne  document in the collection and then insertMany document in the collection as shown:
<img src="https://user-images.githubusercontent.com/54719422/91700717-eac94400-eb93-11ea-9d56-8d8961d0159e.png" height="" width="">


## 2. Read Operations
Read operations retrieve documents from a collection i.e. query a collection for documents. In MongoDB, when you execute find() method, then it displays all fields of a document. To limit this, you need to set a list of fields with value 1 or 0. 1 is used to show the field while 0 is used to hide the fields. MongoDB provides the following methods to read documents from a collection.

### 1. Find() method
Below we will see the syntax and example of find() method:

**Syntax**: The syntax of find() command is as follow:
   
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

### Practical

**Description**: In the image we have first performed the simple find() command without any parameters and then we have used the KEY parameter as discussed above.

<img src="https://user-images.githubusercontent.com/54719422/91700850-18ae8880-eb94-11ea-8f16-625d019dbeb5.png" height="" width="">


## Update Operations
The update() method updates the values in the existing document. We can perform four operations using update() method:

### 1. Update() method
Below we have syntax of update method.

**Syntax**: The basic syntax of update() method is as follows:

    db.COLLECTION_NAME.update(SELECTION_CRITERIA,UPDATED_DATA)

 The update() method can perform three different operations as discussed below:

### 2. findOneAndUpdate() method
The findOneAndUpdate() method updates the values in the existing document.

**Syntax**: The basic syntax of findOneAndUpdate() method is as follows:

    db.COLLECTION_NAME.findOneAndUpdate(SELECTIOIN_CRITERIA, UPDATED_DATA)

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

### 3. updateOne() method
This methods updates a single document which matches the given filter.

**Syntax**: The basic syntax of updateOne() method is as follows:

    db.COLLECTION_NAME.updateOne(<filter>, <update>)

**Example**: Assume we have created a collection named empDetails and inserted three documents in it, now we will update the age of radhika to '30' and email to 'radhika_newemail@gmail.com' shown below:
 
    db.empDetails.updateOne(
	{First_Name: 'Radhika'},
	{ $set: { Age: '30',e_mail: 'radhika_newemail@gmail.com'}}
    )


### 4. UpdateMany() method
The updateMany() method updates all the documents that matches the given filter.

**Syntax**: The basic syntax of updateMany() method is as follows:

    db.COLLECTION_NAME.update(<filter>, <update>)

**Example**: Assume we have created a collection named empDetails and inserted three documents in it, now we will update the age of the employee greater than 25 and will set it to 0 as shown: 

    db.empDetails.updateMany(
	{Age:{ $gt: "25" }},
	{ $set: { Age: '00'}}
    )


### Practical
In this practical we have performed all the update commands as discussed above. Firstly, we have used UpdateOne command by this we have added a new field in the document named salary. Then we use the find() method to see the updated document. Then we have set the salary of all the employees to 2000 who were having the salary grater then 500. Then we have again used the find method to see the changes.

<img src="https://user-images.githubusercontent.com/54719422/91700862-1b10e280-eb94-11ea-94cf-24c05849bfd1.png" height="" width="">


## Delete Operations
Delete operations remove documents from a collection. MongoDB's remove() method is used to remove a document from the collection. 

### Parameters
Remove method accepts two parameters. One is deletion criteria and second is justOne flag as explained:

* **deletion criteria**: (Optional) deletion criteria according to documents will be removed

* **justOne**: (Optional) if set to true or 1, then remove only one document

### Remove() method
Below we have syntax and example of remove() method:

**Syntax**: Basic syntax of remove() method is as follows:

    db.COLLECTION_NAME.remove(DELETION_CRITERIA)

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

### Practical
In this practical we have removed the data of an employee using remove() method as we have discussed above. 

<img src="https://user-images.githubusercontent.com/54719422/91700876-1ea46980-eb94-11ea-839a-7c041ddc6720.png" height="" width="">

## Summary
At last, we learnt all the CRUD operations in MongoDB that are create, read, update and delete a document. After this we also performed practicals on every command.

In the chapter we will learn about sharding method in MongoDB.
