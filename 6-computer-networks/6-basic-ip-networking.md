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

1. 



<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93015902-da28bd00-f5da-11ea-9308-61384d73e6b0.png" height="" width=""></p>
