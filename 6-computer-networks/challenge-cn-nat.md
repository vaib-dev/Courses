# Challenge - NAT(Network Address Translation) Protocol

To access the Internet, one public IP address is needed, but we can use a private IP address in our private network. The idea of NAT is to allow multiple devices to access the Internet through a single public address. To achieve this, the translation of private IP address to a public IP address is required. Network Address Translation (NAT) is a process in which one or more local IP address is translated into one or more Global IP address and vice versa in order to provide Internet access to the local hosts. Also, it does the translation of port numbers i.e. masks the port number of the host with another port number, in the packet that will be routed to the destination. It then makes the corresponding entries of IP address and port number in the NAT table. NAT generally operates on router or firewall.\
 NAT is configured in two directions: inbound and outbound. Outbound NAT defines how traffic leaving a local network destined for a remote network, such as the Internet is translated. Inbound NAT refers to traffic entering a network from a remote network.

## Network Address Translation (NAT) Types
There are 2 ways to configure NAT:

### 1. Static NAT 
 In this, a single unregistered (Private) IP address is mapped with a legally registered (Public) IP address i.e one-to-one mapping between local and global address. This is generally used for Web hosting. These are not used in organizations as there are many devices who will need Internet access and to provide Internet access, the public IP address is needed.

Suppose, if there are 3000 devices who need access to the Internet, the organization have to buy 3000 public addresses that will be very costly.

**Configuring Static NAT**:

    router (config)#ip nat inside source static 192.168.1.2 10.0.0.2
    router (config)# ip nat inside source static 192.168.1.3 10.0.0.3 
    ....

**Implementation of static NAT**:

       router (config)#int fa0/0
       router(config-it)#ip nat inside
       router(config-it)#exit

       router(config)#int se0/0/0
       router(config-it)#ip nat outside
       router(config-it)#exit  

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/94125687-4d042480-fe74-11ea-86e8-d07c1d4c4c91.png"></p>

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/94125695-51304200-fe74-11ea-8760-2131d73bea42.png"></p>

### 2. Dynamic NAT 
 In this type of NAT, an unregistered IP address is translated into a registered (Public) IP address from a pool of public IP address. If the IP address of pool is not free, then the packet will be dropped as an only a fixed number of private IP address can be translated to public addresses.

Suppose, if there is a pool of 2 public IP addresses then only 2 private IP addresses can be translated at a given time. If 3rd private IP address wants to access Internet then the packet will be dropped therefore many private IP addresses are mapped to a pool of public IP addresses. NAT is used when the number of users who wants to access the Internet is fixed. This is also very costly as the organisation have to buy many global IP addresses to make a pool.

**Configuring Dynamic NAT**:
              
    router(config)#access-list 5 permit 192.168.2.0 255.255.255.0
    router(config)#ip nat pool ccna 10.0.0.2 10.0.0.6 netmask 255.0.0.0
    router(config)#ip nat inside source list 5 pool ccna     

**Implementation Dynamic NAT**:

       router (config)#int fa0/0
       router(config-it)#ip nat inside
       router(config-it)#exit

       router(config)#int se0/0/0
       router(config-it)#ip nat outside
       router(config-it)#exit  
      

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/94126586-6c4f8180-fe75-11ea-881c-c939f4649853.png"></p>

<p text align="center"><img src="https://user-images.githubusercontent.com/54719422/94126596-6e194500-fe75-11ea-8917-41dfd7544ba5.png"></p>

## Applications

NAT can be used in many ways like:
1.  NAT is to limit the number of public IP addresses an organization or company must use, for both economy and security purposes.

2. NAT is used in avoiding IP address overlapping. Address overlapping occurs when hosts in different networks with the same IP address space try to reach the same destination host. 

3. In client-server applications, load balancers forward client requests to a set of server computers to manage the work load of each server. NAT may be used to map a representative IP address of the server cluster to specific hosts that service the request.
4. NAT can be used to allow selective access to the outside of the network, too. Workstations or other computers requiring special access outside the network can be assigned specific external IPs using NAT, allowing them to communicate with computers and applications that require a unique public IP address.