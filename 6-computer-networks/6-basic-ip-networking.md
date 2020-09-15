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

 <p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93051458-21b65400-f682-11ea-8512-c8b9011502b9.jpg" height="300" width=""></p>

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

## IPv4 and Subnetting
IPv4 addresses are normally expressed in dot-notation xxx.xxx.xxx.xxx where xxx is a value from 0 to 255. But another way to express them is as a 4-tuple of octets, which is an 8-bit segment since 2⁸=256. Here is the same IPv4 address in both dot-notation and 4-tuple octet.

     172.217.6.36
    10101100 11011001 00000110 00100100

### IPv4 Address Classification
There are 5 classes of IPv4 addresses, labeled A through E. The class of the IP address is determined by the first 4 bits.
1. **Class A**: IP addresses are in this class if their first bit is a 0. In dot-notation, this is the range 0.0.0.0 to 127.255.255.255 . The first 8 bits represent the network prefix and the rest represents the host identifier. For example, 127.42.13.69 has network prefix 127 and host identifier 42.13.69 .
2. **Class B**: IP addresses are in this class if their first two bits are 10 . In dot-notation, this is the range 128.0.0.0 to 191.255.255.255 . The first 16 bits represent the network prefix and the rest represent the host identifier. For example, 129.42.13.69 has network prefix 129.42 and host identifier 13.69 .
3. **Class C**: IP addresses are in this class if their first three bits are 110 . In dot-notation, this is the range 192.0.0.0 to 223.255.255.255 . The first 24 bits represent the network prefix and the rest represent the host identifier. For example, 196.13.42.69 has network prefix 196.13.42 and host identifier 69 .
4. **Class D**: IP addresses are in this class if their first four bits are 1110 . In dot-notation, this is the range 224.0.0.0 to 239.255.255.255 . These addresses are used for multi-casting protocols (ie. when a single packet can be sent to multiple hosts in one action)
5. **Class E**: IP addresses are in this class if their first four bits are 1111 . In dot-notation, this the range 240.0.0.0 to 255.255.255.255 . These addresses are reserved for future and experimental use.
### Reserved IP Addresses
Some IPv4 addresses are reserved for specific uses, namely loopback IPs and Private IPs:
1. **Loopback IPs**: The IPv4 address range 127.0.0.0 to 127.255.255.255 is reserved for looping back, which is when a host sends a network request to itself. Sometimes we want a program on a host to connect back to itself for debugging or development purposes.
2. **Private IPs**: The IP ranges 10.0.0.0 — 10.xxx.xxx.xxx , 172.16.0.0 — 172.31.xxx.xxx , and 192.168.0.0 — 192.168.xxx.xxx are designated private network addresses, meaning they can be assigned to computers which must go through the Network Address Translation (NAT) protocol to connect to the Internet. It’s private IPs that make it possible for over 8 billion devices to connect with only about 4 billion IPv4 address (2³² =~ 4 billion).

 <p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93170405-d0bb6400-f744-11ea-9cc7-d1fcaa174e35.png" height="" width=""></p>

### Understand Subnetting
Subnetting allows you to create multiple logical networks that exist within a single Class A, B, or C network. If you do not subnet, you are only able to use one network from your Class A, B, or C network, which is unrealistic.

Each data link on a network must have a unique network ID, with every node on that link being a member of the same network. If you break a major network (Class A, B, or C) into smaller subnetworks, it allows you to create a network of interconnecting subnetworks. Each data link on this network would then have a unique network/subnetwork ID. Any device, or gateway, that connects n networks/subnetworks has n distinct IP addresses, one for each network / subnetwork that it interconnects.

In order to subnet a network, extend the natural mask with some of the bits from the host ID portion of the address in order to create a subnetwork ID. For example, given a Class C network of 204.17.5.0 which has a natural mask of 255.255.255.0, you can create subnets in this manner:

    204.17.5.0 -      11001100.00010001.00000101.00000000
    255.255.255.224 - 11111111.11111111.11111111.11100000
                      --------------------------|sub|----

By extending the mask to be 255.255.255.224, you have taken three bits (indicated by "sub") from the original host portion of the address and used them to make subnets. With these three bits, it is possible to create eight subnets. With the remaining five host ID bits, each subnet can have up to 32 host addresses, 30 of which can actually be assigned to a device since host ids of all zeros or all ones are not allowed (it is very important to remember this). So, with this in mind, these subnets have been created.

    204.17.5.0 255.255.255.224     host address range 1 to 30
    204.17.5.32 255.255.255.224    host address range 33 to 62
    204.17.5.64 255.255.255.224    host address range 65 to 94
    204.17.5.96 255.255.255.224    host address range 97 to 126
    204.17.5.128 255.255.255.224   host address range 129 to 158
    204.17.5.160 255.255.255.224   host address range 161 to 190
    204.17.5.192 255.255.255.224   host address range 193 to 222
    204.17.5.224 255.255.255.224   host address range 225 to 254

### Sample Exercise 
Now that you have an understanding of subnetting, put this knowledge to use. In this example, you are given two address / mask combinations, written with the prefix/length notation, which have been assigned to two devices. Your task is to determine if these devices are on the same subnet or different subnets. You can use the address and mask of each device in order to determine to which subnet each address belongs.

DeviceA: 172.16.17.30/20\
DeviceB: 172.16.28.15/20\
Determine the Subnet for DeviceA:

    172.16.17.30  -   10101100.00010000.00010001.00011110
    255.255.240.0 -   11111111.11111111.11110000.00000000
                  -----------------| sub|------------
    subnet =          10101100.00010000.00010000.00000000 = 172.16.16.0

Looking at the address bits that have a corresponding mask bit set to one, and setting all the other address bits to zero (this is equivalent to performing a logical "AND" between the mask and address), shows you to which subnet this address belongs. In this case, DeviceA belongs to subnet 172.16.16.0.

Determine the Subnet for DeviceB:

    172.16.28.15  -   10101100.00010000.00011100.00001111
    255.255.240.0 -   11111111.11111111.11110000.00000000
                  -----------------| sub|------------
    subnet =          10101100.00010000.00010000.00000000 = 172.16.16.0
From these determinations, DeviceA and DeviceB have addresses that are part of the same subnet.


## Summary
In this we compared OSI and TCP/IP models, UPD and TCP protocols, collapsed core and 3-tier architectures, network topologies, compare cabling types. Then we also learned a new topic IPv4 and subnetting.

In the next chapter we will learn LAN switching.