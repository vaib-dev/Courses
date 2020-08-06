# Chapter 4 - Software Project Planning

Software project planning is a task, which is performed before the production of software starts. It is there for the software production but involves no concrete activity that has any direct connection with software production; rather it is a set of multiple processes, which facilitate software production. Project planning may include the following:

1. **Scope Management** - It defines the scope of project  this includes all the activities, process need to be done to make a deliverable software product. Scope management is essential because it creates boundaries of the project by clearly defining what would be done in the project and what would not be done.
2. **Project Estimation** - For an effective management accurate estimation of various measures is a must. With correct estimation, managers can manage and control the project more efficiently and effectively.
3. **Effort estimation** - The managers estimate efforts in terms of person-months(PM) to produce the software. For effort estimation software size should be known. This can either be derived by managers’ experience or organization’s historical data or software size can be converted into efforts by using some standard formulae.
4. **Time estimation** - Once size and efforts are estimated, the time required to produce the software can be estimated. 

5. **Cost estimation** - This might be considered as the most difficult of all because it depends on more elements than any of the previous ones. 

## Definition of Project
A project is a series of tasks that need to be completed to reach a specific outcome. A project can also be defined as a set of inputs and outputs required to achieve a particular goal. Projects can range from simple to complex and can be managed by one person or a hundred.

### Project vs Product

Product may be something produced by effort, project is the process of effort. Product may be a customer service whereas project is the process of service. Product lay stress on objectives, but project focuses on scope, resource, quality.

## Definition of Project Planning

Project planning needs utmost care and attention. <ins>Lack of planning is the main cause of schedule slippage, cost overruns, and leads to poor quality of software.</ins>
Project planning provides a framework that enables the manager to make reasonable estimates to resources, cost, schedule. The estimates are made within a limited period at the beginning pf the software project and should be updated regularly as the project progresses.

Basic goals of Planning are :

1. To look into the future of development of a project
2. Identify the activities that need to be performed to complete the project successfully
3. Plan the scheduling of activities
4. Plan the resource allocation for the activities

## Cost Estimation
For any new software project, it is necessary to know how much it will cost to develop and how much development time will it take. These estimates are needed before development is initiated, but how is this done? Several estimation procedures have been developed and are having the following attributes in common.

1. The Project scope must be established earlier.
Software metrics are used as a support from which evaluation is made.
2. The project is broken into small pieces which are estimated individually.
3. To achieve true cost & schedule estimate, several option arise.

## Cost Estimation Models
A model may be static or dynamic. In a static model, a single variable is taken as a key element for calculating cost and time. In a dynamic model, all variables are interdependent, and there is no basic variable.

<img src="https://static.javatpoint.com/tutorial/software-engineering/images/software-cost-estimation.png" height="250" width="400">

### Static, Single Variable Models

The key parameter that affects the cost of a project is size. Therefore this model is known as the size-based estimate model. The equation to calculate cost estimates is divided into two parts :

1. **Sized-based Cost estimates for large project** - The equation of effort is :

             Effort(E) = a*(size)^b
       
       The value of a and b are judged from the historical projects.
   The size of project is measured in Lines Of Code(LOC) or Kilo Lines Of Code(KLOC).The total effort (E) is measured in person months.Hence a cost of a project is calculated in PM i.e Person  Months.

 2. **Sized-based Cost estimates for small project** - The equation of effort is :

               Effort(E) = a*(size)+b

    This equation suggest that the project cost increases linearly with the size of final product.    

 ### Multivariable Model - COCOMO
 
 COnstructive COst estimation MOdel(COCOMO) was introduced by Berry Bohem. A size-based cost estimate model has a major drawback that it does not take into consideration the various other parameters which effects cost. Therefore to solve this problem COCOMO model is used as it consider various other factors in addition to the size of the project. The initial estimate (also called nominal estimate) is determined by an equation of the form used in the static single variable models, using KDLOC as the measure of the size. To determine the initial effort Ei in person-months the equation used is of the type is shown below

                E = a*(KLOC)^b

    The value of the constant a and b are depends on the project type. 

**In COCOMO, projects are categorized into three types :**

1. Organic
2. Semidetached
3. Embedded

1) **Organic** : A development project can be treated of the organic type, if the project deals with developing a well-understood application program, the size of the development team is reasonably small, and the team members are experienced in developing similar methods of projects. Examples of this type of projects are simple business systems, simple inventory management systems, and data processing systems.
2. **Semidetached**: A development project can be treated with semidetached type if the development consists of a mixture of experienced and inexperienced staff. Team members may have finite experience in related systems but may be unfamiliar with some aspects of the order being developed. Example of an Semidetached system includes developing a new operating system (OS), a Database Management System (DBMS), and complex inventory management system.

3. **Embedded** : A development project is treated to be of an embedded type, if the software being developed is strongly coupled to complex hardware, or if the stringent regulations on the operational method exist. For Example: ATM, Air Traffic control.

## Putnam Resource Allocation Model
The Lawrence Putnam model describes the time and effort requires finishing a software project of a specified size. Putnam makes a use of a so-called The Norden/Rayleigh Curve to estimate project effort, schedule & defect rate as shown in fig:

<img src="https://static.javatpoint.com/tutorial/software-engineering/images/putnam-resource-allocation-model.jpg" height="300" width="500">

Putnam noticed that software staffing profiles followed the well known Rayleigh distribution. Putnam used his observations about productivity levels to derive the software equation.

<img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/0d307d15a652aa0632c51f5f1df2e8956a38c803">

Here, 
- size is the product size, B is a scaling factor and is a function of project size, Productivity is the process productivity, the ability of a particular software organization to produce software of a given size at a particular defect rate, The effort is the total effort in PM, Time is the total schedule of project in years.

From above equation we can calculate the effort as, 

<img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/1721a429440d1975f9d17613a8c2d3ca97669d2a">

*One of the key feature of this model is simplicity.*

## Risk Management

Software development is an activity that uses a variety of technological advancements and requires high levels of knowledge. Because of these and other factors, every software development project contains elements of uncertainty. This is known as project risk.
There are three main classifications of risks which can affect a software project:

1) **Project risks** :  A vital project risk is schedule slippage. Since the software is intangible, it is very tough to monitor and control a software project. It is very tough to control something which cannot be identified.
2) **Technical risks** : Technical risks concern potential method, implementation, interfacing, testing, and maintenance issue. Most technical risks appear due to the development team's insufficient knowledge about the project.

3) **Business risks** : This type of risks contain risks of building an excellent product that no one need, losing budgetary or personnel commitments, etc.

### Risk Management Activities

<img src="https://static.javatpoint.com/tutorial/software-engineering/images/software-engineering-risk-management-activities.png" height="300" width="500">

1. **Risk Identification** : Risk identification is the first step in risk assessment, which identifies all the different risks for the particular project. A checklist of frequently occurring risks are probably the most common tool for risk identification. The other method of risk identification is decision driver. Decision driver analysis involve questioning and analyzing all the major decision taken for the project. If a decision has been driven by factors other than technical and management reasons, it is likely to be a source of risk in the project. Such decisions may be driven by politics, marketing etc.
2) **Risk Analysis** : During the risk analysis process, you have to consider every identified risk and make a perception of the probability and seriousness of that risk. There is no simple way to do this. You have to rely on your perception and experience of previous projects and the problems that arise in them.

3) **Risk Prioritization** : Risk prioritization helps the project focus on most critical risks, so that there should be least destruction. After the probability is determined, a table is made to formulate the risk of the project, and a priority level is made for every risk. The effect of the risk might be determined as catastrophic (threaten the survival of the plan), serious (would cause significant delays), tolerable (delays are within allowed contingency), or insignificant.

### Risk Control
It is the process of managing risks to achieve desired outcomes. After all, the identified risks of a plan are determined; the project must be made to include the most harmful and the most likely risks. There are three main methods to plan for risk management:

1. **Risk planning** : The main purpose of risk planning is to avoid the risk. It involves looking into the approach. It involves looking for different types of risks and their impact and then a plan is made, so that risks does not occur. If a particular risk cannot be avoided, a plan is made to reduce the impact of risk. Hence, risk management planning produces a plan for dealing with each significant risk. 
2. **Risk Resolution**: It is an approach, applied to solve the risk. It is the execution of risk plans. Some risk resolution approaches are as follows
 - **Prototypes** - The problem of poorly understood requirements can be solved with this approach.
- **Benchmarks** - Checkpoints are kept, so that there are no cost and schedule overruns.
- **Staffing** - By employing skilled staff the problem of inexperienced staff can be solved.


3. **Risk Monitoring** : Risk monitoring is the method king that your assumption about the product, process, and business risks has not changed.

## Project Scheduling
This is the most important activity after the cost estimation is done. The main goal of the schedule estimation is to find out the total duration of the project and different phases.
The manpower and different resources have to be allocated according to the fixed schedule.

### Project Scheduling Activities
Project scheduling is the proper distribution of time and effort. It also describes, what activity is to be performed at what time. This involves the following activities :

1. Identify all the functions required to complete the project.
2. Break down large functions into small activities.
3. Determine the dependency among various activities.
4. Establish the most likely size for the time duration required to complete the activities.
5. Allocate resources to activities.
6. Plan the beginning and ending dates for different activities.

### Gantt Chart
This is a Project Scheduling technique.The first Gantt chart was devised in the mid 1890s by Karol Adamiecki, a Polish engineer. A Gantt chart, commonly used in project management, is one of the most popular and useful ways of showing activities (tasks or events) displayed against time. On the left of the chart is a list of the activities and along the top is a suitable time scale. Each activity is represented by a bar, the position and length of the bar reflects the start date, duration and end date of the activity. 

<img src="https://www.clearpointstrategy.com/wp-content/uploads/2016/03/Gantt.jpg" height="250" width="600">

**Advantages** - It is easy for stakeholder’s to understand the timeline, it brings clarity to everyone when a project is going to start and expected to complete, team can manage its time accordingly, it also establishes accountability among stakeholders, it enables team to better coordinate project activities thereby enabling team to improving overall efficiency. 

**Disadvantages** - Tedious if one need to keep it updating regularly. It can become unmanageable for detailed project plan. This chart does not give an accurate picture of what amount of work is expected to be completed.Not easy to view everything on a single paper as bars may get longer with increase of time.

## Capability Maturity Model (CMM)

The  Capability Maturity Model (CMM) is a framework that helps the organization successfully address their critical issues. Based on the best current study in fields such as human resources, knowledge management, and organizational development, the CMM guides organizations in improving their steps for managing and developing their workforces.

### The five steps of the People CMM framework are:

<img src="https://static.javatpoint.com/tutorial/software-engineering/images/software-engineering-pcmm.png" height="" width="">

1. **Maturity Level 1 : Initial**

    In the beginning, everything is chaotic.  Success depends upon individual competence, motivation, and effort. Level 1 organizations can produce good results, but they are frequently late and over budget. 

2. **Maturity Level 2 : Repeatable** 

   Requirements are managed, and processes are planned, performed, measured, and controlled. Project management is used to track costs and schedules. The discipline is present to ensure that practices endure in times of stress. 

3. **Maturity Level 3 : Defined**

   Level 3 organizations have standardized their development processes so that they are
well-documented and understood. Management sets project objectives based on standard processes, and ensures that these goals are addressed. At this level, the standards and procedures for an individual project are derived from organizational
standards to suit that particular project. 

4. **Maturity Level 4 : Managed**

   Level 4 is about introducing precise measurements into the process. Maturity level 4
organizations use quantitative metrics, including statistics, to control key processes and
sub processes. Numeric goals are established for quality and performance, and are used in
process management. Detailed measures of performance are collected, analyzed, and
archived for future reference. 

5. **Maturity Level 5 : Optimizing**

   Level 5 is about focusing on continuously improving process performance. One main feature about this level is Process Change Management i.e we can change the process which are followed in SDLC model. So this level gives us flexibility to improve performance. Secondly it allwos Technology Change Management i.e if during  making of project there is a change in technology you can easily adopt the new technology.
### Applications Of CMM
The capability maturity models have not taken over the world, however. These are heavyweight processes compared to popular software methodologies such as agile software development. CMM requires significant resources to deploy and might not meet
the needs of all organizations. Critics have claimed that CMM is best-suited for large bureaucratic organizations. 

## Summary
In this chapter, we discussed how we can plan for a project and its goals. Then we head up to cost estimation and its models. Then we have Putnam resource allocation which finds how much manpower would be required during different phases of software in terms of person-months. At last, we have project scheduling which finds the total duration of the project and then we have the  capability maturity model, its levels, applications.

In the upcoming chapter, we will study about Software Designing.
![Chapter-3](https://img.shields.io/static/v1?label=Finished&message=Project-Planning&color=red) ![Chapter-3](https://img.shields.io/static/v1?label=Source&message=www.javatpoint.com&color==orange)![Chapter-3](https://img.shields.io/static/v1?label=PRs&message=Welcome&color=blue)
