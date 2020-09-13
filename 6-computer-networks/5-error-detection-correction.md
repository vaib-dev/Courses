# Chapter - 5 Error Detection & Correction

In telecommunication the data is transmitted through different types of channels. These channels could be unreliable and noisy due to faulty transmission systems and lines. So the data (bits) transmitted over the computer network could get corrupted due to these network problems & interference. The resultant corrupted bit sequences lead to changes i.e faults in the data received by the receiver.

 Error detection is the detection of errors caused by noise or other impairments during transmission from the transmitter to the receiver. Error correction is the detection of errors and reconstruction of the original error free data.

## Transmission Error
When data is transmitted from one device to another device, the system does not guarantee whether the data received by the device is identical to the data transmitted by another device. An Error is a situation when the message received at the receiver end is not identical to the message transmitted.

### Types of Errors
Errors can be classified into two categories:

1. **Single-Bit Error**: This error is occurred when only one bit of a given data unit is changed from 1 to 0 or from 0 to 1. For example, the following figure shows the effect of a single-bit error on a data unit. In this case, 00001010 was sent, but 00000010 was received. 
<p text align="center"><img src="https://static.javatpoint.com/tutorial/computer-network/images/error-detection2.png" height="" width=""></p>

2. **Burst Error**: The term burst error means that when 2 or more consecutive bits in the data unit have changed from 1 to 0 or from 0 to 1. For example, the following figure shows the effect of a burst error on a data unit. In this case, 0100010001000011 was sent, but 0101110101100011 was received. Note that a burst error does not necessarily mean that the errors occur in consecutive bits. The length of the burst is measured from the first corrupted bit to the last corrupted bit. Some bits in between may not have been corrupted.

   <p text align="center"><img src="http://www.myreadingroom.co.in/images/stories/docs/dcn/Types%20of%20Errors_Burst%20errors.JPG" height="180" width=""></p>

## Error Detection
The basic approach used for error detection is the use of redundancy bits, where additional bits are added to facilitate the detection of errors. So lets understand what are the redundant bits. 
###  Redundancy
The central concept in detecting or correcting errors is redundancy. To be able to detect or correct errors, we need to send some extra bits with our data. These redundant bits are added by the sender and removed by the receiver. Their presence allows the receiver to detect or correct corrupted bits. The concept of including extra information in the transmission for error detection is a good one. But instead of repeating the entire data stream, a shorter group of bits may be appended to the end of each unit. This technique is called redundancy because the extra bits are redundant to the information: they are discarded as soon as the accuracy of the transmission has been determined. In this context the redundant bits are called as “Parity Bits”
##  1. Vertical Redundancy Check(VRC)
Vertical redundancy check (VRC) is an error-checking method used on an eight-bit ASCII character. In VRC, a parity bit is attached to each byte of data, which is then tested to determine whether the transmission is correct. VRC is considered an unreliable error-detection method because it only works if an even number of bits is distorted.

### Example 
If the source wants to transmit data unit 1100111 using even parity to the destination. The source will have to pass through Even Parity Generator.
   <p text align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/20200828202046/even.png" height="" width=""></p>

Parity generator will count number of 1s in data unit and will add parity bit. In the above example, number of 1s in data unit is 5, parity generator appends a parity bit 1 to this data unit making the total number of 1s even i.e 6 which is clear from above figure.

Data along with parity bit is then transmitted across the network. In this case, 11001111 will be transmitted. At the destination, This data is passed to parity checker at the destination. The number of 1s in data is counted by parity checker.

If the number of 1s count out to be odd, e.g. 5 or 7 then destination will come to know that there is some error in the data. The receiver then rejects such an erroneous data unit.

**Advantages**: VRC can detect all single bit error.
It can also detect burst errors but only in those cases where number of bits changed is odd, i.e. 1, 3, 5, 7, …….etc.

**Disadvantages**: The major disadvantage of using this method for error detection is that it is not able to detect burst error if the number of bits changed is even, i.e. 2, 4, 6, 8, …….etc.

## 2. Longitudinal Redundancy Check(LRC)
A longitudinal redundancy check (LRC) is an error-detection method for determining the correctness of transmitted and stored data.

LRC verifies the accuracy of stored and transmitted data using parity bits. It is a redundancy check applied to a parallel group of bit streams. The data to be transmitted is divided into transmission blocks into which additional check data is inserted.

### Example 
The user sends the data i.e   1100111110111010011100110101001. Then the data is divide the data into 4 blocks containing set of 8bits each. Then these blocks are represented in the form of rows and columns.
   <p text align="center"><img src="http://t4planet.tripod.com/lrc4.GIF" height="" width=""></p>

The parity bit is calculated for each coloumn and sent along with the data. The first data block is paced in first row, the second block in second row and so on. Now we start counting the occurrence of 1 in first column as we there are four 1 in first column i.e even so we write 0 as a parity bit and so on until the last bit. Like this the LRC is attached with the data and sent to the receiver.

Then the receiver also performs the same calculations and check wether the LRC number is matched or not. If it matches then the receiver keeps the data otherwise will request for re-transmission.

**Advantages**: LRC increases the likelihood of detecting burst error.  An LRC of n bits can easily detects a burst error of n bits.

**Disadvantages**: If two bits in one data unit are damaged and two bits in exactly the same positions in another data unit are also damaged, the LRC checker will not detect an error.

## 3. Cyclic Redundancy Check(CRC)
In CRC, a sequence of redundant bits, called cyclic redundancy check bits, are appended to the end of data unit so that the resulting data unit becomes exactly divisible by a second, predetermined binary number.
At the destination, the incoming data unit is divided by the same number. If at this step there is no remainder, the data unit is assumed to be correct and is therefore accepted.
A remainder indicates that the data unit has been damaged in transit and therefore must be rejected.

<p text align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/detect14.jpg" height="" width=""></p>

### Example
 The user sends the data i.e 1010000. Then the data is passed to the polynomial generator and will generate a value for the CRC generator in bits. Then we check the number of bits of CRC generator like if, CRC generator has n bits then we append n-1 zeros in the end of the n bits.  
<p text align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/detect15.jpg" height="" width=""></p>

In the sender side we put the CRC generator value as the divisor and the data to be send + (n-1) zeros as the dividend. After performing the calculations the remainder we get is added to the data to be send. Then we finally get the data which is in ready state to be sent. 

Then the receiver will again performs division and if the remainder comes to be zero then data is accepted otherwise receiver comes to know that data is corrupted. So he asks for re-transmission of data. 

**Advantages**: CRC detects larger proportion of errors as compared to the others. CRC can be applied to larger blocks of data.

## 4. Checksum
In checksum error detection scheme, the data is divided into k segments each of m bits. In the sender’s end the segments are added using 1’s complement arithmetic to get the sum. The sum is complemented to get the checksum. The checksum segment is sent along with the data segments.\
At the receiver’s end, all received segments are added using 1’s complement arithmetic to get the sum. The sum is complemented. If the result is zero, the received data is accepted; otherwise discarded.

<p text align="center"><img src="https://i1.faceprep.in/fp/articles/img/62416_1580129904.png" height="" width=""></p>

### Example
 The user sends the data i.e 100110011110000100010010010000100. Now break the original message into k number of blocks containing m number of bits in each. Like if we have 20 bits then we will have 20 bits in four blocks each containing 5 bits. Then we will sum all the k data blocks. If some carry is left at last then add the carry to the sum. At last we will do the 1's complement on the sum which will be called as Checksum which will be of m bits.

<p text align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/detect13.jpg" height="" width=""></p>

So now we will break the original message into blocks. So we have 32 bits so the value of k will be 4 and the value of m will be 8. Now we will add these blocks taking two at a time. The result of the first and second will be added to the third and so on. At last the sum comes out to be 00100101, so its 1's complement will be i.e 11011010. That will be Checksum and data is now ready to be transmitted to the receiver. One more block will be added to the original message which will contain the checksum.

Now the receiver will receive data with the checksum and will perform the addition as we did. But at last he will add the checksum to his result and then do 1's complement. If the complement comes out to be zero then the data is accepted otherwise data has to re-transmitted by the sender.

## Error Correction

Error Correction codes are used to detect and correct the errors when data is transmitted from the sender to the receiver. Error Correction can be handled in two ways:

1. Backward error correction: Once the error is discovered, the receiver requests the sender to retransmit the entire data unit.
2. Forward error correction: In this case, the receiver uses the error-correcting code which automatically corrects the errors.

A single additional bit can detect the error, but cannot correct it. For correcting the errors, one has to know the exact position of the error. For example, If we want to calculate a single-bit error, the error correction code will determine which one of seven bits is in error. To achieve this, we have to add some additional redundant bits.

Suppose r is the number of redundant bits and d is the total number of the data bits. The number of redundant bits r can be calculated by using the formula:

    2r>=d+r+1

The value of r is calculated by using the above formula. For example, if the value of d is 4, then the possible smallest value that satisfies the above relation would be 3.

To determine the position of the bit which is in error, a technique developed by R.W Hamming is Hamming code which can be applied to any length of the data unit and uses the relationship between data units and redundant units.

### Hamming Code
Hamming code is a technique build by R.W.Hamming to detect and correct errors. In Hamming code, the redundancy bits are placed at certain calculated positions in order to eliminate errors. The distance between the two redundancy bits is called “Hamming distance”.\
The number of parity bits to be added to a data string depends upon the number of information bits of the data string which is to be transmitted. Number of parity bits will be calculated by using the data bits. This relation is given below.

    2^P >= n + P +1

Here, n represents the number of bits in the data string. P represents number of parity bits. The parity bits have to be located at the positions of powers of 2 which means at 1, 2, 4, 8 and 16 etc. Therefore the codeword after including the parity bits will be like this

    D7, D6, D5, P4, D3, P2, P1

Here P1, P2 and P3 are parity bits. D1 —- D7 are data bits.

<p text align="center"><img src="https://s3.ap-south-1.amazonaws.com/s3.studytonight.com/curious/uploads/pictures/1580895505-70265.png" height="" width=""></p>

### 1. Single-Bit Error Correction

Suppose the sender sends the data 1011001 with the parity bits 0110. But at  the receiver receives 1011101 as the data, the 6th bit is changed from 0 to 1 during data transmission. So to correct the error the receiver will check the parity values. Then it gives new parity values in the binary number:

<p text align="center"><img src="https://media.geeksforgeeks.org/wp-content/uploads/20200122012046/edited2.png" height="" width=""></p>

The bits that are 0110 are then converted to decimal representation which is 6. Thus, the bit 6 contains an error. To correct the error the 6th bit is changed from 1 to 0. By this the receiver can correct the data by himself without demanding for the re-transmission of the data.

### 2. Burst Error Correction

To correct the burst error in the data we will use VRC and LRC together as VRC works on the row level and LRC works on the column level. So the intersection point of row and column will give us the defected bit and then the receiver can correct it without demanding for re-transmission of data. Now if the sender sends 11001111 1011101 0111001 0101001 to the receiver along with the parity bits which are 11011(VRC), 01010101(LRC). 

<p text align="center"><img src="https://image.slidesharecdn.com/datalinklayermukesh-150130061041-conversion-gate01/95/data-link-layer-29-638.jpg?cb=1422598334" height="" width=""></p>

Then the receiver will put the data in form of rows and columns and the parity bits separately. If there is a change of parity bits then the user can correct them. Let's understand how he will come to know that which bit is changed. After forming the table and calculating the new parity bits he will now cross-check these new parity bits with bits sent by the sender. If he sees the change in the parity bits he can find the exact bit where the changed parity bits intersect.  

## Summary
In the above chapter, we studied about types of Errors & Detection then we studied about error correction using hamming code.

In the next chapter we will start with Basics of IP Networking.

![edit2](https://img.shields.io/static/v1?label=Source&message=https://www.geeksforgeeks.org&color=yellow)![edit](https://img.shields.io/static/v1?label=PRs&message=Welcome&color=<COLOR>)[![Awesome](https://cdn.rawgit.com/sindresorhus/awesome/d7305f38d29fed78fa85652e3a63e154dd8e8829/media/badge.svg)](https://github.com/sindresorhus/awesome#readme)
  
  