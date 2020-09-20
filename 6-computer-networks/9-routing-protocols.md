# Chapter - 9 Routing Protocols
A Router is a process of selecting path along which the data can be transferred from source to the destination. Routing is performed by a special device known as a router. Router works at the network layer in the OSI model and internet layer in TCP/IP model
It is a networking device that forwards the packet based on the information available in the packet header and forwarding table. In this algorithms are used for routing the packets. The routing algorithm is nothing but a software responsible for deciding the optimal path through which packet can be transmitted.
The routing protocols use the metric to determine the best path for the packet delivery. The metric is the standard of measurement such as hop count, bandwidth, delay, current load on the path, etc. used by the routing algorithm to determine the optimal path to the destination. The algorithm initializes and maintains the routing table for the process of path determination.
## Components Of Routing Tables
A routing table is a set of rules, often viewed in table format, that is used to determine where data packets traveling over an Internet Protocol (IP) network will be directed. All IP-enabled devices, including routers and switches, use routing tables.
### Entries of an IP Routing Table
A routing table contains the information necessary to forward a packet along the best path toward its destination. Each packet contains information about its origin and destination. Routing Table provides the device with instructions for sending the packet to the next hop on its route across the network.\
Each entry in the routing table consists of the following entries:
1. **Network ID**: The network ID or destination corresponding to the route.
1. **Subnet Mask**: The mask that is used to match a destination IP address to the network ID.
1. **Next Hop**: The IP address to which the packet is forwarded
1. **Outgoing Interface**: Outgoing interface the packet should go out to reach the destination network.
1. **Metric**: A common use of the metric is to indicate the minimum number of hops (routers crossed) to the network ID.

## Configure Inter-VLAN routing

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93668195-a5b87380-faa8-11ea-9e1d-363f87431a98.png" height="" width=""></p>

## Compare Static And Dynamic Routing
### Static Routing
Static Routing is also known as non-adaptive routing which doesn’t change routing table unless the network administrator changes or modify them manually. Static routing does not use complex routing algorithms and It provides high or more security than dynamic routing.

<p text align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/20190517214641/Untitled-Diagram-103.png" height="" width=""></p>

### Dynamic Routing
Dynamic routing is also known as adaptive routing which change routing table according to the change in topology. Dynamic routing uses complex routing algorithms and it does not provide high security like static routing. When the network change(topology) occurs, it sends the message to router to ensure that changes then the routes are recalculated for sending updated routing information.

<p text align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/20190517214708/Untitled-Diagram-1110.png" height="" width=""></p>

## Compare Distance Speed Vector Routing
### Distance Vector Routing 
It is a dynamic routing algorithm in which each router computes distance between itself and each possible destination i.e. its immediate neighbors. The router share its knowledge about the whole network to its neighbors and accordingly updates table based on its neighbors. The sharing of information with the neighbors takes place at regular intervals. This uses the Bellman Ford Algorithm for making routing tables.
### Link State Routing
It is a dynamic routing algorithm in which each router shares knowledge of its neighbors with every other router in the network. A router sends its information about its neighbors only to all the routers through flooding. Information sharing takes place only whenever there is a change. It makes use of Dijkastra’s Algorithm for making routing tables.

## Compare Interior And Exterior Protocols
### Interior Protocols
Interior Gateway Protocols (IGPs) handle routing within an Autonomous System (one routing domain). In plain English, IGP's figure out how to get from place to place between the routers you own. These dynamic routing protocols keep track of paths used to move data from one end system to another inside a network or set of networks that you administrate (all of the networks you manage combined are usually just one Autonomous System). IGP's are how you get all the networks communicating with each other.

IGP's fall into two categories: 
1. Distance Vector Protocols
    * Routing Information Protocol (RIP)
    * Interior Gateway Routing Protocol (IGRP)
 
 2. Link State Protocols
      * Open Shortest Path First (OSPF)
      * Intermediate System to Intermediate System (IS-IS)

### EXTERIOR GATEWAY PROTOCOLS
To get from place to place outside your network(s), i.e. on the Internet, you must use an Exterior Gateway Protocol. Exterior Gateway Protocols handle routing outside an Autonomous System and get you from your network, through your Internet provider's network and onto any other network. BGP is used by companies with more than one Internet provider to allow them to have redundancy and load balancing of their data transported to and from the Internet.

Examples of an EGP:
1. Border Gateway Protocol (BGP)
2. Exterior Gateway Protocol (Replaced by BGP)

## Configure Static Routing Protocols

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93713359-ec759e80-fb78-11ea-97d3-49c23400423b.png" height="" width=""></p>

## 8. Configure single-area and multi-area OSPFv2 for IPv4

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93713364-f6979d00-fb78-11ea-8693-2b434c4112a1.png" height="" width=""></p>

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93713366-f8f9f700-fb78-11ea-9387-2c8285a50efc.png" height="" width=""></p>

## Configure EIGPRP

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93717348-daa0f500-fb92-11ea-9997-7b6bca755209.png" height="" width=""></p>


## Configure RIPv2

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93713370-fbf4e780-fb78-11ea-9d25-a35d3bedefd9.png" height="" width=""></p>