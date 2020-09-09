# Chapter - 3 OSI MODEL
The OSI model stands for the “Open Systems Interconnection model”. It is a conceptual model that is used to understand computer networks. So why is this conceptual model used? 
Because networks are complex. The model uses layers to help give a high-level description of what is going on within a particular networking system. It describes what goes on in a communication system without going into the details of its underlying technology. The structure of the OSI model allows people to discuss problems going on in a networking system and discuss the relationships between the components of a system more easily.
For example, two computer connected with each other through LAN and connectors and sharing the data through NIC(network interface card) forms a network. But if, one computer is using the windows system and other is using the mac operating system then how they are going to communicate? So in order to accomplish successful communication between the two systems the OSI model containing seven different layers was introduced in 1984. So lets now understand what are these seven layers of OSI Model.

## Layers In OSI Model
The OSI model consists of seven different layers as follows. You can remember the layer names with one simple phrase:\
**All People Seem To Need Data Processing (APSTNDP)**. So lets see the seven layers:

<p text align="center"><img src="https://www.guru99.com/images/1/092119_0729_LayersofOSI1.png" height="" width=""></p>

### 1. Application layer

The application layer is the layer that is closest to the end-user. I like to call it the “interface layer” because functionalities implemented at this level are the ones that users interact with directly. For example, Firefox, Skype and your local email client are all application-level software.
This layer takes user input, and input from other applications to produce the data to be transferred over the network. And when data is coming in from the network, it works on displaying or storing this data to the end-user.

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/92609621-6b92e900-f2d4-11ea-98b1-273dedad2107.png"></p>

### 2. Presentation layer
The Presentation Layer represents the area that is independent of data representation at the application layer. In general, it represents the preparation or translation of application format to network format, or from network formatting to application format. In other words, the layer “presents” data for the application or the network.

 For example, if your company is in Delhi and wants to send some documents to a french company then this layer will convert your document language from English to French. Like this you will be able to send the data in the receiver understandable form. It also compress the data into lower space like if a document is of 10MB then after data compression the document will become of 5MB. To maintain the integrity of data before transmission data is encrypted. Encryption enhances the safety of the data. At the sender side data is encrypted and at the receiver side data is decrypted. SSL is used for the data encryption and decryption.

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/92610022-dcd29c00-f2d4-11ea-9e88-ea24b8ecd118.png"></p>

### 3. Session layer
The session layer manages a session by initiating the opening and closing of sessions between end-user application processes. This layer also controls single or multiple connections for each end-user application, and directly communicates with both the presentation and the transport layers. The services offered by the session layer are generally implemented in application environments using remote procedure calls (RPCs).

Sessions are most commonly implemented on Web browsers using protocols such as the Zone Information Protocol, the AppleTalk Protocol and the Session Control Protocol. These protocols also manage session restoration through checkpointing and recovery.

The session layer supports full-duplex and half-duplex operations and creates procedures for checkpointing, adjournment, restart and termination. The session layer is also responsible for synchronizing information from different sources. For example, sessions are implemented in live television programs in which the audio and video streams emerging from two different sources are merged together. This avoids overlapping and silent broadcast time.

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/92611522-84040300-f2d6-11ea-9271-0f3933129d9e.png"></p>

### 4. Transport layer
The transport layer is the “traffic control” of networks. Some examples of protocols in this layer include TCP (Transmission Control Protocol) and UDP (User Datagram Protocol). The UDP is much faster than TCP but UDP does not provide any feedback that the data is successfully delivered or not whereas TCP provides feedback which means lost data can be re-transmitted in TCP.
This layer controls host-to-host data transfer and dictates how much data to send at once, how fast to send it and who to send it to. It takes care of the data segmentation and reassembly, as well as flow and error control.

**1. Data segmentation**: means dividing up the data into smaller chunks prior to transmission. It is needed when the data being sent is larger than the maximum transmission unit supported by the network, or anytime when sending smaller amounts of data at a time is beneficial. Upon receiving segmented data, the transport layer protocols will also take care of reassembling the data back to its original state.

**2. Flow and error control** is also an important part of ensuring the proper functioning of a network. When too much data is being sent at a time, network congestions may happen. Then, it is up to the transport layer protocols to decide which data to send first and in what order to send them in to achieve maximum overall efficiency. Still, sometimes, data packets arrive corrupted or out of order. How to recover the original data if that happens is also the task of this layer.

For example,  consider our mobile is connected to a server and server can transmit the data at a speed of 100MBps but our mobile can only process data maximum at 10MBps. Now if we are downloading a file from the server then it will start transmitting data at a speed of 100MBps but our phone can only process data at maximum 10MBps so in this case with the help of transport layer can tell the server to slow down data transmission rate to 10mbps similarly if server is sending the data at 5mbps then mobile phone tells the server to increase the speed to 10mbps with the help of this layer.  

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/92611935-f1179880-f2d6-11ea-9f8a-4f8f817ae708.png"></p>

### 5. Network layer
The network layer is the “post office” of networks. It takes care of the routing of data from its source to its destination. Important protocols of this layer are the Internet Protocol (IP) and various routing protocols.
In order to get from spot A to spot B on any complex network, data needs to be transmitted across the network. But where is spot B? How does the data get there? These are all tasks that the network layer is responsible for.
For example, where is the server that stores the homepage of civicinstinct.com? Where on the network is it located? The IP protocol uniquely identifies devices on the network so that the destination of each transmission can be located.
And in order for your browser to connect to a server across the country, there are a million paths that the data can take. Routing protocols help data travel on an efficient path to the destination.
For example, computer A is connected to network-1 and computerB is connected to network-2. Now computer-B has requested to access facebook.com.  Now there is a reply from Facebook server in the form of packet which has to be delivered to computer-B only. Since in a network each system has a unique IP address. Network layer of Facebook server has already added the sender and receiver address on the packet. So based on IP address on packet the received data packet will first move to the network-2 and then to computer-B.  

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/92609284-0939e880-f2d4-11ea-80b6-26d26c2523aa.png"></p>


### 6. Data Link layer
Once the network layer identifies where to send the data, the data link layer takes care of the data transfer between neighbouring network elements. It ensures that the data transfer is error-free over the physical layer.\
The functionality implemented in this layer includes physical addressing, framing, and error and flow control.
Physical addressing refers to the addressing after a packet has arrived at the local network. To the Internet at large, machines on the same local network may have the same IP address. If that is the case, MAC addresses must be used to locate the right recipient of the message.\
Framing is a way to make sure that sets of bits that are transmitted are understandable to the receiver. This is accomplished by attaching special bit patterns to the beginning and end of the frame.\
This layer is responsible for making sure that all frames arrive at its correct destination when a communication channel is shared by multiple connections. It also ensures that frames arrive error-free by detecting and retransmitting damaged and lost frames.

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/92610364-3f2b9c80-f2d5-11ea-8d10-fa8720beccde.png"></p>

### 7. Physical layer
And at last, we have the physical layer. The physical layer is the lowest layer of the OSI model and refers to the part of the network that is responsible for the actual transfer of bits “on the wire”. You can think of this layer as the “hardware layer”. Implementation questions in this layer include the choice of cable type, network layout, and radio frequencies.

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/92610697-a21d3380-f2d5-11ea-9706-21ef0a68dd06.png"></p>

### Advantages of the OSI Model
Here, are major benefits/pros of using the OSI model :


1. Protocols can be replaced by new protocols when technology changes
2. Provide support for connection-oriented services as well as connectionless service
3. It is a standard model in computer networking
4. Supports connectionless and connection-oriented services
5. Offers flexibility to adapt to various types of protocols

### Disadvantages of the OSI Model
Here are some cons/ drawbacks of using OSI Model:

1. Fitting of protocols is a tedious task.
2. You can only use it as a reference model.
3. Doesn't define any specific protocol.
4. Layers can't work in parallel as each layer need to wait to obtain data from the previous layer.

## TCP/IP Model
TCP/IP that is Transmission Control Protocol and Internet Protocol was developed by Department of Defence's Project Research Agency (ARPA, later DARPA) as a part of a research project of network interconnection to connect remote machines.

The features that stood out during the research, which led to making the TCP/IP reference model were support for a flexible architecture. Adding more machines to a network was easy. The network was robust, and connections remained intact until the source and destination machines were functioning.
The overall idea was to allow one application on one computer to talk to(send data packets) another application running on different computer.
When TCP/IP arrived on the scene, it had to conform to the seven layers in the OSI model, but it made things easier on everyone by combining them into the following layers:
1. Application layer
2. Transport layer
3. Internet layer
4. Network access layer (Subnet)

The following figure shows comparison and relationships of OSI and TCP/IP.

<p text align="center"><img src="https://miro.medium.com/max/440/0*3ni9FH3-Cv6oRNIq.gif"></p>

### 1. Application Layer
Application layer interacts with an application program, which is the highest level of OSI model. The application layer is the OSI layer, which is closest to the end-user. It means the OSI application layer allows users to interact with other software application.

Application layer interacts with software applications to implement a communicating component. The interpretation of data by the application program is always outside the scope of the OSI model. Example of the application layer is an application such as file transfer which uses FTP protocol, email which uses SMTP protocol, etc.

### 2. Transport Layer
Transport layer builds on the network layer in order to provide data transport from a process on a source system machine to a process on a destination system. It is hosted using single or multiple networks, and also maintains the quality of service functions.

It determines how much data should be sent where and at what rate. This layer builds on the message which are received from the application layer. It helps ensure that data units are delivered error-free and in sequence.

Transport layer helps you to control the reliability of a link through flow control, error control, and segmentation or de-segmentation.
The transport layer also offers an acknowledgment of the successful data transmission and sends the next data in case no errors occurred. TCP is the best-known example of the transport layer.

### 3. Internet Layer
An internet layer is a second layer of the TCP/IP model. It is also known as a network layer. The main work of this layer is to send the packets from any network, and any computer still they reach the destination irrespective of the route they take.

The Internet layer offers the functional and procedural method for transferring variable length data sequences from one node to another with the help of various networks.

Message delivery at the network layer does not give any guaranteed to be reliable network layer protocol.

### 4. The Network Interface Layer
Network Interface Layer is this layer of the four-layer TCP/IP model. This layer is also called a network access layer. It helps you to defines details of how data should be sent using the network.

It also includes how bits should optically be signaled by hardware devices which directly interfaces with a network medium, like coaxial, optical, coaxial, fiber, or twisted-pair cables.

A network layer is a combination of the data line and defined in the article of OSI reference model. This layer defines how the data should be sent physically through the network. This layer is responsible for the transmission of the data between two devices on the same network.

### Advantages of TCP/IP
Here, are pros/benefits of using the TCP/IP model:

1. It helps you to establish/set up a connection between different types of computers.
2. It operates independently of the operating system.
3. It supports many routing-protocols.
4. It enables the internetworking between the organizations.

### Disadvantages of TCP/IP
Here, are few drawbacks of using the TCP/IP model:

1. TCP/IP is a complicated model to set up and manage.
2. In this, model the transport layer does not guarantee delivery of packets.
3. Replacing protocol in TCP/IP is not easy.
## Summary
Above we studied about the OSI Model which is a reference model and has seven layers. Later we learned about TCP/IP Model which is a implemented model and it has four layers.

In the next chapter we will discuss about transmission media.

![edit2](https://img.shields.io/static/v1?label=Source&message=https://medium.com&color=red)![edit](https://img.shields.io/static/v1?label=PRs&message=Welcome&color=<COLOR>)[![Awesome](https://cdn.rawgit.com/sindresorhus/awesome/d7305f38d29fed78fa85652e3a63e154dd8e8829/media/badge.svg)](https://github.com/sindresorhus/awesome#readme)