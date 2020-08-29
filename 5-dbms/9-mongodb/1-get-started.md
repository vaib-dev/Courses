 # Chapter - 1 Installing MongoDB

  In this chapter we will install MongoDB 4.4 Community Edition on Windows using the default installation wizard. install MongoDB 4.4 Community Edition on Windows using the default installation wizard. Installing MongoDB in your system includes very simple steps as follows:

  ## Step-1 Go To Website 
  Now the first step is go to MongoDB official site which is https://www.mongodb.com/. You will then be directed to the website.

  ## Step-2 Downloading MongoDB
  Now we will download MongoDB in our local system. Click on Try for free button present at the top-right corner of the website as shown. 

  <img src="https://user-images.githubusercontent.com/54719422/91629607-0bed3180-e9e8-11ea-8c92-b85b5d36a003.png" height="" width="">

  After clicking on Try Free then U will see three options 1. Cloud 2. On-Premises 3. Tools. We have to select the On-Premises option. Then select the MongoDB community server option as shown.
  <img src="https://user-images.githubusercontent.com/54719422/91629671-a8afcf00-e9e8-11ea-9e31-430a9196449b.png" height="" width=""> 

  Now u will see a box at the right side of your screen named Available Downloads. First the Version dropdown, select the latest version of MongoDB to download. In the Platform dropdown, select the operating system u are going to install. In the Package dropdown, select msi. Check all the options u selected twice before you click download.
  
  <p align="center"><img src="https://user-images.githubusercontent.com/54719422/91629726-0cd29300-e9e9-11ea-9880-6f37bc7754c7.png" height="" width=""></p> 

So now you are all set to download MongoDB, just click on download button and the downloading will get started.

## Step-3 Installing MongoDB

This is the most important part of the whole process. You have to follow the below-mentioned steps very carefully. So now as you have successfully downloaded the MongoDB its time to install it.

### 1. Run the MongoDB installer
For example, from the Windows Explorer/File Explorer:

a) Go to the directory where you downloaded the MongoDB installer (.msi file). \
b) By default, this is your Downloads directory.\
c) Double-click the .msi file.

### 2. Follow the installation wizard
The wizard steps you through the installation of MongoDB and MongoDB Compass.

### 1. Choose Setup Type
You can choose either the Complete (recommended for most users) or Custom setup type. The Complete setup option installs MongoDB and the MongoDB tools to the default location. The Custom setup option allows you to specify which executables are installed and where.

### 2. Service Configuration
Starting in MongoDB 4.0, you can set up MongoDB as a Windows service during the install or just install the binaries.

<img src="https://user-images.githubusercontent.com/54719422/91629976-486e5c80-e9eb-11ea-88f4-77403fa9e75b.png" height-="" width="">

a) Select Install MongoDB as a Service MongoDB as a service.
b) Run the service as Network Service user (Default).
This is a Windows user account that is built-in to Windows.

c) Run the service as a local or domain user: For an existing local user account, specify a period (i.e. .) for the Account Domain and specify the Account Name and the Account Password for the user. For an existing domain user, specify the Account Domain, the Account Name and the Account Password for that user.

### 3. Install MongoDB Compass
This is optional check the checkbox if you want to use GUI for working in MongoDB. To have the wizard install MongoDB Compass, select Install MongoDB Compass (Default).

### 4. When ready, click Install.

## Step-4 Setting-Up MongoDB

### 1. Create database directory
Create the data directory where MongoDB stores data. MongoDB’s default data directory path is the absolute path **\data\db** on the drive from which you start MongoDB.

### 2. Open Your Hyper Terminal(Bash)
 a) When You will open your hyper terminal change the directory to your home folder by simply typing **cd ~**.\
 b) Once you navigate there now create a new file with the name\
 **touch .bas_profile** remember this name should be written exactly the same way.
 Now press Enter.
 
<img src="https://user-images.githubusercontent.com/54719422/91630590-1e6b6900-e9f0-11ea-841d-47ed8be36e5b.png">

 c) Now u have successfully created the file. To see it just type **ls -a**. After this press enter and you will see the file is created.

d) Now we are going to edit this file using vim editor. Just simply type\
 **vim .bash_profile**. Now press enter and the vim editor terminal will be opened. 

 <img src="https://user-images.githubusercontent.com/54719422/91630642-946fd000-e9f0-11ea-8620-290eccf66a09.png" height="" width="">

e) Once you have opened the vim editor then press "i" which will enable to write text in vim editor. See at the bottom of the editor there should be written insert as shown.

<img src="https://user-images.githubusercontent.com/54719422/91631012-c5053900-e9f3-11ea-9d39-35c329b5e66c.png" height="" width="">

f) Now copy the text given below and paste it in the vim editor:

>alias mongod="/c/Program\ files/MongoDB/Server/4.0/bin/mongod.exe"\
>alias mongo="/c/Program\ Files/MongoDB/Server/4.0/bin/mongo.exe"

Copy this exact text and paste it in the vim editor.

e) Now save and exit the editor press "esc" and then type **:wq!** as shown
<img src="https://miro.medium.com/max/700/1*3JX8Tg3MxhoPqC65r1pfew.png" height="" width="">

g) Congratulations! you have successfully completed the installation process.

## Step-5  Verify That Setup was Successful
a) Close down the current Hyper terminal and quit the application.\
b) Re-launch Hyper
c) Type the following commands into the Hyper terminal:
>mongo --version

d) Once you’ve hit enter, you should see something like this:

<img src="https://miro.medium.com/max/700/1*Dz14OhSpfOx2igf8DbJjMA.png" height="" width="">

BOOM! you have successfully completed the setup and installation of MongoDB on your local system. 

## Step-6 Getting Started with MongoDB

### 1. Open your cmd prompt
a) You can open cmd prompt by pressing **Windows+R**. This will display the run window at the bottom of your screen. Now just simply type cmd in the given space and press enter.

<p align="center"><img src="https://user-images.githubusercontent.com/54719422/91631313-54135080-e9f6-11ea-9adc-4c3036f6463a.png" height="" width=""></p>

This will open your cmd prompt window.

b) Now type cd\ and press enter. This will get the path to C:\ drive.

c) Now copy the path which we noted down in the installation process i.e where the mongoDB is installed. As in my case the path is as shown:

<img src="https://user-images.githubusercontent.com/54719422/91631490-680b8200-e9f7-11ea-8fdb-31aa19d10de7.png" height="" width="">

d) Press Enter and type "mongod". Now again press enter and minimize the window.

BOOM! MongoDB is now running successfully.

### 2. Open A New cmd prompt Window

Now in this new window type "mongo". This will run the MongoDB on your system.

<img src="https://user-images.githubusercontent.com/54719422/91631669-fdf3dc80-e9f8-11ea-8354-de0dc05ddbf7.png" height="" width="">

So finally, now you can start playing with MongoDB commands.


## Summary
In this chapter we have completed the installation, setup the MongoDB on our local system.

From next chapter we will start with the commands that are used in MongoDB.
