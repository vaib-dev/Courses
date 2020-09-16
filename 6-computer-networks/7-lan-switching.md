# Chapter - 7 LAN Switching
A LAN is a high-speed data network that covers a relatively small geographic area. It typically connects workstations, personal computers, printers, servers, and other devices. LANs offer computer users many advantages, including shared access to devices and applications etc.

LAN switching is a form of packet switching used in local area networks. Switching technologies are crucial to network design, as they allow traffic to be sent only where it is needed in most cases, using fast, hardware-based methods.

The term Ethernet refers to the family of local-area network (LAN) products covered by the IEEE 802.3 standard that defines what is commonly known as the CSMA/CD protocol. Three data rates are currently defined for operation over optical fiber and twisted-pair cables:

1. 10 Mbps-10Base-T Ethernet
2. 100 Mbps-Fast Ethernet
3. 1000 Mbps-Gigabit Ethernet

## Switching Concepts
Switches are used to connect multiple devices together on the same network. In a properly designed network, LAN switches are responsible for directing and controlling the data the flow at the access layer to networked resources.

###  MAC learning and aging
The dynamically learned MAC addresses are deleted after the MAC address age value has expired. This frees unused addresses from the MAC address table for other active subscribers. In Cisco ME 2600X, the default value for aging the MAC address is 300 seconds and can not be changed. The expected MAC address expiration timer is between 300 and 600 seconds, depending on the number of MAC addresses learned.
1. You can configure the amount of time an entry remains in the MAC table.
2. You can also configure MAC aging time in interface configuration mode or in VLAN configuration mode.
3. The MAC aging time specifies the time before an entry ages and is discarded from the MAC address table.
4. The range is from 0 to 1000000; The default value is 300 seconds.
5. Entering the value 0 disables MAC aging.
6. If a VLAN is not specified, the age specification applies to all VLANs.

### Frame Switching
The concept of switching and forwarding frames is universal in networking and telecommunications. Various types of switches are used in LANs, WANs, and the public switched telephone network (PSTN). The fundamental concept of switching refers to a device making a decision based on two criteria:

1. Ingress port
2. Destination address
The decision on how a switch forwards traffic is made in relation to the flow of that traffic. The term ingress is used to describe a frame entering a device on a specific port. The term egress is used to describe frames leaving the device through a particular port.

When a switch makes a decision, it is based on the ingress port and the destination address of the message. A LAN switch maintains a table that it uses to determine how to forward traffic through the switch.

### Frame Flooding
In a network, flooding is the forwarding by a router of a packet from any node to every other node attached to the router except the node from which the packet arrived. Flooding is a way to distribute routing information updates quickly to every node in a large network. It is also sometimes used in multicast packets (from one source node to many specific nodes in a real or virtual network).

### MAC Address table
The switch maintains an address table called MAC address table in order to efficiently switch frames between interfaces. When the switch receives a frame, it associates the MAC address of the sending device with the switch port on which it was received. In this way, a switch dynamically builds an address table by using the source MAC address of the frames received.

The basic logic used by switches when forwarding frames is the key to understanding many enhanced switching concepts and is worth a quick review here. The forwarding logic differs based on the type of destination MAC address and on whether the destination address has been added to the MAC address table of the switch. If we are sending a packet in the network for the first time then the message will be broadcast to every node in the network and the node which sends the packet its MAC address and port number will be stored in MAC Address Table and the node which will receive the packet its MAC address and port number will also be stored. Like this after some time the switch will get the MAC address and the port number where the node is present. 
##  Ethernet Frame 
When transmitting data over Ethernet, the Ethernet frame is primarily responsible for the correct rule making and successful transmission of data packets. Essentially, data sent over Ethernet is carried by the frame. An Ethernet frame is between 64 bytes and 1,518 bytes big, depending on the size of the data to be transported.

### Ethernet Frame Format

Ethernet frame starts with Preamble and SFD, both works at the physical layer. Ethernet header contains both Source and Destination MAC address, after which the payload of the frame is present. The last field is CRC which is used to detect the error. Now, let’s study each field of basic frame format.

<p text align center><img src="https://media.geeksforgeeks.org/wp-content/uploads/IEEE-802.3-Ethernet-Frame-Format.png"></p>

1. **Preamble**: Ethernet frame starts with 7-Bytes Preamble. This is a pattern of alternative 0’s and 1’s which indicates starting of the frame and allow sender and receiver to establish bit synchronization.\
Initially, PRE (Preamble) was introduced to allow for the loss of a few bits due to signal delays. But today’s high-speed Ethernet don’t need Preamble to protect the frame bits.

   PRE (Preamble) indicates the receiver that frame is coming and allow the receiver to lock onto the data stream before the actual frame begins.

2. **Start of frame delimiter (SFD)**: This is a 1-Byte field which is always set to 10101011. SFD indicates that upcoming bits are starting of the frame, which is the destination address. Sometimes SFD is considered the part of PRE, this is the reason Preamble is described as 8 Bytes in many places. The SFD warns station or stations that this is the last chance for synchronization.

3. **Destination Address**: This is 6-Byte field which contains the MAC address of machine for which data is destined.

4. **Source Address**: This is a 6-Byte field which contains the MAC address of source machine. As Source Address is always an individual address (Unicast), the least significant bit of first byte is always 0.
5. **Length**: Length is a 2-Byte field, which indicates the length of entire Ethernet frame. This 16-bit field can hold the length value between 0 to 65534, but length cannot be larger than 1500 because of some own limitations of Ethernet.
6. **Data**: This is the place where actual data is inserted, also known as Payload. Both IP header and data will be inserted here if Internet Protocol is used over Ethernet. The maximum data present may be as long as 1500 Bytes. In case data length is less than minimum length i.e. 46 bytes, then padding 0’s is added to meet the minimum possible length.
7. **Cyclic Redundancy Check (CRC)**: CRC is 4 Byte field. This field contains a 32-bits hash code of data, which is generated over the Destination Address, Source Address, Length, and Data field. If the checksum computed by destination is not the same as sent checksum value, data received is corrupted.

##  Troubleshoot interface and cable issues

### Collisions
A collision is the mechanism used by Ethernet to control access and allocate shared bandwidth among stations that want to transmit data at the same time on a shared medium. Because the medium is shared, a mechanism must exist where two stations can detect that they want to transmit data at the same time. This mechanism is collision detection. In full-duplex Ethernet, collision detection is disabled.\
Ethernet uses CSMA/CD (Carrier Sense Multiple Access/Collision Detect) as its collision detection method.

**Example**: Station A wishes to send a frame. First, it checks if the medium is available (Carrier Sense). If it isn't, it waits until the current sender on the medium has finished.

<p text align center><img src="https://www.cisco.com/c/dam/en/us/support/docs/interfaces-modules/port-adapters/12768-eth-collisions.gif 
"></p>

Suppose Station A believes the medium is available and attempts to send a frame. Because the medium is shared (Multiple Access), other senders might also attempt to send at the same time. At this point, Station B tries to send a frame at the same time to Station A.
Shortly after, Station A and Station B realize that there is another device attempting to send a frame (Collision Detect). Each station waits for a random amount of time before sending again. The time after the collision is divided into time slots; 
Station A and Station B each pick a random slot for attempting a retransmission. Station A and Station B attempt to retransmit in the same slot, they extend the number of slots. Each station then picks a new slot, thereby decreasing the probability of retransmitting in the same slot.
 
**Identifying the Collisions**: The collisions counter does not provide a very useful statistic to analyze network performance or problems.
The station that reports a late collision merely indicates the problem; it is generally not the cause of the problem. Possible causes are usually incorrect cabling or a non-compliant number of hubs in the network. Bad network interface cards (NICs) can also cause late collisions. Excessive collisions indicate a problem. Common causes are devices connected as full-duplex on a shared Ethernet, broken NICs, or simply too many stations on the shared medium. The excessive collisions can be resolved by hardcoding speed and duplex.

Use this command to view collisions:

    show interfaces

### Errors
Errors let us know about the Ethernet is up, down or administratively down. Packets input gives the total number of error-free packets received by the system
bytes. Input gives the total number of bytes, including data and MAC encapsulation, in the error-free packets received by the system.
Input error includes runts, giants, no buffer, CRC, frame, overrun, and ignored counts.

Use this command to view errors:

    show interfaces

 Other input-related errors can also cause the input error count to be increased, and some datagrams may have more than one error, therefore, this sum may not balance with the sum of enumerated input error counts.
 Frame shows the number of packets received incorrectly having a CRC error and a non-integer number of octets.\
  On a LAN, this is usually the result of collisions or a malfunctioning Ethernet device input packets with dribble condition detected gives the dribble bit error, which indicates that a frame is slightly too long. This frame error counter is incremented just for informational purposes, the router accepts the frame output errors gives the sum of all errors that prevented the final transmission of datagrams out of the interface being examined. Note that this may not balance with the sum of the enumerated output errors because some datagrams may have more than one error, and others may have errors that do not fall into any of the specifically tabulated categories.

### Duplex and Speed
Duplex and Speed should match on both ends or else you will have problems. Traffic can still pass with mismatched duplex and speed, but you will experience retransmissions and reduced throughput. To verify duplex and speed run the command

    show interface x/x

 If you want to hard code the speed and duplex on a switch that runs Cisco IOS Software (turn off auto-negotiation), issue the speed and duplex commands underneath the specific interface.
 You might see cyclic redundancy check (CRC) error messages when both the speed and duplex settings are hardcoded on the two devices. This might be because any one of the devices runs an earlier version of Cisco IOS. You can upgrade the Cisco IOS or set the speed and duplex to auto on both devices in order to resolve this.

## Configure Layer 2 protocols