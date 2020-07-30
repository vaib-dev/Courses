# Chapter 2 - Software Development Process Models

Like humans when take birth they pass through certain stages like adolescence to mature than to old age . Similarly from the time of inception to the time of implementation & maintainance the software undergoes several phases . 

The Systems Development Life Cycle (SDLC) gives structure to the challenges of transitioning from the beginning to the end of your project without forgetting a step.

A number of different SDLC methodologies are used today to guide professionals through their project-based work.

## Phases in Software development models

![phases](https://i0.wp.com/melsatar.blog/wp-content/uploads/2012/03/sdlc.png?fit=830%2C374&ssl=1)


### 1. Planning

* Planning phase project - In this Phase leaders evaluate the terms of the project. This includes calculating labor and material costs, creating a timetable with target goals, and creating the teams and leadership structure for the project.

* Planning can also include feedback from stakeholders. Stakeholders are anyone who stands to benefit from the application. Try to get feedback from potential customers, developers, subject matter experts, and sales reps.

* Planning should clearly define the scope and purpose of the application. It plots the course and provisions the team to effectively create the software. It also sets boundaries to help keep the project from expanding or shifting from its original purpose.

### 2. Define Requirements
* Defining requirements is considered part of planning to determine what the application is supposed to do, and the requirements to do it. For example, a social media application would require the ability to connect with a friend. An inventory program might require a search feature.

* Requirements also include defining the resources needed to build the project. For example, a team might develop software to control a custom manufacturing machine. The machine is a requirement in the process.

### 3. Design and Prototyping
The Design phase models the way a software application will work. Some aspects of the design include:

* **Architecture** – Specifies programming language, industry practices, overall design, and use of any templates or boilerplate
User Interface – Defines the ways customers interact with the software, and how the software responds to input
* **Platforms** – Defines the platforms on which the software will run, such as Apple, Android, Windows version, Linux, or even gaming consoles
* **Programming** – Not just the programming language, but including methods of solving problems and performing tasks in the application
* **Communications** – Defines the methods that the application can communicate with other assets, such as a central server or other instances of the application
* **Security** – Defines the measures taken to secure the application, and may include SSL traffic encryption, password protection, and secure storage of user credentials

* Prototyping can be a part of the Design phase. A prototype is like one of the early versions of software in the Iterative software development model. It demonstrates a basic idea of how the application looks and works.

### 4. Software development
* This is the actual writing of the program. A small project might be written by a single developer, while a large project might be broken up and worked by several teams. Use an Access Control or Source Code Management application in this phase. These systems help developers track changes to the code. They also help ensure compatibility between different team projects, and to make sure target goals are being met.

* The coding process includes many other tasks. Many developers need to brush up on skills or work as a team. Finding and fixing errors and glitches is critical.

* Software developers appreciate instructions and explanations. Documentation can be a formal process, including wiring a user guide for the application. 

* Documentation can be a quick guided tour of the application’s basic features that display on the first launch. 

### 5. Testing
* It’s critical to test an application before making it available to users. Much of the testing can be automated, like security testing. Other testing can only be done in a specific environment – consider creating a simulated production environment for complex deployments.

* Testing should ensure that each function works correctly. Different parts of the application should also be tested to work seamlessly together. Test for performance, to reduce any hangs or lags in processing. The testing phase helps reduce the number of bugs and glitches that users encounter. This leads to a higher user satisfaction, and a better usage rate.

### 6. Deployment or Delivery
* In the deployment phase, the application is made available to users. Many companies prefer to automate the deployment phase. This can be as simple as a payment portal and download link on the company website. It could also be downloading an application on a smartphone.

* Deployment can also be complex. Upgrading a company-wide database to a newly-developed application is one example. Because there are several other systems used by the database, integrating the upgrade can take more time and effort.

### 7. Operations and Maintenance
* At this point, the development cycle is almost finished. The application is done and being used in the field. The Operation and Maintenance phase is still important, though. In this phase, users discover bugs that weren’t found during testing. These errors need to be resolved, which can spawn new development cycles.

## Waterfall Model

The waterfall model was introduced by Winston Royce in 1970. In the waterfall model, all development activities are divided into various phases. The phases are organized in linear order. 
Therefore each phase begins only when the previous phase has finished . Each phase has well-defined starting and ending points . The output of one phase are used as the input of the second phase that's why it s also called **linear sequential model** .

Various phases of waterfall model are performed one after the other and fall like water falling from the sky that's why it is known as **Waterfall Model** .

A waterfall model has following phases as shown :

![waterfall](https://www.scnsoft.com/blog-pictures/custom-software-development/1-waterfall-.png)

### Phases of Waterfall Model 

1. **Requirements** : During this initial phase, the potential requirements of the application are methodically analyzed and written down in a specification document that serves as the basis for all future development. The result is typically a requirements document that defines what the application should do, but not how it should do it.
2. **Analysis** : During this second stage, the system is analyzed in order to properly generate the models and business logic that will be used in the application.
3. **Design**: This stage largely covers technical design requirements, such as programming language, data layers, services, etc. A design specification will typically be created that outlines how exactly the business logic covered in analysis will be technically implemented.
4. **Implementation**: The actual source code is finally written in this fourth stage, implementing all models, business logic, and service integrations that were specified in the prior stages.
5. **Testing**: During this stage, QA, beta testers, and all other testers systematically discover and report issues within the application that need to be resolved. It is not uncommon for this phase to cause a “necessary repeat” of the previous coding phase, in order for revealed bugs to be properly squashed.
6. **Maintainance** : Once the system passes all the tests , it is delivered to the customer . Any modification made to the system after initial delivery are usually attributed to this phase . 
This phase involves creating computer - compatible files , training the staff , installing hardware and telecommunication network before the system is up and running . 

### Applications
In the olden days, Waterfall model was used to develop enterprise applications like Customer Relationship Management (CRM) systems, Human Resource Management Systems (HRMS), Supply Chain Management Systems, Inventory Management Systems etc.

Waterfall model was used significantly in the development of software till the year 2000. Even after the Agile manifesto was published in 2001, Waterfall model continued to be used by many organization till the last decade.

These days most project follow Agile Methodology
which will be studying in the next chapter .

### Advantages
1. It is a linear model as output of one phase is used as the input of the second phase
2. It is simple one due to the rigidity of the model – each phase has specific deliverables and a review process 
3. Easy to explain to the user 
4. Waterfall model works well for smaller projects where requirements are clearly defined and very well understood

### Disadvantages
1. It is difficult to define all requirements at the beginning of a project 
2. Cycle time too long as we have to work on all the phases and ia change comes in a last step we have to start from the beginning 
3. We cannot go in backward direction while SDLC performs 
5. If there is any mistake or any error in any phase then we cannot make good software 


## Summary
In this chapter, we learned about Software Development Process Models and different phases through which we build software. After this, we had a detailed explanation of the waterfall model with the help of a diagram . Finally, we closed with waterfall model applications, advantages, and disadvantages.
 
In the next chapter, we will learn about Agile Methods.

 ![Chapter-2](https://img.shields.io/static/v1?label=Finished&message=Software-Development-Process-Models&color=red) ![Chapter-2](https://img.shields.io/static/v1?label=Source&message=tryqa.com&color==orange)![Chapter-2](https://img.shields.io/static/v1?label=PRs&message=Welcome&color=blue)
