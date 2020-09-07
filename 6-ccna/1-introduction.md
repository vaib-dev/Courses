# Chapter - 1 Introduction

A computer network is a group of computers that use a set of common communication protocols over digital interconnections for the purpose of sharing resources located on or provided by the network nodes. The interconnections between nodes are formed from a broad spectrum of telecommunication network technologies, based on physically wired, optical, and wireless radio-frequency methods that may be arranged in a variety of network topologies.

The nodes of a computer network may be classified by many means as personal computers, servers, networking hardware, or general purpose hosts. They are identified by host-names and network addresses. Host-names serve as memorable labels for the nodes, rarely changed after initial assignment. Network addresses serve for locating and identifying the nodes by communication protocols such as the Internet Protocol. So now you are aware of what is computer network, lets first understand that how is data communicated between the computers.

## Data Communication
Data Communication is defined as the exchange of data between two devices via some form of transmission media such as a cable, wire or it can be air or vacuum also. For a occurrence of data communication, communicating devices must be a part of an communication system made up of a combination of hardware or software devices and programs.

### Data Communication System Components :
There are mainly five components of a data communication system:

<p text align="center"><img src="https://lh3.googleusercontent.com/proxy/fm0WtaNumwCgOthKnJoOEkERinMkmvnuMHLGWt_fvOHqaJriWa3L0bQA8UtAIX_FLcYKRArQGmZpsMYN9WHUjDEbfCr4KSBMO4Mg22KLOnXC1Ci43NJDPjUjBfPYL87ECvKF0JogXiU" height="" width=""></p>

**1. Message:** For computers and other electronic devices, when messages are sent they take the form of analog or digital signals.
Analog transmissions are broadcast as a wave and the protocol of the signal knows where each part of the wave corresponds to a particular part of data. so the peak of the wave may be an A, the trough of the wave B.

Digital transmission is via a series of voltage pushes, where a positive ‘push’ equals 1, and no push is 0. The sequence can then be translated to bits.

**2. Sender:** To transfer message from source to destination, someone must be there who will play role of a source. Sender plays part of a source in data communication system. It is simple a device that sends data message. The device could be in form of a computer, mobile, telephone, laptop, video camera, or a workstation, etc.

**3. Receiver:** It is destination where finally message sent by source or sender has arrived. It is a device that receives message. Same as sender, receiver can also be in form of a computer, telephone mobile, workstation, etc.

**4. Transmission Medium:** The way in which data is transmitted from one device to another device is known as transmission mode. The transmission mode is also known as the communication mode. Each communication channel has a direction associated with it, and transmission media provide the direction. Therefore, the transmission mode is also known as a directional mode.

There are two ways to transmit:

a) **Guided:** The message is sent directly to where it is supposed to go. Taking our non-computer analogy, this would be a letter. Only the receiver receives the sent data. In the case of computers. This is primarily via cables, such as Twisted Pair, Coax or Fibre Optics.\
b) **Unguided:** The message is broadcast so that anyone can receive it, For non-computer analogy, this would be talking in a crowded (but quiet room, maybe a library!) anyone within range can receive the signal. For computers, this is primarily WiFi or Bluetooth.

These transmissions can be sent in three different modes:

a) **Simplex:** only the sender can transmit.
Half duplex, the sender and receiver can transmit but not at the same time.\
b) **Full duplex:** both the sender and receiver can send at the same time.

**5. Set of rules (Protocol):** To govern data communications, various sets of rules had been already designed by the designers of the communication systems, which represent a kind of agreement between communicating devices. These are defined as protocol. If two different devices are connected but there is no protocol among them, there would not be any kind of communication between those two devices. Thus the protocol is necessary for data communication to take place.

**Example of Data Communication:** A typical example of a data communication system is sending an e-mail. The user which send email act as sender, message is data which user wants to send, receiver is one whom user wants to send message, there are many protocols involved in this entire process, one of them is Simple Mail Transfer Protocol (SMTP), both sender and receiver must have an internet connection which uses a wireless medium to send and receive email.

## Networks
So as now we know that how the data is transmitted from one computer to another, now the question arises what is a network?. Generally, networks are distinguished based on their geographical span. A network can be as small as distance between your mobile phone and its Bluetooth headphone and as large as the internet itself, covering the whole geographical world.

### Types of networks:

### 1. Personal Area Network
A Personal Area Network (PAN) is smallest network which is very personal to a user. This may include Bluetooth enabled devices or infra-red enabled devices. PAN has connectivity range up to 10 meters. PAN may include wireless computer keyboard and mouse, Bluetooth enabled headphones, wireless printers and TV remotes.

<p text align="center"><img src="https://www.tutorialspoint.com/data_communication_computer_network/images/Bluetooth.jpg" height="" width=""></p>

### 2. Local Area Network
A computer network spanned inside a building and operated under single administrative system is generally termed as Local Area Network (LAN). Usually,LAN covers an organization’ offices, schools, colleges or universities. Number of systems connected in LAN may vary from as least as two to as much as 16 million.

LAN provides a useful way of sharing the resources between end users.The resources such as printers, file servers, scanners, and internet are easily sharable among computers.

<p text align="center"><img src="https://www.tutorialspoint.com/data_communication_computer_network/images/LAN.jpg" height="" width=""></p>

### 3. Metropolitan Area Network
The Metropolitan Area Network (MAN) generally expands throughout a city such as cable TV network. It can be in the form of Ethernet,Token-ring, ATM, or Fiber Distributed Data Interface (FDDI).

Metro Ethernet is a service which is provided by ISPs. This service enables its users to expand their Local Area Networks. For example, MAN can help an organization to connect all of its offices in a city.

<p text align="center"><img src="https://www.tutorialspoint.com/data_communication_computer_network/images/MAN.jpg" height="" width=""></p>

### 4. Wide Area Network
As the name suggests,the Wide Area Network (WAN) covers a wide area which may span across provinces and even a whole country. Generally, telecommunication networks are Wide Area Network. These networks provide connectivity to MANs and LANs. Since they are equipped with very high speed backbone, WANs use very expensive network equipment.

<p text align="center"><img src="https://www.tutorialspoint.com/data_communication_computer_network/images/WAN.jpg" height="" width=""></p>


### Distributed Processing
Distributed data processing is a computer-networking method in which multiple computers across different locations share computer-processing capability. This is in contrast to a single, centralized server managing and providing processing capability to all connected systems. Computers that comprise the distributed data-processing network are located at different locations but interconnected by means of wireless or satellite links.

### Network Criteria
There are mainly six types of criteria that a network must provide:

**1. Performance**: It is the defined as the rate of transferring error free data. It is measured by the Response Time. Response Time is the elasped time between the end of an inquiry and the beginning of a response. Request a file transfer and start the file transfer. Factors that affect Response Time are:

a) **Number of Users**: More users on a network - slower the network will run\
b) **Transmission Speed**: speed that data will be transmitted measured in bits per second (bps)\
c) **Media Type**: Type of physical connection used to connect nodes together\
d)  **Hardware Type**: Slow computers such as XT or fast such as Pentiums\
e) **Software Program**: How well is the network operating system (NOS) written

**2. Consistency**: Consistency is the predictability of response time and accuracy of data. The problems that occurs when your network has consistency issues:

a) Users prefer to have consistent response times, they develop a feel for normal operating conditions. For example: if the "normal" response time is 3 sec. for printing to a Network Printer and a response time of over 30 sec happens, we know that there is a problem in the system!

b) Accuracy of Data determines if the network is reliable! If a system loses data, then the users will not have confidence in the information and will often not use the system.

**3. Reliability**: Reliability is the measure of how often a network is useable. MTBF (Mean Time Between Failures) is a measure of the average time a component is expected to operate between failures. Normally provided by the manufacturer. A network failure can be: hardware, data carrying medium and Network Operating System.

**4. Recovery**: Recovery is the Network's ability to return to a prescribed level of operation after a network failure. This level is where the amount of lost data is nonexistent or at a minimum. Recovery is based on having Back-up Files.

**5. Security**: Security is the protection of Hardware, Software and Data from unauthorized access. Restricted physical access to computers, password protection, limiting user privileges and data encryption are common security methods. Anti-Virus monitoring programs to defend against computer viruses are a security measure.

### Applications

Computer network applications are network software applications that utilize the Internet or other network hardware infrastructure to perform useful functions for example file transfers within a network. They help us to transfer data from one point to another within the network.

There are 2 types of network applications:-

**1. Pure network applications**: These are applications created to be used in networks; using pure network applications on a single computer doesn't make sense. They help us to transfer data and communicate within a network. Such applications have a separate and distinct user interface that users must learn for instance:-

a)  Email Programs: They allow users to type messages at their local nodes and then send to someone on the network. It is a fast and easy way of transferring mail from one computer to another.

b) File Transfer Protocol (FTP): This application facilities transfer of files from one computer to another e.g. from a client to a server. 

c) Groupware: These applications are used to automate the administrative functions of a modern office for instance video conferencing and chatting. They facilitate the work of groups and improve on their productivity; they can be used to communicate, co-operate, coordinate, solve problems, compete, negotiate among others.

**2. Standalone network application**:

These are applications that run on stand-alone computers (computers not connected to any other). In order to extend their activity, they are rebuilt to run on network environments e.g. word processors, spreadsheets, database management systems, presentations graphics, project management etc. They function even when the computer is offline.

## Protocols and Standards

A protocol is a particular set of rules for having a conversation between two computers to convey a specific set of information. A standard (and in the networking arena, many protocols are standards) is a document that specifies something that has the overwhelming support and agreement of the standards making body. Below we will discuss the protocol and standards in brief:

### 1. Protocols
In computer networks, communication occurs between entities in different systems. An entity is anything capable of sending or receiving information.

A protocol is a set of rules that govern data communications. A protocol defines what is communicated, how it is communicated, and when it is communicated. The key elements of a protocol are syntax, semantics, and timing.

**1. Syntax**: The term syntax refers to the structure or format of the data, meaning the order in which they are presented. For example, a simple protocol might expect the first 8 bits of data to be the address of the sender, the second 8 bits to be the address of the receiver, and the rest of the stream to be the message itself.

**2. Semantics**: The word semantics refers to the meaning of each section of bits. How is a particular pattern to be interpreted, and what action is to be taken based on that interpretation? For example, does an address identify the route to be taken or the final destination of the message?

**3. Timing**: The term timing refers to two characteristics: when data should be sent and how fast they can be sent. For example, if a sender produces data at 100 Mbps but the receiver can process data at only 1 Mbps, the transmission will overload the receiver and some data will be lost.

### 2.  Standards:
Standards are essential in creating and maintaining an open and competitive market for equipment manufacturers and in guaranteeing national and international interoperability of data and telecommunications technology and processes. Standards provide guidelines to manufacturers, vendors, government agencies, and other service providers to ensure the kind of inter-connectivity necessary in today's marketplace and in international communications. Data communication standards fall into two categories: de facto (meaning "by fact" or "by convention") and de jure (meaning "by law" or "by regulation") as discuused below:

1. **De facto**: Standards that have not been approved by an organized body but have been adopted as standards through widespread use are de facto standards. De facto standards are often established originally by manufacturers who seek to define the functionality of a new product or technology. Examples of de facto standards include: the QWERTY keyboard, the Windows operating system.

2. **De jure**: Those standards that have been legislated by an officially recognized body are de jure standards. Examples of de jure standards include: ISO(International standard organization), ASCII(American Standard Code for Information Interchange), IEEE(Institute of Electrical and Electronics Engineers) etc.

## Summary

Above we have covered data communication, networks and network criteria. At last, we have discussed about protocols and standards.

In the next chapter we will learn about basic concepts of computer networks.

![edit2](https://img.shields.io/static/v1?label=Source&message=https://beginnersbook.com&color=red)![edit](https://img.shields.io/static/v1?label=PRs&message=Welcome&color=<COLOR>)[![Awesome](https://cdn.rawgit.com/sindresorhus/awesome/d7305f38d29fed78fa85652e3a63e154dd8e8829/media/badge.svg)](https://github.com/sindresorhus/awesome#readme)
