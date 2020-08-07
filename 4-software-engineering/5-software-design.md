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
