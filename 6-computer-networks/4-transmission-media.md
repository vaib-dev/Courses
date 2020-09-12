# Chapter - 4 Transmission Media
A transmission medium is something that can mediate the propagation of signals for the purposes of telecommunication.\
A communication channel is used to carry the data from the transmitter to the receiver through the electromagnetic signals. The main function of this is to carry the data in the bits form through the Local Area Network (LAN). In data communication, it works like a physical path between the sender & the receiver. For instance, in a copper cable network the bits are available in the form of electrical signals whereas in a fiber network, the bits are available in the form of light pulses. The quality, as well as characteristics of data transmission, can be determined from the characteristics of medium & signal. The properties of different transmission media are delay, bandwidth, maintenance, cost, and easy installation.

There are two types of transmission medium and they are further divided as shown:

<p text align="center"><img src="https://2.bp.blogspot.com/-E8JoKtDghuM/Wb4UARmOhKI/AAAAAAAABBI/BiLWG8-XwPEkG4_-q8n7rv1kk1NQLT6-wCLcBGAs/s1600/transmission-mediums.png" height="" width=""></p>

## 1. Guided Medium
Guided transmission media are also called bounded media or wired media. They comprise cables or wires through which data is transmitted. They are called guided since they provide a physical conduct from the sender device to the receiver device. The signal traveling through these media are bounded by the physical limits of the medium.\
Twisted-pair and coaxial cable use metallic (copper) conductors that accept and transport signals in the form of electric current. Optical fiber is a cable that accepts and transports signals in the form of light.

### Twisted Pair Cable
A twisted pair consists of two conductors(normally copper), each with its own plastic insulation, twisted together. One of these wires is used to carry signals to the receiver, and the other is used only as ground reference. The receiver uses the difference between the two. In addition to the signal sent by the sender on one of the wires, interference(noise) and crosstalk may affect both wires and create unwanted signals. If the two wires are parallel, the effect of these unwanted signals is not the same in both wires because they are at different locations relative to the noise or crosstalk sources. This results in a difference at the receiver.

Twisted Pair is of two types:

**1. Unshielded Twisted Pair (UTP)**: It is the most common type of telecommunication when compared with Shielded Twisted Pair Cable which consists of two conductors usually copper, each with its own colour plastic insulator. Identification is the reason behind coloured plastic insulation.

<p text align="center"><img src="https://www.studytonight.com/computer-networks/images/Figure15.jpg" height="" width=""></p>

**2. Shielded Twisted Pair (STP)**: This cable has a metal foil or braided-mesh covering which encases each pair of insulated conductors. Electromagnetic noise penetration is prevented by metal casing.

<p text align="center"><img src="https://www.studytonight.com/computer-networks/images/Figure16.jpg" height="" width=""></p>

### Coaxial Cable
The coaxial cables have a central copper conductor, surrounded by an insulating layer, a conducting shield, and the outermost plastic sheath. Thus, there are three insulation layers for the inner copper cable. There are two basic modes of data transmission in coaxial cables: baseband mode that has dedicated bandwidth, and broadband mode that has distributed cable bandwidth.

Cable TV and analog televisions mainly use coaxial cables. Coaxial cables have better resistance to cross talk than twisted pair cables. The coaxial cables are used for long distance communication. The most widely used types of coaxial cables are RG-59 and RG-6 (RG stands for 'radio guide'). RG-59 has lesser shielding and is suitable for short cable lengths and cable TV connections.

RG-6 has better insulation than RG-59 and is used for satellite TV and digital signal transmissions for better strength and longer distances. Here the most common coaxial standards:

* 50-Ohm RG-7 or RG-11 : used with thick Ethernet
* 50-Ohm RG-58 : used with thin Ethernet
* 75-Ohm RG-59 : used with cable television
* 93-Ohm RG-62 : used with ARCNET

<p text align="center"><img src="https://techdifferences.com/wp-content/uploads/2018/02/coaxial.jpg" height="" width=""></p>

### Optical Fibers
Optical fibers use light waves for transmission. Crosstalk, EMI, and attenuation aren't issues with optical fibers. These cables are well-suited for voice, data, and video transmissions. Optical fibers are the most secure of all the cable media. Installation and maintenance are difficult and costly. Fiber optic cables have greater transmission speed, high bandwidth, and the signal can travel longer distances when compared to coaxial and twisted pair cables. Though the cost of optical fiber cable is less compared to co-axial and twisted pair cables, the additional optical components needed for installation make fiber optic the costliest of all the cables.

Optical fibres use reflection to guide light through a channel. A glass or plastic core is surrounded by a cladding of less dense glass or plastic. The difference in density of the two materials must be such that a beam of light moving through the core is reflected off the cladding instead of being refracted into it.

<p text align="center"><img src="https://www.studytonight.com/computer-networks/images/bounded-transmission-media-7.png" height="" width=""></p>

There are three modes of operation for optical fibers as discussed:

1. **Single Mode**: Single mode uses step-index fibre and a highly focused source of light that limits beams to a small range of angles, all close to the horizontal. The single-mode fibre itself is manufactured with a much smaller diameter than that of multimode fibre, and with substantially lower density.
The decrease in density results in a critical angle that is close enough to 90 degree to make the propagation of beams almost horizontal.

2. **Multimode step-index fiber**: In this the density of the core remains constant from the center to the edges. A beam of light moves through this constant density in a straight line until it reaches the interface of the core and the cladding.
The term step-index refers to the suddenness of this change, which contributes to the distortion of the signal as it passes through the fiber.
3. **Multimode graded-index fiber**: In this distortion gets decreases through the cable. The word index here refers to the index of refraction. This index of refraction is related to the density. A graded-index fiber, therefore, is one with varying densities. Density is highest at the center of the core and decreases gradually to its lowest at the edge.

<p text align="center"><img src="https://www.studytonight.com/computer-networks/images/bounded-transmission-media-9.png" height="" width=""></p>

## Unguided Transmission Media

Unguided medium transport electromagnetic waves without using a physical conductor. This type of communication is often referred to as wireless communication. Signals are normally broadcast through free space and thus are available to anyone who has a device capable of receiving them.

The below figure shows the part of the electromagnetic spectrum, ranging from 3 kHz to 900 THz, used for wireless communication.

### Radio Waves
Electromagnetic waves ranging in frequencies between 3 KHz and 1 GHz are normally called radio waves. Radio waves are omnidirectional. When an antenna transmits radio waves, they are propagated in all directions. This means that the sending and receiving antennas do not have to be aligned. A sending antenna send waves that can be received by any receiving antenna. The omnidirectional property has disadvantage, too. The radio waves transmitted by one antenna are susceptible to interference by another antenna that may send signal suing the same frequency or band.

Radio waves, particularly with those of low and medium frequencies, can penetrate walls. This characteristic can be both an advantage and a disadvantage. It is an advantage because, an AM radio can receive signals inside a building. It is a disadvantage because we cannot isolate a communication to just inside or outside a building.

<p text align="center"><img src="https://www.studytonight.com/computer-networks/images/unbounded-transmission-media-3.png" height="" width=""></p>

### Micro Waves
Electromagnetic waves having frequencies between 1 and 300 GHz are called micro waves. Micro waves are unidirectional. When an antenna transmits microwaves, they can be narrowly focused. This means that the sending and receiving antennas need to be aligned. The unidirectional property has an obvious advantage. A pair of antennas can be aligned without interfering with another pair of aligned antennas.

<p text align="center"><img src="https://1.bp.blogspot.com/-wZo1FM16W70/U-U-n3MOR2I/AAAAAAAAJI4/nV28m9ZPnfw/s1600/Terrestial-microwave.jpg" height="" width=""></p>

### Infrared Waves
Infrared waves, with frequencies from 300 GHz to 400 THz, can be used for short-range communication. Infrared waves, having high frequencies, cannot penetrate walls. This advantageous characteristic prevents interference between one system and another, a short-range communication system in on room cannot be affected by another system in the next room.

When we use infrared remote control, we do not interfere with the use of the remote by our neighbours. However, this same characteristic makes infrared signals useless for long-range communication. In addition, we cannot use infrared waves outside a building because the sun's rays contain infrared waves that can interfere with the communication.

<p text align="center"><img src="https://www.scienceabc.com/wp-content/uploads/ext-www.scienceabc.com/wp-content/uploads/2016/03/tv-remote-control.jpg-.jpg" height="200" width="350"></p>


## Tansmission Impairment
Signals travel through transmission media, which are not perfect. The imperfection causes signal impairment. This means that the signal at the beginning of the medium is not the same as the signal at the end of the medium. What is sent is not what is received. The three different causes of impairment are attenuation, distortion, and noise.

### 1. Attenuation

Attenuation means a loss of energy. When a signal, simple or composite, travels through a medium, it loses some of its energy in overcoming the resistance of the medium. That is why a wire carrying electric signals gets warm, if not hot, after a while. Some of the electrical energy in the signal is converted to heat. To compensate for this loss, amplifiers are used to amplify the signal. The following figure shows the effect of attenuation and amplification.

<p text align="center"><img src="http://www.myreadingroom.co.in/images/stories/docs/dcn/Transmission%20Impairment_Attenuation.JPG"></p>

### 2. Distortion
Distortion means that the signal changes its form or shape. Distortion can occur in a composite signal made of different frequencies. Each signal component has its own propagation speed through a medium and, therefore, its own delay in arriving at the final destination. Differences in delay may create a difference in phase if the delay is not exactly the same as the period duration. In other words, signal components at the receiver have phases different from what they had at the sender. The shape of the composite signal is therefore not the same. The following figure shows the effect of distortion on a composite signal.

<p text align="center"><img src="http://www.myreadingroom.co.in/images/stories/docs/dcn/Transmission%20Impairment_Distortion.JPG"></p>

### 3. Noise
Noise is another cause of impairment. Several types of noise, such as thermal noise, induced noise, crosstalk, and impulse noise, may corrupt the signal. Thermal noise is the random motion of electrons in a wire which creates an extra signal not originally sent by the transmitter. Induced noise comes from sources such as motors and appliances.

<p text align="center"><img src="http://www.myreadingroom.co.in/images/stories/docs/dcn/Transmission%20Impairment_noise.JPG"></p>

## Performance of Transmission Medium
The performance of Transmission medium can be measured with Throughput, Propagation Speed, and Propagation Time. Let us see the Transmission Media one by one,

### 1. Throughput
The measurement of how many bits pass through a point in once second, is known as throughput. The result shows how fast data passes.

<p text align="center"><img src="https://studyopedia.com/wp-content/uploads/2018/04/Throughput.png"></p>

### 2. Propagation Time
The time required for a signal or bit to travel from one point to another is Propagation Time.  The signal travels from one point of the transmission medium to another.

Calculate Propagation Time using the following formulae:

    Propagation time = Distance / Propagation speed

### 3. Propagation Speed
The distance a signal or bit travels through a transmission medium in one second. For electromagnetic signals, the propagation medium depends on the medium and frequency of the signal.

## Shannon Capacity
Shannon's Theorem gives an upper bound to the capacity of a link, in bits per second (bps), as a function of the available bandwidth and the signal-to-noise ratio of the link.
The Theorem can be stated as:

    C = B * log2(1+ S/N)

where C is the achievable channel capacity, B is the bandwidth of the line, S is the average signal power and N is the average noise power.

The signal-to-noise ratio (S/N) is usually expressed in decibels (dB).

<p text align="center"><img src="https://www.sharetechnote.com/image/Communication_ChannelCapcity_01.png"></p>

For example: For a typical telephone line with a signal-to-noise ratio of 30dB and an audio bandwidth of 3kHz, we get a maximum data rate of:\

    C = 3000 * log2(1001)

which is a little less than 30 kbps

## Summary
In this lesson we learned the about the types of transmission medias, transmission impairment, performance of transmission media, shannon capacity.

In the next chapter we will start with error detection and correction.

![edit2](https://img.shields.io/static/v1?label=Source&message=https://studtytonight.com&color=red)![edit](https://img.shields.io/static/v1?label=PRs&message=Welcome&color=<COLOR>)[![Awesome](https://cdn.rawgit.com/sindresorhus/awesome/d7305f38d29fed78fa85652e3a63e154dd8e8829/media/badge.svg)](https://github.com/sindresorhus/awesome#readme)