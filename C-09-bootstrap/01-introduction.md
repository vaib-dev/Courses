# Chapter- 1 Introduction To Bootstrap

Welcome to the course of Bootstrap. In this course we will come to know about the topics like what, how, why related to bootstrap. We will also do practical but in different repository <a href="https://github.com/Vaibhavpratapsingh22/website">click here</a> to see the practical.

## What is Bootstrap?

*"Bootstrap is a free, open-source front-end library for designing websites and web applications. It contains HTML- and CSS-based design templates for everything from typography, forms, buttons, navigation and other interface components as well as JavaScript extensions. Unlike many other web frameworks, Bootstrap concerns itself with front-end development only."* - Wikipedia

So basically, bootstrap is an open-source website or library in which there is pre-made codes for different essentials required to built a website. We can customize them easily with basic knowledge of HTML and CSS. There are many components, styles of nav & bars etc. 

## How Bootstrap was started?

Bootstrap was **created at Twitter in mid-2010 by @mdo and @fat**. Prior to being an open-sourced framework, Bootstrap was known as Twitter Blueprint. A few months into development, Twitter held its first Hack Week and the project exploded as developers of all skill levels jumped in without any external guidance. **It served as the style guide for internal tools development at the company for over a year before its public release, and continues to do so today**.

**Originally released on Friday, August 19, 2011**, we’ve since had over twenty releases, including two major rewrites with v2 and v3. With Bootstrap 2, we added responsive functionality to the entire framework as an optional stylesheet. Building on that with Bootstrap 3, we rewrote the library once more to make it responsive by default with a mobile first approach.

The latest release, **Bootstrap 5**, focuses on improving v4’s codebase with as few major breaking changes as possible. We improved existing features and components, removed support for older browsers, dropped jQuery for regular JavaScript, and embraced more future-friendly technologies like CSS custom properties as part of our tooling.

## Prerequisites to start with Bootstrap?

Before starting, there are some skills you’ll have to know in order to learn and use the Bootstrap framework:

- HTML fundamentals
- Basic knowledge of CSS
- Some basic JQuery [optional]

## Get started with Bootstrap

Go to the official website of Bootstrap by <a href="https://getbootstrap.com">clicking here</a>. There you will find a Docs section in the header menu, after clicking on docs you will find all the elements of bootstrap.There are many ways to add Bootstrap in your code. You can either add all the properties of Bootstrap in one-go or you can also add some of the properties like JS only or CSS only. Below we will discuss all these properties one by one.

### 1. Adding all the properties of Bootstrap

If you want to add all the properties of Bootstrap then just copy and paste the below code and all the properties will be added in your code like CSS, JS, Icons, Fonts etc.

~~~
<!doctype html>
<html lang="en">
  <head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">

    <!-- Bootstrap CSS -->
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-EVSTQN3/azprG1Anm3QDgpJLIm9Nao0Yz1ztcQTwFspd3yD65VohhpuuCOmLASjC" crossorigin="anonymous">

    <title>Hello, world!</title>
  </head>
  <body>
    <h1>Hello, world!</h1>

    <!-- Optional JavaScript; choose one of the two! -->

    <!-- Option 1: Bootstrap Bundle with Popper -->
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/js/bootstrap.bundle.min.js" integrity="sha384-MrcW6ZMFYlzcLA8Nl+NtUVF0sA7MsXsP1UyJoMp4YLEuNSfAP+JcXn/tWtIaxVXM" crossorigin="anonymous"></script>

    <!-- Option 2: Separate Popper and Bootstrap JS -->
    <!--
    <script src="https://cdn.jsdelivr.net/npm/@popperjs/core@2.9.2/dist/umd/popper.min.js" integrity="sha384-IQsoLXl5PILFhosVNubq5LC7Qb9DXgDA9i+tQ8Zj3iwWAwPtgFTxbJ8NT4GN1R8p" crossorigin="anonymous"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/js/bootstrap.min.js" integrity="sha384-cVKIPhGWiC2Al4u+LWgxfKTRIcfu0JTxR+EQDz/bgldoEyl4H0zUF0QKbrJ0EcQF" crossorigin="anonymous"></script>
    -->
  </body>
</html>
~~~

### 2. Adding properties of CSS only

To add CSS in your code copy-paste the stylesheet <link> into your <head> before all other stylesheets to load our CSS.

~~~
<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-EVSTQN3/azprG1Anm3QDgpJLIm9Nao0Yz1ztcQTwFspd3yD65VohhpuuCOmLASjC" crossorigin="anonymous">
~~~

### 3. Adding JS properties only

To add the properties of JS copy-paste the below code.
**Note**: Many components of Bootstrap require the use of JavaScript to function. Specifically, they require bootstrap own JavaScript plugins and Popper. Place one of the following <script> near the end of your pages, right before the closing </body> tag, to enable them.

~~~
<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/js/bootstrap.bundle.min.js" integrity="sha384-MrcW6ZMFYlzcLA8Nl+NtUVF0sA7MsXsP1UyJoMp4YLEuNSfAP+JcXn/tWtIaxVXM" crossorigin="anonymous"></script>
~~~

## Why we use Bootstrap?

There are many reason’s why bootstrap is leading the web frameworks race,some of them are:

### 1. Reusability

Bootstrap contains ready made components,CSS styles and plugins that can be included directly into our code.Hence we can make use of these components and styles in our code,which will save time and helps in rapid development of the website/we app.

### 2. Mobile-first

The main priority when we make a website using bootstrap is to be mobile responsive.Mobile-first basically means that we build the website from a smartphone level and then scale it up to conform to the bigger sizes.
Easy to get started: It is easy to get started as it only requires the knowledge of HTML and CSS only.
Open source: It is open source in nature and completely free to download.

### 3. Great Grid system

Bootstrap makes use of the powerful 12 column grid system which is easy to use and is very consistent.

## Disadvantages of Bootstrap
### 1.Every Bootstrap Website Looks Similar
A great many of us are tired of seeing the same old Twitter Bootstrap theme again and again. Black header, giant hero, rounded blue buttons, Helvetica Neue.
Yes, you can customize the header to be a different color, maybe re-color some of the buttons, use a different font. Ultimately, however, that doesn’t change anything—it still looks like Bootstrap.

### 2. Can be Heavy
While it’s easy to build a responsive website with Bootstrap, the end results can be quite a bit heavy for the users in terms of slower loading times, as well as battery drain issues. Also, the files generated by Bootstrap can be huge in size, which can slow things down for you quite heavily. You might be able to go on and delete things manually, but this again defeats the purpose of using the framework at all.

### 3. Lots of changes required
Can require lots of overriding styles or rewriting their files if you have lots of customizations or want to deviate from Bootstrap structure.

## Summary
Working with Bootstrap is really very easy as it allows us to use the elements to give an awesome and attractive look to our website for free. After going through this chapter you can easily start with the Bootstrap and start building a website with the flow of the course. I will also be doing practical implementation but in different repository <a href="https://github.com/Vaibhavpratapsingh22/website">click here</a> to go my practical repo.

![edit2](https://img.shields.io/static/v1?label=Source&message=https://medium.com&color=red)![edit](https://img.shields.io/static/v1?label=PRs&message=Welcome&color=<COLOR>)[![Awesome](https://cdn.rawgit.com/sindresorhus/awesome/d7305f38d29fed78fa85652e3a63e154dd8e8829/media/badge.svg)](https://github.com/sindresorhus/awesome#readme)