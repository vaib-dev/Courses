# Chapter- 6 Utilities
Bootstrap utility classes are meant to be applied to various elements on the page to quickly style them in some manner without the need to write custom CSS rules. In many cases, you just provide a class for your element and observe the result right away. If you’ve never employed utility classes before, fear not, in most cases they are quite simple, yet powerful.

There are lots of Bootstrap utility classes available that set the element’s position, tweak its display and float properties, adjust margins and paddings, color the text and background, and more. A full list of these classes can be found on the Bootstrap official website official website, and in this article I’ll cover some interesting Bootstrap utility classes that may greatly simplify your life as a developer. Let's get started:

## 1. API
API stands for Application programming interface. To explain this concept I like to use a metaphor. Imagine going to your local bakery. At the counter you ask for the things that you want to buy. The guy at the counter will pack these items for you. You only get the specific bread that you want.

Just like ordering a bread, an application programming interface is a way to ask for things from someone else. On the internet API’s deliver the information to you that you ask from them.
Developers use API’s as way to get information from other services on the internet. Let’s say you are a web developer and want to know the weather in a certain city. You can use a weather API for this. The API will be requested to give the current temperature in city X. In milliseconds the API will lookup the temperature in a database and sends you the current temperature in city X.
### Why and When we need API?
**Imagine the following scenario:** You (as in, your application, or your client, this could be a web browser) wants to access another app’s data or functionality. For example, perhaps you want to access all Twitter tweets that mention the #farmersIndia hashtag.<br>
You could email Twitter and ask for a spreadsheet of all these tweets. But then you’d have to find a way to import that spreadsheet into your application; and, even if you stored them in a database, as we have been, the data would become outdated very quickly. It would be impossible to keep it up to date.<br>
It would be better and simpler for Twitter to provide you a way to query their application to get that data, so that you can view or use it in your own application. It would stay up to date automatically that way. An API brokers access to a different application to provide functionality or access to data, so data can be included in different applications.

## 2. Colors
Colorize text with color utilities. If you want to colorize links, you can use the .link-* helper classes which have :hover and :focus states.

~~~
<p class="text-primary">.text-primary</p>
<p class="text-secondary">.text-secondary</p>
<p class="text-success">.text-success</p>
<p class="text-danger">.text-danger</p>
<p class="text-warning bg-dark">.text-warning</p>
<p class="text-info bg-dark">.text-info</p>
<p class="text-light bg-dark">.text-light</p>
<p class="text-dark">.text-dark</p>
<p class="text-body">.text-body</p>
<p class="text-muted">.text-muted</p>
<p class="text-white bg-dark">.text-white</p>
<p class="text-black-50">.text-black-50</p>
<p class="text-white-50 bg-dark">.text-white-50</p>
~~~
Output:<br>
<p align="center"><img src="https://user-images.githubusercontent.com/54719422/126746810-69d01c9f-3b57-4d88-861a-fb77e6d3c2d1.png"></p>

### Background Color
Similar to the contextual text color classes, set the background of an element to any contextual class. Background utilities do not set color, so in some cases you’ll want to use .text-* color utilities.

~~~
<div class="p-3 mb-2 bg-primary text-white">.bg-primary</div>
<div class="p-3 mb-2 bg-secondary text-white">.bg-secondary</div>
<div class="p-3 mb-2 bg-success text-white">.bg-success</div>
<div class="p-3 mb-2 bg-danger text-white">.bg-danger</div>
<div class="p-3 mb-2 bg-warning text-dark">.bg-warning</div>
<div class="p-3 mb-2 bg-info text-dark">.bg-info</div>
<div class="p-3 mb-2 bg-light text-dark">.bg-light</div>
<div class="p-3 mb-2 bg-dark text-white">.bg-dark</div>
<div class="p-3 mb-2 bg-body text-dark">.bg-body</div>
<div class="p-3 mb-2 bg-white text-dark">.bg-white</div>
<div class="p-3 mb-2 bg-transparent text-dark">.bg-transparent</div>
~~~

Output:<br>
<p align="center"><img src="https://user-images.githubusercontent.com/54719422/126747134-f0670890-1393-4f77-8bd9-6e490fad2f8a.png"></p>

## 4. Position
Quick positioning classes are available, though they are not responsive. You can use the below classes in-order to set the position of the items:

~~~
<div class="position-static">...</div>
<div class="position-relative">...</div>
<div class="position-absolute">...</div>
<div class="position-fixed">...</div>
<div class="position-sticky">...</div>
<div class="fixed-top">...</div>
<div class="fixed-bottom">...</div>
<div class="sticky-top">...</div>
~~~
## 5. Flex
Flex is a new and much-anticipated feature of Bootstrap 4. It allows us to easily manage an element’s layout and alignment with a bunch of classes. Note, however, that this feature relies on the display flex property, which may not be supported by older browsers. Interestingly, Bootstrap’s grid system now also relies on flex-box.

Flex is quite a big topic on its own and we won’t discuss it thoroughly in this article. Let me just quickly show some results that you may achieve with this feature. <br>
First, it’s possible to easily control the direction of your elements (that is, whether they’ll be displayed left to right or right to left). For instance:
~~~
<div class="d-flex flex-row-reverse">
  <div class="p-2">Flex item 1</div>
  <div class="p-2">Flex item 2</div>
  <div class="p-2">Flex item 3</div>
</div>
~~~
This will render three elements aligned to the right, with the first element located on the right-most position:<br>
The order of the elements may be further controlled with the classes like order-N where N is the position’s number:

<p align="center"><img src="https://uploads.sitepoint.com/wp-content/uploads/2018/02/1518558118flex_reverse.png"></p>

~~~
<div class="d-flex flex-nowrap">
  <div class="order-3 p-2">First flex item</div>
  <div class="order-2 p-2">Second flex item</div>
  <div class="order-1 p-2">Third flex item</div>
</div>
~~~
Note that this feature supports responsiveness with the classes like order-sm-1. The elements can be also aligned in a specific manner on the X or Y axis. For example:<br>
~~~
<div class="d-flex align-items-center bd-highlight mb-3">
  <div>Flex item</div>
</div>
~~~
This will center the item on the Y axis.

## 6. Sizing
Sizing feature allows you to adjust the width and height. This includes support for 25%, 50%, 75%, and 100% by default. Modify those values as you need to generate different designs.

### Adjusting Width
~~~
<div class="w-25 p-3" style="background-color: #eee;">Width 25%</div>
<div class="w-50 p-3" style="background-color: #eee;">Width 50%</div>
<div class="w-75 p-3" style="background-color: #eee;">Width 75%</div>
<div class="w-100 p-3" style="background-color: #eee;">Width 100%</div>
~~~

Output:<br>
<p align="center"><img src="https://user-images.githubusercontent.com/54719422/126936552-0485b690-a3f3-484e-89ce-8f92fd908ead.png">
</p>

### Adjusting Height

~~~
<div style="height: 100px; background-color: rgba(255,0,0,0.1);">
  <div class="h-25 d-inline-block" style="width: 120px; background-color: rgba(0,0,255,.1)">Height 25%</div>
  <div class="h-50 d-inline-block" style="width: 120px; background-color: rgba(0,0,255,.1)">Height 50%</div>
  <div class="h-75 d-inline-block" style="width: 120px; background-color: rgba(0,0,255,.1)">Height 75%</div>
  <div class="h-100 d-inline-block" style="width: 120px; background-color: rgba(0,0,255,.1)">Height 100%</div>
</div>
~~~
Output:<br>
<p align="center"><img src="https://user-images.githubusercontent.com/54719422/126936743-c20e5554-385a-4f41-a728-1d0fde90e5b9.png">
</p>

## Summary
In this article, we discussed Bootstrap utility classes that simplify styling of various elements on the web page. I have covered utilities like flex, API, Colors, etc and seen some examples of their usage. Of course, there’s more to these classes, so be sure to browse the official documentation, where you’ll find even more useful examples <a href="https://getbootstrap.com/docs/4.0/utilities/borders/">click here</a> to visit.

