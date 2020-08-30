# Chapter - 2 Data Modelling

Data in MongoDB has a flexible schema in the form of documents in the same collection. They do not need to have the same set of fields or structure Common fields in a collection’s documents may hold different types of data. 

<img src="https://4.bp.blogspot.com/-edz2_QrFvCE/UnzBhKZE3FI/AAAAAAAAAEs/bTEsqnZFTXw/w1200-h630-p-k-no-nu/SQL-MongoDB+Correspondence.PNG" height="" width="">

The key challenge in data modeling is balancing the needs of the application, the performance characteristics of the database engine, and the data retrieval patterns. When designing data models, always consider the application usage of the data (i.e. queries, updates, and processing of the data) as well as the inherent structure of the data itself.

## Properties Of MongoDB

### 1. Flexible Schema
Unlike SQL databases, where you must determine and declare a table’s schema before inserting data. MongoDB’s collections, by default, does not require its documents to have the same schema. That is:

 The documents in a single collection do not need to have the same set of fields and the data type for a field can differ across documents within a collection.
To change the structure of the documents in a collection, such as add new fields, remove existing fields, or change the field values to a new type, update the documents to the new structure.


<img src="https://image.slidesharecdn.com/emeaqawebinar3-121229140656-phpapp02/95/slide-4-1024.jpg" height="" width="">

In practice, however, the documents in a collection share a similar structure, and you can enforce document validation rules for a collection during update and insert operations. 

### 2. Atomicity of Write Operations
MongoDB does not support multi-document atomic transactions. However, it does provide atomic operations on a single document. So if a document has hundred fields the update statement will either update all the fields or none, hence maintaining atomicity at the document-level.

 **Single Document Atomicity**: In MongoDB, a write operation is atomic on the level of a single document, even if the operation modifies multiple embedded documents within a single document.

A denormalized data model with embedded data combines all related data in a single document instead of normalizing across multiple documents and collections. This data model facilitates atomic operations.

**For example**: When a single write operation like [db.collection.updateMany()] modifies multiple documents, the modification of each document is atomic, but the operation as a whole is not atomic.

## Data Model Design
MongoDB provides two types of data models. Based on the requirement, you can use either of the models while preparing your document:

### 1. Embedded data model

In this model, you can have (embed) all the related data in a single document, it is also known as de-normalized data model.

**Example**: Assume we are getting the details of product in three different documents namely, product name, stock, price, and reviews you can embed all the three documents in a single one as shown below:


    {
    	_id: 1,
    	Product_details:{
    		Name: "Pencil",
    		Brand: "Natraj",
            Colour: "Red"
    		},
    	Quality: {
    		Material: "Pure led",
    		},
    	Price: {
    		Per_Pencil: "5rs",
            Per_Box: "20rs(7pcs)"
    	}
    }


### 2. Normalized data model 

In this model, you can refer the sub documents in the original document, using references. For example, you can re-write the above document in the normalized model as:

  **Product_details**:
           
	 {
           
		_id: 1,
		empDocID: " ObjectId101",   
		Name: "Pencil",
		Brand: "Natraj",
		Colour: "Red"
           
	}
    
**Quality**:   
  
    {
    	Material_used: "Pure led"
    }

**Price**:
      
	  {
    		Per_Pencil: "5rs",
            Per_Box: "20rs(7pcs)"
      }
## Summary
In this chapter we learnt about the some properties and the data model design of mongoDB.

In the next chapter we will learn about how to create collections in the database using MongoDB and will perform practical.