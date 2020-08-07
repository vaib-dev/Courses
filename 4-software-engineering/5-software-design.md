# Chapter 5 - Software Designing
Software design is a mechanism to transform user requirements into some suitable form, which helps the programmer in software coding and implementation. It deals with representing the client's requirement, as described in SRS (Software Requirement Specification) document, into a form, i.e., easily implementable using a programming language.

The software design phase is the first step in SDLC (Software Design Life Cycle), which moves the concentration from the problem domain to the solution domain. In software design, we consider the system to be a set of components or modules with clearly defined behaviors & boundaries.

## Objective of Software Designing
Objectives of Software Design
Following are the purposes of Software design:
<img src="https://static.javatpoint.com/tutorial/software-engineering/images/software-engineering-software-design2.png" height="" width="">

1. **Correctness** : Software design should be correct as per requirement.
2. ****Completeness** : The design should have all components like data structures, modules, and external interfaces, etc.
3. **Efficiency** : Resources should be used efficiently by the program.
4. **Flexibility** : Able to modify on changing needs.
5. **Consistency** : There should not be any inconsistency in the design.
6. **Maintainability** : The design should be so simple so that it can be easily maintainable by other designers.

## UML
A picture is worth a thousand words, UML (Unified Modeling Language) is a standard language for specifying, visualizing, constructing, and documenting the artifacts of software systems. UML was created by the Object Management Group (OMG) and UML 1.0 specification draft was proposed to the OMG in January 1997. It was initially started to capture the behavior of complex software and non-software system and now it has become an OMG standard.

### Goals of UML
A picture is worth a thousand words, this idiom absolutely fits describing UML. Object-oriented concepts were introduced much earlier than UML. At that point of time, there were no standard methodologies to organize and consolidate the object-oriented development. It was then that UML came into the picture.

There are many goals for developing UML but the most important is to define some general-purpose modeling language, which all modelers can use and it also needs to be made simple to understand and use.

## Object-Oriented Concepts
UML can be described as the successor of object-oriented (OO) analysis and design.

An object contains both data and methods that control the data. The data represents the state of the object. A class describes an object and they also form a hierarchy to model the real-world system. The hierarchy is represented as inheritance and the classes can also be associated in different ways as per the requirement.

Objects are the real-world entities that exist around us and the basic concepts such as abstraction, encapsulation, inheritance, and polymorphism all can be represented using UML.

UML is powerful enough to represent all the concepts that exist in object-oriented analysis and design. UML diagrams are the representation of object-oriented concepts only. Thus, before learning UML, it becomes important to understand the object-oriented in detail.

Following are some fundamental concepts of the object-oriented world −

1. **Objects** − Objects represent an entity and the basic building block.

2. **Class** − Class is the copy of an object.

3. **Abstraction** − Abstraction represents the behavior of the real-world entity.

4. **Encapsulation** − Encapsulation is the mechanism of binding the data together and hiding them from the outside world.

5. **Inheritance** − Inheritance is the mechanism of making new classes from existing ones.

6. **Polymorphism** − It defines the mechanism to exists in different forms.

There are three basic steps where the OO concepts are applied and implemented. The steps can be defined as

OO Analysis → OO Design → OO implementation using OO languages

This chapter describes all the UML building blocks. The building blocks of UML can be defined as −

- Things
- Relationships
- Diagrams

### Things
Things are the most important building blocks of UML. Things can be −

1. Structural
2. Behavioral
3. Grouping
4. Annotation

**Structural Things** - Structural things define the static part of the model. They represent the physical and conceptual elements. Below is the brief description of the structural things.

- Class − Class represents a set of objects having similar responsibilities.

- Interface − Interface defines a set of operations, which specify the responsibility of a class.

- Collaboration − Collaboration defines an interaction between elements.

- Use case − Use case represents a set of actions performed by a system for a specific goal.

- Component − Component describes the physical part of a system.

- Node − A node can be defined as a physical element that exists at run time.

**Behavioral Things** - A behavioral thing consists of the dynamic parts of UML models. Following are the behavioral things −

- Interaction − It is defined as a behavior that consists of a group of messages exchanged among elements to accomplish a specific task.

- State machine − It is useful when the state of an object in its life cycle is important. It defines the sequence of states an object goes through in response to events. Events are external factors responsible for state change

**Grouping Things** - It can be defined as a mechanism to group elements of a UML model together. There is only one grouping thing available −

- Package − It is the only one grouping thing available for gathering structural and behavioral things.

**Annotation Things** - It can be defined as a mechanism to capture remarks, descriptions, and comments of UML model elements. - Note - It is the only one Annotation thing available. A note is used to render comments, constraints, etc. of a UML element.

**Relationship** - This is another most important building block of UML. It shows how the elements are associated with each other and this association describes the functionality of an application.There are four kinds of relationships available.

- Dependency - It is a relationship between two things in which change in one element also affects the other.

- Association - It is basically a set of links that connects the elements of a UML model. It also describes how many objects are taking part in that relationship.

- Generalization - It can be defined as a relationship which connects a specialized element with a generalized element. It basically describes the inheritance relationship in the world of objects.

- Realization - It can be defined as a relationship in which two elements are connected. One element describes some responsibility, which is not implemented and the other one implements them. This relationship exists in the case of interfaces.

**Diagrams** - All the elements, relationships are used to make a complete UML diagram and the diagram represents a system. The visual effect of the UML diagram is the most important part of the entire process. All the other elements are used to make it complete.

UML includes the following nine diagrams, the details of which are described in the subsequent chapters.

- Class diagram
- Object diagram
- Use case diagram
- Sequence diagram
- Collaboration diagram
- Activity diagram
- State-chart diagram
- Deployment diagram
- Component diagram
 
 Now we will discuss about these different types of UML diagrams in detail.

 ## Class Diagram

 A class is represented by a rectangle that contains three compartments stacked vertically—the top compartment contains the class’s name and is mandatory, but the bottom two compartments give details about the class attributes and class operations or behaviors.

### How to draw a class diagram ?
The following points should be remembered while drawing a class diagram −

- The name of the class diagram should be meaningful to describe the aspect of the system.
- Each element and their relationships should be identified in advance.
- Responsibility (attributes and methods) of each class should be clearly identified
- For each class, minimum number of properties should be specified, as unnecessary properties will make the diagram complicated.
- Use notes whenever required to describe some aspect of the diagram. At the end of the drawing it should be understandable to the developer/coder.

Finally, before making the final version, the diagram should be drawn on plain paper and reworked as many times as possible to make it correct.

 <img src="https://www.smartdraw.com/class-diagram/img/class-diagram-example-maker.png?bn=1510011166" height="" width="">

## Object Diagram

Object diagrams are derived from class diagrams so object diagrams are dependent upon class diagrams.

Object diagrams represent an instance of a class diagram. The basic concepts are similar for class diagrams and object diagrams. Object diagrams also represent the static view of a system but this static view is a snapshot of the system at a particular moment.

### How to draw an object diagram ?
The following points should be remembered while drawing an object diagram −

- The object diagram should have a meaningful name to indicate its purpose.
- The most important elements are to be identified.
- The association among objects should be clarified.
- Values of different elements need to be captured to include in the object diagram.
- Add proper notes at points where more clarity is required.

<img src="https://upload.wikimedia.org/wikipedia/commons/1/17/Object_diagram.png" height="" width="">

## Component Diagram

Component diagrams are different in terms of nature and behavior. Component diagrams are used to model the physical aspects of a system. Now the question is, what are these physical aspects? Physical aspects are elements such as libraries, files, documents, etc. which reside in a node. Component diagrams are used to visualize the organization and relationships among components in a system. These diagrams are also used to make executable systems.

### How to Draw a Component Diagram?
The following points should be remembered while drawing an component diagram −

- Use a meaningful name to identify the component for which the diagram is to be drawn.
- Prepare a mental layout before producing the using tools.
- Use notes for clarifying important points.

<img src="https://1.bp.blogspot.com/-hZxgZYJKKm8/WtBwUvDQ6gI/AAAAAAAAACg/FzYxeE9alkw7ZecNuvWXB9K4H70H7SXkACK4BGAYYCw/s1600/component-diagram.png" height="" width="">

## Deployment Diagram
Deployment diagrams are used to visualize the topology of the physical components of a system, where the software components are deployed. Deployment diagrams are used to describe the static deployment view of a system. Deployment diagrams consist of nodes and their relationships.

### How to Draw a Deployment Diagram?
The following points should be remembered while drawing a Deployment diagram −

The Deployment diagram represents the deployment view of a system. It is related to the component diagram because the components are deployed using the deployment diagrams. A deployment diagram consists of nodes. Nodes are nothing but physical hardware used to deploy the application.

<img src="https://cdn-images.visual-paradigm.com/guide/uml/what-is-deployment-diagram/03-deployment-diagram-for-embedded-system.png" height="" width="">

## Use Case Diagram

Only static behavior is not sufficient to model a system rather dynamic behavior is more important than static behavior. In UML, there are five diagrams available to model the dynamic nature and use case diagram is one of them. Now as we have to discuss that the use case diagram is dynamic in nature, there should be some internal or external factors for making the interaction.

These internal and external agents are known as actors. Use case diagrams consists of actors, use cases and their relationships. The diagram is used to model the system/subsystem of an application. A single use case diagram captures a particular functionality of a system.

### How to Draw a Use Case Diagram?
The following points should be remembered while drawing a use case diagram −

- The name of a use case is very important. The name should be chosen in such a way so that it can identify the functionalities performed.
- Give a suitable name for actors.
- Show relationships and dependencies clearly in the diagram.
- Do not try to include all types of relationships, as the main purpose of the diagram is to identify the requirements.
- Use notes whenever required to clarify some important points.

<img src="https://i.pinimg.com/originals/4b/e9/80/4be980b390d0524b67557d72d3f8b401.png" height="" width="">