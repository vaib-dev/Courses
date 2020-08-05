# Chapter 4 - Software Project Planning

Software project planning is task, which is performed before the production of software actually starts. It is there for the software production but involves no concrete activity that has any direction connection with software production; rather it is a set of multiple processes, which facilitates software production. Project planning may include the following:

1. **Scope Management** - It defines the scope of project; this includes all the activities, process need to be done in order to make a deliverable software product. Scope management is essential because it creates boundaries of the project by clearly defining what would be done in the project and what would not be done.

2. **Project Estimation** - For an effective management accurate estimation of various measures is a must. With correct estimation managers can manage and control the project more efficiently and effectively.

3. **Effort estimation** - The managers estimate efforts in terms of person months(PM) to produce the software. For effort estimation software size should be known. This can either be derived by managers’ experience, organization’s historical data or software size can be converted into efforts by using some standard formulae.

4. **Time estimation** - Once size and efforts are estimated, the time required to produce the software can be estimated. 

5. **Cost estimation** - This might be considered as the most difficult of all because it depends on more elements than any of the previous ones. 

## Defintion of Project
A project is a series of tasks that need to be completed in order to reach a specific outcome. A project can also be defined as a set of inputs and outputs required to achieve a particular goal. Projects can range from simple to complex and can be managed by one person or a hundred.


### Project VS Software

Product may be something produced by effort, project is the process of effort. Product may be a service for customer, project is the process of service. Product lay stress on objectives, but project focuses on scope, resource, quality.

## Definition of Project Planning

Project planning needs utmost care and attention. <ins>Lack of planning is the main cause of schedule slippage,cost overruns,and leads to poor quality of software.</ins>
Project planning provides a framework that enables the manager to make resonable estimates to resources,cost,schedule. The estimates are made within a limited period at the beginning pf the software project and should be updated regularly as the project progresses.

Basic goals of Planning are :

1. To look into the future of development of project
2. Identify the activities that need to be performed to complete the project sucessfully
3. Plan the scheduling of activities
4. Plan the resourse allocation for the activities

*While making a project plan , economic,technical,political,personnel factors must be kept in mind for a realistic plan which is achievable.*

## Cost Estimation

For any new software project, it is necessary to know how much it will cost to develop and how much development time will it take. These estimates are needed before development is initiated, but how is this done? Several estimation procedures have been developed and are having the following attributes in common.

1. Project scope must be established in advanced.
Software metrics are used as a support from which evaluation is made.
2. The project is broken into small pieces which are estimated individually.
3. To achieve true cost & schedule estimate, several option arise.

### Uses of Cost Estimation
During the planning stage, one needs to choose how many engineers are required for the project and to develop a schedule. In monitoring the project's progress, one needs to access whether the project is progressing according to the procedure and takes corrective action, if necessary.

### Uncertainties in Cost Estimation

<img src="https://content.altexsoft.com/media/2016/09/3-est.-wp-1024x589.png">


We can perform cost estimation at any point in the SDLC. The cost estimation made at the early stage may appear wrong  because estimates are based on th reliabilities of information. Unreliable information leads to poor estimates.


## Cost Estimation Models
A model may be static or dynamic. In a static model, a single variable is taken as a key element for calculating cost and time. In a dynamic model, all variable are interdependent, and there is no basic variable.

<img src="https://static.javatpoint.com/tutorial/software-engineering/images/software-cost-estimation.png" height="250" width="400">

### **Static, Single Variable Models**

The key parameter tha affects the cost of a project is size.Therefore this model is known as size-based estimate model. The equation to calculate cost estimates is divided into two parts :

1. **Sized-based Cost estimates for large project** - The equation of effort is :

             Effort(E) = a*(size)^b
       
       The value of a and b are judged from the historical projects.
   The size of project is measured in Lines Of Code(LOC) or Kilo Lines Of Code(KLOC).The total effort (E) is measured in person months.Hence a cost of a project is calculated in PM i.e Person  Months.

 2. **Sized-based Cost estimates for small project** - The equation of effort is :

               Effort(E) = a*(size)+b

    This equation suggest that the project cost increases linearly with the size of final product.    

