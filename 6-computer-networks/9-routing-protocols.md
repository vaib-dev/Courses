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

## Configure Inter-VLAN Routing

In inter VLAN routing the two different teams or networks can talk to each other. In simple VLAN network one team can't talk to the other team but this problem is solved in inter VLAN routing. In this we add a router connected to the two interfaces of the switch. We then dive the gateways of the both teams at the router interface. This will enable the communication between the both teams.

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93738583-c8ab6a80-fc03-11ea-970a-27f3e2734020.png" height="" width=""></p>

In the below image I have pinged the VLAN 20 node by the VLAN 10 node and we see that the packets are reached successfully. In the right side window I have shown the VLAN connection is successful.

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93738982-d1e90700-fc04-11ea-8789-b60deffb7b54.png" height="" width=""></p>

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
As we have studied above that static routing is non adaptive routing which means that the table of the router do no get updated until and unless the administrator does no update it manually.
<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93713359-ec759e80-fb78-11ea-97d3-49c23400423b.png" height="" width=""></p>
To enable the static routing we have to define the path through which the packet will travel. In the below image I have shown the static routing is working successfully. The capital 'S' represents the satatic routing and in front of it the route is given as shown:

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93739741-a109d180-fc06-11ea-8873-07805173c33a.png" height="" width=""></p>

## 8. Configure single-area and multi-area OSPFv2 for IPv4
Below we will see the single-area and multi-area OSPFv2 for IPv4:
### Single Area
In single-area, we have to use the same process ID for each network, by the term process ID I mean in OSPF we have to give the process key to each network. But in single area it has the same process key for all networks. In the below image we have a Area 0 with process ID 1. The three routers are connnected to each other through OSPF.
<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93713364-f6979d00-fb78-11ea-8693-2b434c4112a1.png" height="" width=""></p>

In the below image we can see the configuration is successful. We can view that by going in router configuration terminal and then use the command do show ip address. Here the 'O' represents the OSPF connection and it shows the route in front of it as shown: 
<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93740347-eaa6ec00-fc07-11ea-9685-488eeb8861db.png" height="" width=""></p>

### Multi Area
In multi-area, we provide different process ID for all networks. As in the below image we have 2 different networks i.e Area 1 and Area 2 and the Area 0 is for connecting the both Area 1 and Area 2 with each other.
<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93713366-f8f9fre700-fb78-11ea-9387-2c8285a50efc.png" height="" width=""></p>

In the below image we can see that our multi area OSPF connection is successful which is represented by 'O IA' which stands fot OSPF Inter Area. It also tells us the route and the port number as shown: 
<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93741213-9a308e00-fc09-11ea-8326-708b4026ad28.png" height="" width=""></p>

## Configure EIGRP 
EIGRP stands for Enhanced inter gateway routing protocols. It was designed by CISCO system which can be used only in CISCO routers, but in 2013 it became open source, so it can be used in other router. In this there is no need to specify the route for the packet as it is an adaptive routing protocol, which means it wil decide its path itself by running some algorithms.

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93717348-daa0f500-fb92-11ea-9997-7b6bca755209.png" height="" width=""></p>

In the below image we can see that our EIGRP connection is successful. The EIGRP connection is represented by 'D'. It displays the route and the serial port number as shown:
<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93742310-7ff7af80-fc0b-11ea-95a3-c05922f81b40.png" height="" width=""></p>

## Configure RIPv2
RIP (Routing Information Protocol) is one of the oldest routing protocols still in service. The main advantage of using RIP is it uses the UDP (User Datagram Protocol).
<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93713370-fbf4e780-fb78-11ea-9d25-a35d3bedefd9.png" height="" width=""></p>
In the below figure we see that our RIP configuration is successful. It is represented by letter 'R' and we can also see the route and the serial port in front of it as shown:

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93742772-5a1eda80-fc0c-11ea-87df-87ffe32438f3.png" height="" width=""></p>

## Summary
This chapter mainly focus on the implementation of the all routing protocols which are very interesting. We have configured inter-VLAN which is advance version of VLAN, Static routing, OSPF, EIGRP, RIP protocols.

In the next chapter we will start with Troubleshooting.
