# Chapter - 6 Replication
Replica set is a term used for defining a database cluster of multiple nodes with the master-slave replication and an automated failover configured between them. Such a structure usually requires an odd number of members, either with Arbiter node or not, to ensure the correct PRIMARY (master) database election. This selected DB will process all the incoming write operations, storing the information about them within its oplog, where they can be accessed and replicated by every secondary (slave) replica member for being applied to their data sets. In such a way, all servers will represent the same content and ensure its availability.

In some cases, replication can provide increased read capacity as clients can send read operations to different servers. Maintaining copies of data in different data centers can increase data locality and availability for distributed applications. You can also maintain additional copies for dedicated purposes, such as disaster recovery, reporting, or backup.

<p align="center"><img src="https://miro.medium.com/max/343/0*wB7K2aXtLjMPJY8i.png" height="" width=""></p>

## How Replication Works In MongoDB

The primary node receives all write operations. A replica set can have only one primary capable of confirming writes although in some circumstances, another mongod instance may transiently believe itself to also be primary. The primary node records all the changes to its data sets in its **operation log**, i.e. oplog.

<p align="center"><img src="https://docs.mongodb.com/manual/_images/replica-set-read-write-operations-primary.bakedsvg.svg" height="" width=""></p>

The secondaries replicate the primary’s oplog and apply the operations to their data sets such that the secondaries’ data sets reflect the primary’s data set. In case some unexpected issue occurs, causing the primary database downtime (e.g. due to hardware failure or connection interruption), a new election process will be initiated automatically, helping to restore the normal application functioning, no manual intervention required. In such a way, replica set inherits the benefits of usual replication (like failover redundancy, increased data availability and read capacity, disaster recovery, etc.) and simultaneously eliminates the complexity of managing numerous databases separately.

<p align="center"><img src="https://docs.mongodb.com/manual/_images/replica-set-trigger-election.bakedsvg.svg" height="" width=""></p>

The replica set cannot process write operations until the election completes successfully. The replica set can continue to serve read queries if such queries are configured to run on secondaries while the primary is offline. The median time before a cluster elects a new primary should not typically exceed 12 seconds. This includes time required to mark the primary as unavailable and call and complete an election. 

## Oplog

The oplog is a capped record of recent operations performed by the system, saved in the log to facilitate the repetition of any of those operations in the future; replicas sync via the oplog. As a “capped collection,” the oplog has a maximum size — a size you, the user, designate during the startup of your MongoDB instance, using the oplogSizeMB option. 
Every time you make a change to the dataset, MongoDB writes a version of the change to the oplog. As the list of commands grows, if the oplog reaches capacity, it will automatically drop old records to make room for new ones.



### Difficulties Which Occurs Due To Oplog 
Despite the general ease-of-use of MongoDB’s replica sets, there’s risk of complication when it comes to replica maintenance. The biggest potential pitfalls are associated with MongoDB’s “oplog.”
Risks with the oplog are related to its being capped if your oplog is too small, any maintenance operations that require you to take down a replica can cause the copy to fail. If you find yourself in such a situation, you’ll need to take down the primary node completely and allocate a larger oplog size to let it correctly sync. Furthermore, the amount of time your oplog permits you to have a node down is defined by your “oplog window” — the time difference between the first and last operation in the oplog. If adding a node to a replication set takes longer to sync than the oplog window, then the sync will fail. If you can’t sync a node fast enough, you need to, again, take down the primary and resize it — not an ideal situation.

### Managing The Oplog Correctly
To avoid these fairly painful situations, you should expand your oplog as your dataset grows — we believe this is the one critical piece of maintenance you must do for your MongoDB replica set.

The correct size of oplog depends on two things:

* How often you modify the data in your database. The more data you’re changing, the more operations you involve, and, therefore, the more you’re logging to the oplog.
* The total amount of data you have.

As long as you keep these factors in mind, anticipate correct oplog size, and expand your oplog when necessary, you should be able to avoid any of MongoDB’s most disruptive replication problems.


## Summary
Above we learned that Replication is referred to the process of ensuring that the same data is available on more than one Mongo DB Server. Further, we learned about what is operation log, difficulties occur due to it, how to manage it correctly.