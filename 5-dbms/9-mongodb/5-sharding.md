# Chapter - 5 Sharding

Sharding is the process of storing data records across multiple machines and it is MongoDB's approach to meeting the demands of data growth. In Sharding, one’s data is broken into two or more smaller chunks, called logical shards. The logical shards are then distributed across separate database nodes, referred to as physical shards. As the size of the data increases, a single machine may not be sufficient to store the data nor provide an acceptable read and write throughput. Sharding solves the problem with horizontal scaling. With sharding, you add more machines to support data growth and the demands of read and write operations.

## Sharded Cluster
Shards are implemented by using clusters which are nothing but a group of MongoDB instances.

The components of a Shard include:

<img src="https://www.tutorialspoint.com/mongodb/images/sharding.png" height="" width="">

### 1. A Shard
 This is the basic thing, and this is nothing but a MongoDB instance which holds the subset of the data. In production environments, all shards need to be part of replica sets.
### 2. Config server
 This is a mongodb instance which holds metadata about the cluster, basically information about the various mongodb instances which will hold the shard data.
### 3. A Router
 This is a mongodb instance which basically is responsible to re-directing the commands send by the client to the right servers.

## Sharded and Non-Sharded Collections
A database can have a mixture of sharded and unsharded collections. Sharded collections are partitioned and distributed across the shards in the cluster. Unsharded collections are stored on a primary shard. Each database has its own primary shard.

<img src="https://docs.mongodb.com/manual/_images/sharded-cluster-primary-shard.bakedsvg.svg" height="" width="">

## Shard Keys
MongoDB uses the shard key to distribute the collection’s documents across shards. The shard key consists of a field or multiple fields in the documents. Documents in sharded collections can be missing the shard key fields. Missing shard key fields are treated as having null values when distributing the documents across shards but not when routing queries. 


<img src="https://i2.wp.com/www.kenwalger.com/blog/wp-content/uploads/2017/06/ShardingExample.png?resize=600%2C366" height="" width="">

### The Characteristics Of Shard Key

* The key determines distribution among the different shards in a cluster

* The shard is a field that exists in every document in the collection and can be indexed or indexed compound field

* MongoDB performs data partition in a collection using different ranges or chunks of shard key value. Each range or chunk defines a non overlapping range of shard key value. MongoDB distributes chunks and their documents among a shard in a cluster

### Shard Key Strategy
The choice of shard key affects the performance, efficiency, and scalability of a sharded cluster. A cluster with the best possible hardware and infrastructure can be bottlenecked by the choice of shard key. The choice of shard key and its backing index can also affect the sharding strategy that your cluster can use. So you have to choose the shard be on basis of below factors as shown:

<p align="center"><img src="https://user-images.githubusercontent.com/54719422/91717977-2a058e00-ebb0-11ea-9fff-2f52c5d2ee21.png" height="" width=""></p>


## Sharding Strategies
There are mainly three types of sharding strategies as follow:

###  1. Consistent Hash Sharding

Hash-based sharding, involves a value taken from newly written data — such as customer ID number, a client application IP address, Zip Code etc and plugging it into hash function to determine which shards data should go to. Hash value is the shard ID used to determine which shard the incoming data will be stored on. To ensure that entries are placed in the correct shards and in a consistent manner, the values entered into the hash function should all come from the same column. This column is known as a shard key. A shard key should be static, meaning it shouldn’t contain values that might change over time.
<img src="https://miro.medium.com/max/700/1*OURYaG-VDLTQF-PrbcO4XA.png" height="" width="">

 ### 2. Range Sharding

 Range-based sharding involves sharding the data based on the range of given values. Let’s say you have a database that stores information about the products, a product will be stored in a shard based on the price range it fall into. It is relatively easy to implement, as application code just reads which range the data falls into and writes it to the corresponding shard. The basic idea behind range sharding is shown in the figure below.

<img src="https://miro.medium.com/max/700/1*1FCBTWUliqTM-VYNcd_YHA.png" height="" width="">


### 3. Directory Based Sharding
 Directory based sharding maintains a static lookup table which used to keep track of which shard holds which data. Data from the shard key is written to the lookup table along with whatever shard each respective row should be written to.

 <img src="https://miro.medium.com/max/700/1*Kp_0zXQVJTkAQSz3DLwHBw.png" height="" width="">

## Advantages Of Sharding

### 1. High Availability
 With a sharded database, if there is outage in one database shard it makes only some part of application or website unavailable to some users, but other shards can continue operating without any issue. If database is unsharded, then an outage has potential to make entire application unavailable.
### 2. Faster queries response
 Sharded database architecture speed up query response times. When you submit a query on a database that hasn’t been sharded, it may have to search every row in the table you’re querying before it can find the result set you are looking for. For an application with a large, monolithic database, queries can become prohibitively slow. By Sharding one table into multiple, though, queries have to go over fewer rows and their result sets are returned much more quickly.
### 3. Scaling out
 Sharding a database can help to facilitate horizontal scaling, known as scaling out. A parallel backend means you can do more work simultaneously. You can handle higher user loads, especially when writing data, because there are parallel paths through your system. You can load balance web servers, which access shards over different network paths, which are processed by separate CPUs, which use separate caches of RAM and separate disk IO paths to process work. Very few bottlenecks limit your work.

## Disadvantages of Sharding
### 1. Adds complexity in the system
 Properly implementing a sharded database architecture is a complex task. If not done correctly, there is a significant risk that the sharding process can lead to lost data or corrupted tables. Sharding also have major impact on your team’s workflows. Rather than managing and accessing one’s data from single entry point, users must manage data across multiple shard locations, which could be potentially disruptive to some teams.
### 2. Rebalancing data
 In a sharded database architecture, sometimes a shard outgrows other shards and becomes unbalanced, which is also known as database hotspot. In this case any benefits of sharding the database is canceled out. The database would be likely need to be re-sharded to allow for a more even data distribution. Rebalancing has to be built in from the start otherwise while re-sharding, moving data from one shard to another shard requires lot of downtime.
### 3. Joining data from multiple shards
 To implement some complex functionalities we may need to pull lot of data from different sources spread across multiple shards. We can’t issue a query and get data from multiple shards. We need to issue multiple queries to different shards, get all the responses and merge them.
### 4. No Native Support
 Sharding is not natively supported by every database engine. Because of this, sharding often requires a “roll your own”. This means that documentation for sharding or tips for troubleshooting problems are often difficult to find.


## Summary

Above we studied about sharding, its types, advantages nad disadvantages. Here we discussed only the basics of sharding as it an advance topic, will be covered later in some another course. If you like it and want to learn it now then [click here.](https://docs.mongodb.com/manual/sharding/)

In the next chapter we will learn about replication in MongoDB.