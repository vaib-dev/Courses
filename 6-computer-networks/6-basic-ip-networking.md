# Chapter - 6 Basic IP Networking
An Internet Protocol address (IP address) is a numerical label assigned to each device connected to a computer network that uses the Internet Protocol for communication. ... Internet Protocol version 4 (IPv4) defines an IP address as a 32-bit number.

## Compare OSI and TCP/IP Model

1. OSI model is a generic model that is based upon functionalities of each layer. TCP/IP model is a protocol-oriented standard.

1. OSI model distinguishes the three concepts namely, services, interfaces, and protocols. TCP/IP does not have a clear distinction between these three.
1. OSI model gives guidelines on how communication needs to be done, while TCP/IP protocols layout standards on which the Internet was developed. So, TCP/IP is a more practical model.
1. In OSI, the model was developed first and then the protocols in each layer were developed. In the TCP/IP suite, the protocols were developed first and then the model was developed.
1. The OSI has seven layers while the TCP/IP has four layers.

<p text align="center"><img src="https://www.tutorialspoint.com/assets/questions/images/45855-1531481367.png" height="" width=""></p>

## Compare UDP and TCP protocols
1. UDP stands for User Datagram Protocol and TCP stands for Transmission Control Protocol. They are the types of Internet Protocols your client would use to form a connection with another client or server you are trying to connect to. 

2. UDP is what is known as a “connection-less” oriented protocol. This means that it doesn’t establish a session with the server or client you are connecting to meaning data delivery is not guaranteed. On the other hand TCP is a “connection-oriented” protocol meaning it establishes a session and makes sure it is good and reliable so you can send data correctly.
3. UDP is typically not ideal for situations such as file transfers/downloading because you might not get all the packets from the download leading to an incomplete or corrupt file. This work is perfectly done by TCP. 
4. UDP is preferred, such as video chatting. If packets are lost during video chatting or streaming a video, you might get missing pixels in the video but the service is still usable despite packet loss as oppose to TCP, where the service would not work unless all packets are confirmed to have reached their destination.
5. UDP is also faster than TCP since it doesn’t have to check if all the packets were received at the other end.

Both UDP and TCP have their advantages and disadvantages. It really depends on what is prioritized to choose the right Internet Protocol to use.

<p text align="center"><img src="https://www.pluralsight.com/content/dam/pluralsight/resources/blog/2007/10/networking-basics-tcp-udp-tcpip-osi-models/wp/img/TCP7.jpg" height="" width=""></p>

## Compare Collapsed core and 3-tier architecture

1. A collapsed core is when the distribution layer and core layer functions are implemented by a single device. The primary motivation for the collapsed core design is reducing network cost, while maintaining most of the benefits of the three-tier hierarchical model.

2. The collapsed core is mainly used in small-scale companies as it is cheap whereas the 3-tier architecture us used in large-scale companies because its very expensive due to high-speed network devices like cisco catalyst.
3. The work of the access layer is to connect the devices with the network. The distribution layer aggregates the data received from the access layer before it is transmitted to the core layer for routing to the final destination. The core layer is designed in such a way that they could switch the packet as fast as possible and interconnect multiple network components.

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93015902-da28bd00-f5da-11ea-9308-61384d73e6b0.png" height="" width=""></p>

## Compare Network Topologies
Below we will discuss the difference between star, mesh and hybrid topology:

1. In star topology each device in the network is connected to a central device called hub where as in mesh topology each device is connected to one another and in hybrid topology we us multiple topologies to form a network.

2. Unlike Mesh and hybrid topology, star topology doesn’t allow direct communication between devices, a device must have to communicate through hub.
3. In mesh topology if we have n devices in the network then each device must be connected with (n-1) devices of the network where as in star topology we need only one connection to connect it to hub. 
4. Unlike Mesh, in star and hybrid topology if one link is broken then the whole network is effected.

 <p text align="center"><img src="https://diffzi.com/wp-content/uploads/2018/11/star-topology-vs-mesh-topology-870x435.jpg" height="" width=""></p>

## Compare Cabling Types
1. The signal transmission in the twisted wire takes place in the electrical form over the metallic conducting wires.whereas in co-axial the transmission takes place in electrical form over the inner conductor of cable and in optical fiber it takes place in an optical form over a glass fiber.

2. The twisted wire are affected due to the external magnetic field as they do not have any type of shield which can protect it, whereas in co-axial cable external magnetic field is less affected due to the presence of insulating protective coating called a jacket  covers the outer conductor. In optical fiber due to the presence of outer sheath external magnetic field is not affected.
3. In twisted wire power loss due to conduction and radiation, in coaxial it is due to conduction.and in fibre optical it is due to absorption, scattering and bending.
4. Twisted pair cable has low bandwidth. Co-axial cable has moderately high bandwidth. Optical fiber cable has very high bandwidth.

 <p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93051458-21b65400-f682-11ea-8512-c8b9011502b9.jpg" height="200" width=""></p>

## IPv4 Addressing and Subnetting
IPv4 supports three different types of addressing modes:

### 1. Unicast Addressing Mode
In this mode, data is sent only to one destined host. The Destination Address field contains 32- bit IP address of the destination host. Here the client sends data to the targeted server

 <p text align="center"><img src="https://www.tutorialspoint.com/ipv4/images/unicast_addressing.jpg" height="200" width=""></p>
### 2. Broadcast Addressing Mode
In this mode, the packet is addressed to all the hosts in a network segment. The Destination Address field contains a special broadcast address, i.e. 255.255.255.255. When a host sees this packet on the network, it is bound to process it. Here the client sends a packet, which is entertained by all the Servers −

 <p text align="center"><img src="https://www.tutorialspoint.com/ipv4/images/broadcast_addressing.jpg" height="200" width=""></p>
### 3. Multicast Addressing Mode
This mode is a mix of the previous two modes, i.e. the packet sent is neither destined to a single host nor all the hosts on the segment. In this packet, the Destination Address contains a special address which starts with 224.x.x.x and can be entertained by more than one host.

 <p text align="center"><img src="https://www.tutorialspoint.com/ipv4/images/multicast_addressing.jpg" height="200" width=""></p>
Here a server sends packets which are entertained by more than one servers. Every network has one IP address reserved for the Network Number which represents the network and one IP address reserved for the Broadcast Address, which represents all the hosts in that network.

