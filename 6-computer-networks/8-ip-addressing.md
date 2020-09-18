# Chapter - 8 IP Addressing
IP address stands for internet protocol address. IP consists of 32 bits logical address. In which value lies  between 0 to 255. There are two versions of IP in use today, IPv4 and IPv6. The original IPv4 protocol is still used today on both the internet, and many corporate networks. However, the IPv4 protocol only allowed for 232 addresses. This, coupled with how addresses were allocated, led to a situation where there would not be enough unique addresses for all devices connected to the internet.

## IPv4
So we know IP addresses are 32 bits long and that they are separated into 4 decimal numbers by dot separation (this is known as dotted decimal), therefore each number must represent 8bits. Just as a reminder a bit is a binary digit, it can only represent a 0 or 1.
Each 8 bit group is called an octet.

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

Let's move on to the next question. So if someone asks you what is the subnet mask of this IP address. Don't worry we will cover the subnetting in this chapter only. But for now just understand that subnet mask is used to divide an IP address into two parts. One part identifies the host (computer), the other part identifies the network to which it belongs. So to tell the subnet mask of the IP address follow the steps:

**Step1**: Check the class of the IP which it belong to.\
**Step2**: Once you identified the class then check how many octets are reserved for the network and host in that class.\
**Step3**: So now you know the class and the number of octets and you also know that one octet is of 8 bits and the IP address of total 24 bits due to four octet. So now just write 8 times 1 in the network octets and 8 times 0 in host octet present in that class.\
**Step4**: Now your IP address will appear in binary form that is 0 and 1. The 8 times make when converted into decimal makes 255. Change the network octet to 255.\
**Step5**: Bingo! you have made your first subnet mask.

**Example of Subnet Mask**: Following the above steps find the subnet mask of the IP address 154.191.64.182 ?

**Step1**: The IP belongs to class B.\
**Step2**: The class B has 2 network octet and 2 host octet.\
**Step3**: So changing the network octets to 8 times 1, the IP address becomes 11111111.11111111.00000000.00000000.\
**Step4**: Changing binary to decimal 255.255.0.0.\
**Step5**: The subnet mask of the IP address 154.191.64.182 is 255.255.0.0.

The question is how many usable host you can put in a given IP address ? Usable host means number of computers or nodes that can be connected in a given IP address. To know this just check the number of bits that are reserved for the host ID in that class. Once you find the number of bits then just put that value as power of 2 and reduce the result by  2.\
**For example**: find the number of computer networks that CAN be connected in the IP address given 125.164.235.182?

So we know that the IP address if of class A which has 1 network ID octet and 3 host ID octet. So the 3 host ID octet means 24 bits.

    The formula is: 2 ^ 24 - 2 = 16777216 - 2 =16777214

This is the number of computers that can be connected in the above given IP address.

The last ques is what is broadcast ID of the given IP address ? A  broadcast address allows information to be sent to all machines on a given subnet rather than to a specific machine. To find the broadcast ID of a given IP just give the maximum number i.e 255 to the host ID octets and network id will be same as given. Then you will get a broadcast ID.

To summarize all the concepts that we have learned above lets solve a question which will cover all the above topics:

**Question**: Given a IP address 124.251.178.164, find the (i)class, (ii) network ID, (iii) subnet mask, (iv) Number of hosts that can be connected in the given IP address, (v) broadcast ID ?

**Answer**: Given: 124.251.178.164

(i) This belongs to class A in which there is one Network ID and three Host ID octets.

(ii) Network ID is 124.0.0.0

(iii) Subnet Mask will be 255.0.0.0

(iv) There are 3 host octet in class A which means 24 bits so using formula 2^n-2 where n is the number of bits the answer is 16777214 hosts can be connected.

(v) The broadcast ID will be 124.255.255.255  

## Subnetting
