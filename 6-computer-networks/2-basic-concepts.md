# Chapter - 2 Basic Concepts
A network is a collection of computers, servers, mainframes, network devices, peripherals, or other devices connected to one another to allow the sharing of data. An example of a network is the Internet, which connects millions of people all over the world. To the right is an example image of a home network with multiple computers and other network devices all connected.

## Line Configuration in Computer Networks
A network is two or more devices connected through a link. A link is a communication pathway that transfer data from one device to another. Devices can be a computer, printer or any other device that is capable to send and receive data. For visualization purpose, imagine any link as a line drawn between two points.
For communication to occur, two devices must be connected in some way to the same link at the same time. There are two possible types of connections:

1. Point-to-Point Connection
2. Multi-point Connection

### Point-to-Point Connection 

A point-to-point connection provides a dedicated link between two devices.
The entire capacity of the link is reserved for transmission between those two devices.
Most point-to-point connections use a actual length of wire or cable to connect the two end, but other options such as microwave or satellite links are also possible. Point to point network topology is considered to be one of the easiest and most conventional network
topologies. It is also the simplest to establish and understand.


<p text align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/point-to-point-connection.jpg" height="" width=""></p>


**Example**: Point-to-Point connection between remote control and Television for changing the channels.


### Multi-point Connection 

It is also called Multidrop configuration. In this connection two or more devices share a single link.
More than two devices share the link that is the capacity of the channel is shared now. With shared capacity, there can be two possibilities in a Multipoint Line configuration:

1. **Spatial Sharing**: If several devices can share the link simultaneously, its called Spatially shared line configuration.

2. **Temporal (Time) Sharing**: If users must take turns using the link , then its called Temporally shared or Time Shared Line configuration.

<p text align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/tempralSharing.jpg" height="" width=""></p>

**Example**: Multi-point connection between Ethernet, ATM, etc.

## Network topologies 
The term network topology describes the relationship of connected devices in terms of a geometric graph. Devices are represented as vertices, and their connections are represented as edges on the graph. It describes how many connections each device has, in what order, and it what sort of hierarchy.\
There are six types of topologies as foolows:
### 1. Bus Topology
Bus topology is the simplest kind of topology in which a common bus or channel is used for communication in the network. The bus is connected to various taps and droplines. Taps are the connectors, while droplines are the cables connecting the bus with the computer. In other words, there is only a single transmission line for all nodes.\
When a sender sends a message, all other computers can hear it, but only the receiver accepts it(verifying the mac address attached with the data frame) and others reject it. Bus technology is mainly suited for small networks like LAN, etc.\
In this topology, the bus acts as the backbone of the network, which joins every computer and peripherals in the network. Both ends of the shared channel have line terminators. The data is sent only in one direction and as soon as it reaches the end, the terminator removes the data from the communication line(to prevent signal bounce and data flow disruption).

**Advantages of Bus topology**
1. Simple to use and install
2. If a node fails, it will not affect other nodes
3. Less cabling is required
4. Cost-efficient to implement

**Disadvantages of Bus topology**
1. Efficiency is less when nodes are more(strength of signal decreases)
2. If the bus fails, the network will fail
3. A limited number of nodes can connect to the bus due to limited bus length

<p text align="center"><img src="https://s3.ap-south-1.amazonaws.com/afteracademy-server-uploads/what-is-network-topology-and-types-of-network-topology-bus-topology-0c8709567d15d251.jpg" height="" width=""></p>

### 2. Ring Topology
Ring topology is a topology in which each computer is connected to exactly two other computers to form the ring. The message passing is unidirectional and circular in nature.\
This network topology is deterministic in nature, i.e., each computer is given access for transmission at a fixed time interval. All the nodes are connected in a closed-loop. This topology mainly works on a token-based system and the token travels in a loop in one specific direction.\
In a ring topology, if a token is free then the node can capture the token and attach the data and destination address to the token, and then leaves the token for communication. When this token reaches the destination node, the data is removed by the receiver and the token is made free to carry the next data.

**Advantages of Ring topology**
1. Easy Installation
2. Less Cabling Required
3. Reduces chances of data collision(unidirectional)

**Disadvantages of Ring topology**
1. If a node fails, the whole network will fail.
2. Slow data transmission speed(each message has to go through the ring path).
3. Difficult to reconfigure(we have to break the ring)

<p text align="center"><img src="https://s3.ap-south-1.amazonaws.com/afteracademy-server-uploads/what-is-network-topology-and-types-of-network-topology-ring-topology-63f83d036a7b39dc.jpg" height="" width=""></p>


### 3. Star Topology
Star topology is a computer network topology in which all the nodes are connected to a centralized hub. The hub or switch acts as a middleware between the nodes. Any node requesting for service or providing service, first contact the hub for communication.\
The central device(hub or switch) has point to point communication link(the dedicated link between the devices which can not be accessed by some other computer) with the devices. The central device then broadcast the message based on the central device used. The hub broadcasts the message, while the switch unicasts the messages by maintaining a switch table. Broadcasting increases unnecessary data traffic in the network.\

**Advantages of Star topology**
1. Centralized control.
2. Easy to troubleshoot(the faulty node does not give response).
3. Good fault tolerance due to centralized control on nodes.
4. If a node fails, it will not affect other nodes.
Easy to reconfigure and upgrade(configured using a central device).

**Disadvantages of Star topology**
1. If the central device fails, the network will fail
2. The number of devices in the network is limited(due to limited input-output port in a central device)

<p text align="center"><img src="https://s3.ap-south-1.amazonaws.com/afteracademy-server-uploads/what-is-network-topology-and-types-of-network-topology-star-topology-be4e08a83eb4c4d3.jpg" height="" width=""></p>

### 4. Mesh Topology
Mesh topology is a computer network topology in which nodes are interconnected with each other. In other words, direct communication takes place between the nodes in the network.\
There are mainly two types of Mesh:

1. **Full Mesh**: In which each node is connected to every other node in the network.
2. **Partial Mesh**: In which, some nodes are not connected to every node in the network.

In a fully connected mesh topology, each device has a point to point link with every other device in the network. If there are 'n' devices in the network, then each device has exactly '(n-1)' input-output ports and communication links. These links are simplex links, i.e., the data moves only in one direction. A duplex link(in which data can travel in both the directions simultaneously) can replace two simplex links.\
If we are using simplex links, then the number of communication links will be 'n(n-1)' for 'n' devices, while it is 'n(n-1)/2' if we are using duplex links in the mesh topology.

**Advantages of Mesh topology**
1. Dedicated links facilitate direct communication
2. No congestion or traffic problems on the channels
3. Good Fault tolerance due to the dedicated path for each node
4. If a node fails, other alternatives are present in the network

**Disadvantages of Mesh topology**
1. Very high cabling required
2. Cost inefficient to implement
3. Complex to implement and takes large space to install the network
4. Installation and maintenance are very difficult

<p text align="center"><img src="https://s3.ap-south-1.amazonaws.com/afteracademy-server-uploads/what-is-network-topology-and-types-of-network-topology-mesh-topology-2f85387806a5b673.jpg" height="" width=""></p>

### 5. Tree/Hierarchical Topology
Tree Topology is the combination of star and bus topology. It shares a common backbone cable to connect multiple star topology. In this topology the data flows from PC to the connected hub or switch and then travels to the backbone cable and towards the network. It is easy to connect new nodes and detect faulty nodes. If the cable fails the entire network will be down but should the hub or switch fails the network will be disturbed.\ 
In a tree topology, the whole network is divided into segments, which can be easily managed and maintained. There is a main hub and all the other sub-hubs are connected to each other in this topology.

<p text align="center"><img src="https://s3.ap-south-1.amazonaws.com/afteracademy-server-uploads/what-is-network-topology-and-types-of-network-topology-tree-topology-a719f15a28111793.jpg" height="" width=""></p>

### 6. Hybrid Topology
Hybrid Topology is the combination of multiple topologies in a computer network. It’s Ideal for networks handling large volumes of data transmission. In this topology, all topologies are interconnected according to the needs to form a hybrid. All the good features of each topology can be used to make an efficient hybrid topology.

<p text align="center"><img src="https://s3.ap-south-1.amazonaws.com/afteracademy-server-uploads/what-is-network-topology-and-types-of-network-topology-hybrid-topology-3d78d467173c8ea0.jpg" height="" width=""></p>

**Advantages of Hybrid topology**:
1. It can handle a large volume of nodes
2. It provides flexibility to modify the network according to our needs
3. Very Reliable(if one node fails it will not affect the whole network)
**Disadvantages of Hybrid topology**:
1. Complex design
2. Expensive to implement

## InternetworkS

