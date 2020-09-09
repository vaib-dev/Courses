# Chapter - 3 OSI MODEL

The OSI model stands for the “Open Systems Interconnection model”. It is a conceptual model that is used to understand computer networks. So why is this conceptual model used? 
Because networks are complex. The model uses layers to help give a high-level description of what is going on within a particular networking system. It describes what goes on in a communication system without going into the details of its underlying technology. The structure of the OSI model allows people to discuss problems going on in a networking system and discuss the relationships between the components of a system more easily.
For example, two computer connected with each other through LAN and connectors and sharing the data through NIC(network interface card) forms a network. But if, one computer is using the windows system and other is using the mac operating system then how they are going to communicate? So in order to accomplish successful communication between the two systems the OSI model containing seven different layers was introduced in 1984. So lets now understand what are these seven layers of OSI Model.

## Layers In OSI Model
The OSI model consists of seven different layers as follows. You can remember the layer names with one simple phrase:\
**All People Seem To Need Data Processing (APSTNDP)**. So lets see the seven layers:
### 1. Application layer

The application layer is the layer that is closest to the end-user. I like to call it the “interface layer” because functionalities implemented at this level are the ones that users interact with directly. For example, Firefox, Skype and your local email client are all application-level software.
This layer takes user input, and input from other applications to produce the data to be transferred over the network. And when data is coming in from the network, it works on displaying or storing this data to the end-user.

### 2. Presentation layer
The Presentation Layer represents the area that is independent of data representation at the application layer. In general, it represents the preparation or translation of application format to network format, or from network formatting to application format. In other words, the layer “presents” data for the application or the network. For example, if your company is in Delhi and wants to send some documents to a french company then this layer will convert your document language from English to French. Like this you will be able to send the data in the receiver understandable form. It also compress the data into lower space like if a document is of 10MB then after data compression the document will become of 5MB. To maintain the integrity of data before transmission data is encrypted. Encryption enhances the safety of the data. At the sender side data is encrypted and at the receiver side data is decrypted. SSL is used for the data encryption and decryption

### 3. Session layer

When two devices, computers or servers need to “speak” with one another, a session needs to be created, and this is done at the Session Layer. Functions at this layer involve setup, coordination (how long should a system wait for a response, for example) and termination between the applications at each end of the session.

### 4. Transport layer
### 5. Network layer
### 6. Data Link layer
### 7. Physical layer