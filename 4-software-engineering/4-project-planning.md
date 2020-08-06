# Chapter 4 - Software Project Planning

Software project planning is task, which is performed before the production of software actually starts. It is there for the software production but involves no concrete activity that has any direction connection with software production; rather it is a set of multiple processes, which facilitates software production. Project planning may include the following:

1. **Scope Management** - It defines the scope of project; this includes all the activities, process need to be done in order to make a deliverable software product. Scope management is essential because it creates boundaries of the project by clearly defining what would be done in the project and what would not be done.

2. **Project Estimation** - For an effective management accurate estimation of various measures is a must. With correct estimation managers can manage and control the project more efficiently and effectively.

3. **Effort estimation** - The managers estimate efforts in terms of person months(PM) to produce the software. For effort estimation software size should be known. This can either be derived by managers’ experience, organization’s historical data or software size can be converted into efforts by using some standard formulae.

4. **Time estimation** - Once size and efforts are estimated, the time required to produce the software can be estimated. 

5. **Cost estimation** - This might be considered as the most difficult of all because it depends on more elements than any of the previous ones. 

## Defintion of Project
A project is a series of tasks that need to be completed in order to reach a specific outcome. A project can also be defined as a set of inputs and outputs required to achieve a particular goal. Projects can range from simple to complex and can be managed by one person or a hundred.


### Project vs Software

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

 ### **Multivariable Model-COCOMO** 
 
 COnstructive COst estimation MOdel(COCOMO) was intoduced by Berry Bohem. A size-based cost estimate model has a major drawback that it does not take into consideration the various other parameters which effect cost. To solve this problem COCOMO model comes in consideration as it consider various other factors in addition to the size of the project.

 The initial estimate (also called nominal estimate) is determined by an equation of the form used in the static single variable models, using KDLOC as the measure of the size. To determine the initial effort Ei in person-months the equation used is of the type is shown below

                E = a*(KDLOC)b

    The value of the constant a and b are depends on the project type. 

**In COCOMO, projects are categorized into three types :**

1. Organic
2. Semidetached
3. Embedded

1) **Organic** : A development project can be treated of the organic type, if the project deals with developing a well-understood application program, the size of the development team is reasonably small, and the team members are experienced in developing similar methods of projects. Examples of this type of projects are simple business systems, simple inventory management systems, and data processing systems.

2. **Semidetached**: A development project can be treated with semidetached type if the development consists of a mixture of experienced and inexperienced staff. Team members may have finite experience in related systems but may be unfamiliar with some aspects of the order being developed. Example of Semidetached system includes developing a new operating system (OS), a Database Management System (DBMS), and complex inventory management system.

3. **Embedded** : A development project is treated to be of an embedded type, if the software being developed is strongly coupled to complex hardware, or if the stringent regulations on the operational method exist. For Example: ATM, Air Traffic control.

**Types of Models:**

COCOMO consists of a hierarchy of three increasingly detailed and accurate forms. Any of the three forms can be adopted according to our requirements. These are types of COCOMO model:


<img src="https://static.wixstatic.com/media/0b5e28_9d34b91677bc4431921f5f358c76bf04~mv2.jpg/v1/fill/w_630,h_193,al_c,q_80,usm_0.66_1.00_0.01/0b5e28_9d34b91677bc4431921f5f358c76bf04~mv2.webp" height="" width="">

1. Basic COCOMO Model
2. Intermediate COCOMO Model
3. Detailed COCOMO Model

The first level, Basic COCOMO can be used for quick and slightly rough calculations of Software Costs. Its accuracy is somewhat restricted due to the absence of sufficient factor considerations.

Intermediate COCOMO takes these Cost Drivers into account and Detailed COCOMO additionally accounts for the influence of individual project phases, i.e in case of Detailed it accounts for both these cost drivers and also calculations are performed phase wise henceforth producing a more accurate result. 

## Putnam Resource Allocation Model
The Lawrence Putnam model describes the time and effort requires finishing a software project of a specified size. Putnam makes a use of a so-called The Norden/Rayleigh Curve to estimate project effort, schedule & defect rate as shown in fig:

<img src="https://static.javatpoint.com/tutorial/software-engineering/images/putnam-resource-allocation-model.jpg" height="300" width="500">

Putnam noticed that software staffing profiles followed the well known Rayleigh distribution. Putnam used his observations about productivity levels to derive the software equation.

<img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/0d307d15a652aa0632c51f5f1df2e8956a38c803">

here, 
- size is the product size.
 - B is a scaling factor and is a function of project size.
- Productivity is the process productivity, the abiity of a particular software organization to produce software of a given size at a particular defect rate.
- effort is the total effort in PM
- Time is total schedule of project in years.

From above equation we can calculate the effort as, 

<img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/1721a429440d1975f9d17613a8c2d3ca97669d2a">

One of the key advantage of this model is simplicity.
