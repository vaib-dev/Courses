# Chapter -1 Introduction to Javascript

JavaScript is a dynamic, weakly typed programming language which is compiled at
runtime. It can be executed as part of a webpage in a browser or directly on any
machine (“host environment”). JavaScript was created to make webpages more dynamic (e.g. change content on a page directly from inside the browser). Originally, it was called LiveScript but due to the popularity of Java, it was renamed to JavaScript. **JavaScript is totally independent from Java and has nothing in common with Java!**

## History of JavaScript
In 1993, Mosaic, the first popular web browser, came into existence. In the year 1994, Netscape was founded by Marc Andreessen. He realized that the web needed to become more dynamic. Thus, a 'glue language' was believed to be provided to HTML to make web designing easy for designers and part-time programmers. Consequently, in 1995, the company recruited Brendan Eich intending to implement and embed Scheme programming language to the browser. But, before Brendan could start, the company merged with Sun Microsystems for adding Java into its Navigator so that it could compete with Microsoft over the web technologies and platforms. 

Now, two languages were there: Java and the scripting language. Further, Netscape decided to give a similar name to the scripting language as Java's. It led to 'Javascript'. Finally, in May 1995, Marc Andreessen coined the first code of Javascript named 'Mocha'. Later, the marketing team replaced the name with 'LiveScript'. But, due to trademark reasons and certain other reasons, in December 1995, the language was finally renamed to 'JavaScript'. From then, JavaScript came into existence.

### Application of JavaScript
JavaScript is used to create interactive websites. It is mainly used for:

1. Client-side validation
2. Dynamic drop-down menus
3. Displaying date and time
4. Displaying pop-up windows and dialog boxes (like an alert dialog box, confirm dialog box and prompt dialog box),
Displaying clocks etc.

### How javascript code is executed in browsers?
Today, JavaScript can execute not only in the browser, but also on the server, or actually on any device that has a special program called the JavaScript engine.

The browser has an embedded engine sometimes called a “JavaScript virtual machine”.

Different engines have different “codenames”. For example:

1. **V8** – in Chrome and Opera.
2. **SpiderMonkey** – in Firefox.

There are other codenames like “Chakra” for IE, “ChakraCore” for Microsoft Edge, “Nitro” and “SquirrelFish” for Safari, etc.
The terms above are good to remember because they are used in developer articles on the internet. We’ll use them too. For instance, if “a feature X is supported by V8”, then it probably works in Chrome and Opera.

**How do engines works**: Engines are complicated. But the basics are easy. The engine (embedded if it’s a browser) reads (“parses”) the script. Then it converts (“compiles”) the script to the machine language. And then the machine code runs, pretty fast. The engine applies optimizations at each step of the process. It even watches the compiled script as it runs, analyzes the data that flows through it, and further optimizes the machine code based on that knowledge.

<p text-align="center"><img src="https://user-images.githubusercontent.com/54719422/101372125-8ffd6200-38d1-11eb-9046-bfac2e1f4a9e.png"></p>

## Putting JS file in HTML document
We can use javascript with HTML code on two ways that are internally or externally. Below we will see them with examples.

### Internal Javascript File
JavaScript can be placed at two positions in HTML file that are:
1. Within body tag
2. Within head tag

**1. Code between the body tag**:
In the above example, we have displayed the dynamic content using JavaScript. Let’s see the simple example of JavaScript that displays alert dialog box. 

    <html>
    <head></head>
    <body>
    <script type="text/javascript">  
    document.write("JavaScript is a simple language for javascript learners");  
    </script>  
    </body>
    </html>

**2. Code between the head tag**:
Let’s see the same example of displaying an alert dialog box of JavaScript that is contained inside the head tag.

In this example, we are creating an alert message that will be displaying on the website before the HTML code which means when we click on the OK button on the website only then we will be able to see our HTML web-page.

    <html>  
    <head>  
    <script type="text/javascript">  
     alert("Hello javascript"); 
    </script>  
    </head>  

### External JavaScript file
We can create external JavaScript file and embed it in many html page. It provides code re usability because single JavaScript file can be used in several html pages. An external JavaScript file must be saved by .js extension. It is recommended to embed all JavaScript files into a single file. It increases the speed of the webpage.

Let's create an external JavaScript file that prints Hello javascript in a alert dialog box. **message.js**
  
     alert("Hello javascript");  

**Including the JS file in HTML**: Let's include the JavaScript file into html page. It calls the JavaScript function on button click. **index.html**

      <html>  
      <head>  
      <script type="textjavascript"               src="message.js"></script>  
      </head>  
      <body>  
      <p>Welcome to JavaScript</p>  
      </body>  
      </html>  
**Advantages of External JavaScript**:

There will be following benefits if a user creates an external javascript:

1. It helps in the reusability of code in more than one HTML file.
2. It allows easy code readability.
3. It is time-efficient as web browsers cache the external js files, which further reduces the page loading time.
4. The length of the code reduces as only we need to specify the location of the js file.

**Disadvantages of External JavaScript**: 

There are the following disadvantages of external files:

1. The stealer may download the coder's code using the url of the js file.
2. If two js files are dependent on one another, then a failure in one file may affect the execution of the other dependent file.
3. The web browser needs to make an additional http request to get the js code.
4. If it is a few lines of code, then better to implement the internal javascript code.

## Summary
It's just the starting of the wonderful and interesting language. We will learn all the concepts of javascript in this course. This chapter mainly tells you about what, how, when of Javascript. Then we talked about how to use the .js internally and externally with HTML file.

In the next chapter we will learn about the control statements of javascript.



![edit2](https://img.shields.io/static/v1?label=Source&message=www.javatpoint.org&color=orange)![edit](https://img.shields.io/static/v1?label=PRs&message=Welcome&color=<COLOR>)[![Awesome](https://cdn.rawgit.com/sindresorhus/awesome/d7305f38d29fed78fa85652e3a63e154dd8e8829/media/badge.svg)](https://github.com/sindresorhus/awesome#readme)
