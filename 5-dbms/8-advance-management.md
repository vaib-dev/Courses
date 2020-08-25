# Chapter -7 Advance Management OF Data

Here we will discuss advance management of data to facilitate efficient and scalable analysis of large amounts of data through DDBMS and NoSQL.

## Distributed Database Management System(DDBMS)
A distributed database is basically a database that is not limited to one system, it is spread over different sites, i.e, on multiple computers or over a network of computers. A distributed database system is located on various sited that don’t share physical components. This is required when a particular database needs to be accessed by various users globally. It needs to be managed such that for the users it looks like one single database. There are two types:

<p align= "center"><img src="https://www.tutorialspoint.com/distributed_dbms/images/distributed_database_environments.jpg" height="" width=""></p>

### 1. Homogeneous Database
 In a homogeneous database, all different sites store database identically. The operating system, database management system and the data structures used – all are same at all sites. Hence, they’re easy to manage. Its properties are:

- The sites use very similar software

- The sites use identical DBMS or DBMS from the same vendor

- Each site is aware of all other sites and cooperates with other sites to process user requests

- The database is accessed through a single interface as if it is a single database

**Types of Homogeneous Distributed Database**: 
There are two types of homogeneous distributed database:

1. **Autonomous**: Each database is independent that functions on its own. They are integrated by a controlling application and use message passing to share data updates.

2. **Non-autonomous**: Data is distributed across the homogeneous nodes and a central or master DBMS co-ordinates data updates across the sites.

### 2. Heterogeneous Database
In a heterogeneous distributed database, different sites can use different schema and software that can lead to problems in query processing and transactions. Also, a particular site might be completely unaware of the other sites. Different computers may use a different operating system, different database application. They may even use different data models for the database. Hence, translations are required for different sites to communicate.  Its properties are:

- Different sites use dissimilar schemas and software

- The system may be composed of a variety of DBMSs like relational, network, hierarchical or object oriented

- Query processing is complex due to dissimilar schemas 

- Transaction processing is complex due to dissimilar software

- A site may not be aware of other sites and so there is limited co-operation in processing user requests

**Types of Heterogeneous Distributed Databases**:
There are two types of heterogeneous distributed database:

1. **Federated**: The heterogeneous database systems are independent in nature and integrated together so that they function as a single database system.

2. **Un-federated**: The database systems employ a central coordinating module through which the databases are accessed.

### Factors Encouraging DDBMS
The following factors encourage moving over to DDBMS:

1. **Distributed Nature of Organizational Units**: Most organizations in the current times are subdivided into multiple units that are physically distributed over the globe. Each unit requires its own set of local data. Thus, the overall database of the organization becomes distributed.

2. **Need for Sharing of Data**: The multiple organizational units often need to communicate with each other and share their data and resources. This demands common databases or replicated databases that should be used in a synchronized manner.

3. **Support for Both OLTP and OLAP**: Online Transaction Processing (OLTP) and Online Analytical Processing (OLAP) work upon diversified systems which may have common data. Distributed database systems aid both these processing by providing synchronized data.

4. **Database Recovery**: One of the common techniques used in DDBMS is replication of data across different sites. Replication of data automatically helps in data recovery if database in any site is damaged. Users can access data from other sites while the damaged site is being reconstructed. Thus, database failure may become almost inconspicuous to users.

5. **Support for Multiple Application Software**: Most organizations use a variety of application software each with its specific database support. DDBMS provides a uniform functionality for using the same data among different platforms.

## Scalability
Scalability refers to the capability of a system to handle a growing amount of work, or its potential to perform more total work in the same elapsed time when processing power is expanded to accommodate growth. A system is said to be scalable if it can increase its workload and throughput when additional resources are added. There are two broad categories for scaling database systems: vertical scaling and horizontal scaling.

<p align="center"><img src="https://bitpanda-academy.imgix.net/nulld4cb2f71-953b-4308-8edc-63408bc35a1b/bitpanda-academy-intermediate-15-scaling-infographic.png?auto=compress%2Cformat&fit=min&fm=jpg&q=80&w=2100" height="" width=""></p>

### 1. Vertical scaling 
Vertical scaling, also known as scaling up, is the process of adding resources, such as memory or more powerful CPUs to an existing server. Removing the memory or changing to a less powerful CPU is known as scaling down.

   Adding or replacing resources to a system typically results in performance gains, but realizing such gains often requires reconfiguration and downtime. Furthermore, there are limitations to the number of additional resources that can be applied to a single system, as well as to the software that uses the system.

### 2. Horizontal scaling 
Horizontal scaling sometimes referred to as scaling out, is the process of adding more hardware to a system. This typically means adding nodes (new servers) to an existing system.

## Network Partitioning(NP)
A network partition refers to network decomposition into relatively independent subnets for their separate optimization as well as network split due to the failure of network devices. In both cases the partition-tolerant behavior of subnets is expected. This means that even after the network is partitioned into multiple sub-systems, it still works correctly.

For example, in a network with multiple subnets where nodes A and B are located in one subnet and nodes C and D are in another, a partition occurs if the network switch device between the two subnets fails. In that case nodes A and B can no longer communicate with nodes C and D, but all nodes A-D work the same as before.

## Partition Tolerance
Partition Tolerance is a guarantee that the system continues to operate despite arbitrary message loss or failure of part of the system. In other words, even if there is a network outage in the data center and some of the computers are unreachable, still the system continues to perform properly.

## Fragmentation
Fragmentation is the task of dividing a table into a set of smaller tables. The subsets of the table are called fragments. Fragmentation can be of three types: horizontal, vertical, and hybrid (combination of horizontal and vertical). Horizontal fragmentation can further be classified into two techniques: primary horizontal fragmentation and derived horizontal fragmentation.

Fragmentation should be done in a way so that the original table can be reconstructed from the fragments. This is needed so that the original table can be reconstructed from the fragments whenever required. This requirement is called “re-constructiveness.” Fregmentation is divided into three categories as follow:

### 1. Vertical Fragmentation
In vertical fragmentation, the fields or columns of a table are grouped into fragments. In order to maintain re-constructiveness, each fragment should contain the primary key field(s) of the table. Vertical fragmentation can be used to enforce privacy of data.

<p align="center"><img src="https://i.stack.imgur.com/9OlRZ.jpg" height="" width="" ></p>

### 2. Horizontal Fragmentation
Horizontal fragmentation groups the tuples of a table in accordance to values of one or more fields. Horizontal fragmentation should also confirm to the rule of reconstructiveness. Each horizontal fragment must have all columns of the original base table.

<p align="ceneter"><img src="https://i.stack.imgur.com/wXunq.jpg" height="" width=""></p>

### 3. Hybrid Fragmentation
In hybrid fragmentation, a combination of horizontal and vertical fragmentation techniques are used. This is the most flexible fragmentation technique since it generates fragments with minimal extraneous information. However, reconstruction of the original table is often an expensive task.

Hybrid fragmentation can be done in two alternative ways −

1. By generating a set of horizontal fragments; then generate vertical fragments from one or more of the horizontal fragments.

2. Or generate a set of vertical fragments; then generate horizontal fragments from one or more of the vertical fragments.

## Advantages Of DDBMS 
Distributed database management basically proposed for the various reason from organizational decentralization and economical processing to greater autonomy. Some of these advantages are as follows:

1. Network transparency: This basically refers to the freedom for the user from the operational details of the network. These are of two types Location and naming transparency.
2. Replication transparencies: It basically made user unaware of the existence of copies as we know that copies of data may be stored at multiple sites for better availability performance and reliability.
Fragmentation transparency:
It basically made user unaware about the existence of fragments it may be the vertical fragment or horizontal fragmentation.
3. Increased Reliability and availability: Reliability is basically defined as the probability that a system is running at a certain time whereas Availability is defined as the probability that the system is continuously available during a time interval. When the data and DBMS software are distributed over several sites one site may fail while other sites continue to operate and we are not able to only access the data that exist at the failed site and this basically leads to improvement in reliability and availability.
4. Easier Expansion: In a distributed environment expansion of the system in terms of adding more data, increasing database sizes, or adding more data, increasing database sizes or adding more processor is much easier.

5. Improved Performance: We can achieve inter-query and intr-query parallelism by executing multiple queries at different sites by breaking up a query into a number of sub-queries that basically executes in parallel which basically leads to improvement in performance.

