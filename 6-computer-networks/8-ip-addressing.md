# Chapter - 8 IP Addressing
IP address stands for internet protocol address. IP consists of 32 bits logical address. In which value lies  between 0 to 255. There are two versions of IP in use today, IPv4 and IPv6. The original IPv4 protocol is still used today on both the internet, and many corporate networks. However, the IPv4 protocol only allowed for 232 addresses. This, coupled with how addresses were allocated, led to a situation where there would not be enough unique addresses for all devices connected to the internet.

## IPv4
So we know IP addresses are 32 bits long and that they are separated into 4 decimal numbers by dot separation (this is known as dotted decimal), therefore each number must represent 8bits. Just as a reminder a bit is a binary digit, it can only represent a 0 or 1. Any IP address that falls specified ranges is a private IP address and is non-routable on the Internet. These addresses are reserved for use only within private/corporate network and cannot be seen outside the private networks. A Public IP address (External) is assigned to every device that connects to the Internet and each IP address is unique. Therefore, there cannot exist two devices with the same public IP address. This addressing scheme makes it possible for the devices to “find each other” online and exchange information. Each 8 bit group is called an octet.
<p text align="center"><img src="https://miro.medium.com/max/640/1*FIXeYfad7_fJvlnW90ITuQ.png" height="" width=""></p>

### IPv4 Classes
IPv4 consists of 4 classes:
1. **Class A**: In a Class A network, the first eight bits, or the first dotted decimal, is the network part of the address, with the remaining part of the address being the host part of the address. There are 128 possible Class A networks. In class A the first octet is reserved for the Network ID and the rest three are reserved for Host ID.
    
       The range of this class is: 1.0.0.0	to 126.0.0.0

2. **Class B**: In a Class B network, the first 16 bits are the network part of the address. All Class B networks have their first bit set to 1 and the second bit set to 0.  In class B the first and second octet is reserved for the Network ID and the rest two are reserved for Host ID.

       The range of this class is: 128.0.0.0 to 191.255.255.255
3. **Class C**: In a Class C network, the first two bits are set to 1, and the third bit is set to 0. That makes the first 24 bits of the address the network address and the remainder as the host address. In class C the first octet is reserved for the Network ID and the last octet is reserved for Host ID.

       The range of this class is: 192.0.0.0 to 223.255.255.255
4. **Class D**: Class D addresses are used for multi-casting applications. Unlike the previous classes, the Class D is not used for "normal" networking operations.

        The range of this class is: 224.0.0.0 to 239.255.255.255
5. **Class E**: They are already reserved for research purposes. We can't use this IP for personal use.

       The range of this class is: 240.0.0.0 to 255.255.255.255
So, we will always work in the first three classes. We also now can identify an IP is of which class. For eg: 148.120.200.15 is the IP address of which class? I know you will be a bit confused as there are too many numbers which all belongs to different class like 148 is of class B, 120 is of class A, 200 is of class C and 15 again of class A. So you might be thinking that so which class the IP belong. 
To know the class of the IP just keep the first first octet of the IP as it is and make the remaining octet 0. So know the IP becomes 148.0.0.0. By this you can easily tell the class of the IP. The answer is class B. If someone asks you what is the Network ID of this IP? the answer is simple as we have learned above that in class B the first and second octet is reserved for the network ID, so keep the first and second octet of the IP as it is and change the remaining octets to 0. So the Network ID of the above IP is 148.120.0.0.

Let's move on to the next question. So if someone asks you what is the subnet mask of this IP address. Don't worry we will cover the subnetting later in this chapter only. But for now just understand that subnet mask is used to divide an IP address into two parts. One part identifies the host (computer), the other part identifies the network to which it belongs. So to tell the subnet mask of the IP address follow the steps:\
**Step1**: Check the class of the IP which it belong to.\
**Step2**: Once you identified the class then check how many octets are reserved for the network and host in that class.\
**Step3**: So now you know the class and the number of octets and you also know that one octet is of 8 bits and the IP address of total 24 bits due to presence of four octets. So now just write 8 times 1 in the network octets and 8 times 0 in host octet present in that class. Now your IP address will appear in binary form that is 0 and 1. The 8 times make when converted into decimal makes 255. Change the network octet to 255. Bingo! you have made your first subnet mask.\
**Example of Subnet Mask**: Following the above steps find the subnet mask of the IP address 154.191.64.182 ?\
**Step1**: The IP belongs to class B.\
**Step2**: The class B has 2 network octet and 2 host octet.\
**Step3**: So changing the network octets to 8 times 1, the IP address becomes 11111111.11111111.00000000.00000000. Changing binary to decimal 255.255.0.0.\
**Step5**: The subnet mask of the IP address 154.191.64.182 is 255.255.0.0.

The next question is how many usable host you can put in a given IP address ? Usable host means number of computers or nodes that can be connected in a given IP address. To know this just check the number of bits that are reserved for the host ID in that class. Once you find the number of bits then just put that value as power of 2 and reduce the result by  2.\
**For example**: find the number of computer networks that CAN be connected in the IP address given 125.164.235.182?\
So we know that the IP address if of class A which has 1 network ID octet and 3 host ID octet. So the 3 host ID octet means 24 bits.

    The formula is: 2 ^ 24 - 2 = 16777216 - 2 =16777214
This is the number of computers that can be connected in the above given IP address.

The last ques is what is broadcast ID of the given IP address ? A  broadcast address allows information to be sent to all machines on a given subnet rather than to a specific machine. To find the broadcast ID of a given IP just give the maximum number i.e 255 to the host ID octets and network id will be same as given. Then you will get a broadcast ID.

To summarize all the concepts that we have learned above lets solve a question which will cover all the above topics:\
**Question**: Given a IP address 124.251.178.164, find the (i)class, network ID, (ii) subnet mask, (iii) Number of hosts that can be connected in the given IP address, broadcast ID ?\
**Answer**: Given: 124.251.178.164\
(i) This belongs to class A in which there is one Network ID and three Host ID octets. Network ID is 124.0.0.0\
(ii) Subnet Mask will be 255.0.0.0\
(iii) There are 3 host octet in class A which means 24 bits so using formula 2^n-2 where n is the number of bits the answer is 16777214 hosts can be connected. The broadcast ID will be 124.255.255.255
## Subnetting
As the previous example illustrates, the way IP addresses are constructed makes it relatively simple for Internet routers to find the right network to route data into. However, in a Class A network (for instance), there could be millions of connected devices, and it could take some time for the data to find the right device. This is why subnetting comes in handy: subnetting narrows down the IP address to usage within a range of devices.\
Because an IP address is limited to indicating the network and the device address, IP addresses cannot be used to indicate which subnet an IP packet should go to. Routers within a network use something called a subnet mask to sort data into subnetworks.
### What is a subnet mask?
A subnet mask is like an IP address, but for only internal usage within a network. Routers use subnet masks to route data packets to the right place. Subnet masks are not indicated within data packets traversing the Internet — those packets only indicate the destination IP address, which a router will match with a subnet.
### Understanding The Concept
In the below figure there are 2 routers each connected to 2 interface. So for instance we don't know subnetting so we will gibe 4 different networks to all the interface to get connected. As router is a device use to interconnect networks which means to connect two different networks we need a router. So we give 10.0.0.0 network ID to interface 1 which has 10 hosts. We give 194.0.0.0 network ID to interface 2 which has 15 hosts. We give 142.0.0.0 network ID to interface 3 which has 50 hosts and 164.0.0.0 to interface 4 which has 20 hosts and a random IP for the 5th interface. 

Without subnetting so many IP address are wasted. Earlier when IP address was invented the makers did not thought that one day there will be shortage of IP addresses due to so much demand. Like in interface 1 we have an IP address of class A in which we can connect 16777214 number of hosts but we are connecting only 10, you see how many IP address are wasted in this case only and we only have 5 interfaces what if we have 20 interfaces. So many IP's would be wasted .\
Then, to overcome this problem Subnetting was invented which in simple words means making a network in a network or we can say logically division of network.

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93569805-b507c600-f9af-11ea-947c-7889dc1b6f6e.png"></p>

So how we will do the subnetting, for this we need a IP address. Lets assume the IP address be 12.10.10.0/8 where 8 is the CIDR of class A. To make it simple to understand I have made steps to make do subnetting you have to just follow these simple steps and you will be then able to do subnetting:

**Step1**: Write down the network ID of the given IP address, NID will be 12.0.0.0 which will be same as IP address and in class A we have 1 NID octet and 3 HID octet.\
**Step2**: Then convert the HID octet into binary form as one octet is of 8 bits in this case it will be 12.00000000.00000000.00000000\
**Step3**: Now check the greatest number of hosts required in the network in this case it is 50 hosts. The use the formula 

    2 ^ n - 2 >= 50(this will be highest number of hosts required in the network)
Then satisfy the condition in this case the condition is satisfied by n=6.\
**Step4**: Now we have to borrow 2 bits from HID. To borrow bits start from the rightmost side of the IP address which we have made in step2. Then we have to move from right to left, just leave the 6 bits as it is and make the rest bits of HID to 1. Now the IP address has become 197.11111111.11111111.11000000. This means HID has given its 18 bits to Network, as 1 is used to represent network and 0 is used to represent host. Bingo! you have done the subnetting, you see how much easy it was. I know that you will say how, when the subnetting is done. Let me explain, the sharing of the bits of Host with Network is known as subnetting.\
**Step5**: Now we just have to change the host part i.e 12.11111111.1111111.11000000 to decimal which will be 12.255.255.192. Now we have to calculate the subnet, the general subnet of class A is 255.0.0.0 but after subnetting the subnet mask has become 255.255.255.192 just put the host part that we got from the step4.\
**Step6**: Now we have a subnet mask but are target is to break a network into parts for this we need to make subnets for this note the IP address we made in step4 i.e 12.1111111.11111111.11000000. Now grab the 1 which you will encounter first while moving from right to left. Note down its decimal place in this case it is 64.\
 1st subnet will be 12.0.0.0\
 2nd subnet will be made by adding 64 in the previous subnet, this will become 12.0.0.64\
 3rd subnet 12.0.0.128\
 4th subnet 12.0.0.192\
 5th subnet 12.0.0.256 here 256 value is not possible in any octet the maximum value is 255 so we will increase the value from 0 to 1 in the next octet.\
 5th subnet will be 12.0.1.0 like this you can make futher subnets.
 ## VLAN
 VLAN is a logical grouping of networking devices. When we create VLAN, we actually break large broadcast domain in smaller broadcast domains. 
### Example
If we have 4 computers connected to a single switch let the name be C1, C2 , C3, C4. C1 and C2 are working together as team A and C3 and C4 are working together as team B. We do not want to disturb any team with the conversation held between members of different teams. I mean like when team A talks with one another that message should not be sent to team B and vice-versa. So for this we will use VLAN.\
 Let us now configure VLAN in Packet Tracer with the following steps:

**Step1**: Connect the 4 computers or nodes with a switch. Provide the IP address to each of the node and try to ping one node from other. If ping has got successful then move to step2.

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93706208-9cc7b080-fb41-11ea-9520-fb45ca2002c5.png" height="" width=""></p>

**Step2**: Now double click on switch and select CLI(command line interface). Once you entered in CLI now enable the switch by using command

    en
 Then press enter now your switch is enabled.\
**Step3**: Now we have to configure the switch, for this we will get into configuration mode by using command  

     conf t
This will take us into configuration terminal of switch.\
**Step4**: To check the VLAN connection write the command
    
    show vlan
 This command will show you the default VLAN configurations of the switch.\
 **Step5**: Now we have to configure 2 VLAN's one for Team A and the other for Team B for this we to put the team A computers in one VLAN and Team B computers in other VLAN by using command:

    conf t
    vlan A
    name TEAM A
    exit
    vlan B
    name TEAM B
    exit 
    Ctrl+z
Now we have successfully activated 2 VLAN's one is vlan A and the other is vlan B to see this just use the command:

    show vlan  
There you can see our entries are updated.\
**Step6**: Now we will one by one put these computers in these VLAN's for this use commands:

    conf t
    int fa0/1
    switchport mode access
    switchport access vlan 2
    exit [this will intialize the computer present at port 1 in VLAN 2]
    int fa0/2
    switchport mode access
    switchport access vlan 2
    exit   [this will intialize the computer present at port 2 in VLAN 2]
    int fa0/3
    switchport mode access
    switchport access vlan 3
    exit  [this will intialize the computer present at port 3 in VLAN 3]
    int fa0/4
    switchport mode access
    switchport access vlan 3
    exit  [this will intialize the computer present at port 4 in VLAN 3]
Now if you try to ping computer in VLAN B bya computer in VLAN A there will be connection time out message will appear which means we have successfully configured the VLAN setup.\
This is the result when I tried to ping a Team B computer from team A computer.
<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93597811-4a6b8000-f9d9-11ea-8da0-74ab0a974889.png"></p>

This is the result when I tried to ping a Team A computer from Team B computer.
<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/93597818-4d667080-f9d9-11ea-8a3a-0ac28832a22a.png"></p>

## Summary
i guess this would be the most interesting chapter for you we learned a lot of new things which are very important and mostly people don't understand them but I have explained it in easiest. By the end of the day we have learned all about the IPv4 addressing, Subnetting and also we have configured VLAN for two teams. 

In the next chapter we will learn about Routing Protocols.\
![edit2](https://img.shields.io/static/v1?label=Source&message=Self&color=yellow)![edit](https://img.shields.io/static/v1?label=PRs&message=Welcome&color=<COLOR>)[![Awesome](https://cdn.rawgit.com/sindresorhus/awesome/d7305f38d29fed78fa85652e3a63e154dd8e8829/media/badge.svg)](https://github.com/sindresorhus/awesome#readme)

 