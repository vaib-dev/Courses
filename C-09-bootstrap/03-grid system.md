# Chapter- 3 Grid System
Bootstrap grid system is a very common technique used to create web layouts that recognize the size of the screen a visitor is using and adapt to it. This is extremely important nowadays when so many devices of various sizes can be easily connected to the Internet. Grid system is an excellent way to create responsive layouts.

Using Bootstrap grid systems eliminates the fear of having your website displayed incorrectly on mobile phones or tablets - even if you created it on a personal computer with a widescreen monitor.

In this chapter, we will explain how Bootstrap columns and rows work and how to manipulate them to create a responsive layout for your modern website.

## Bootstrap Columns

The grid system of Bootstrap allows you to divide a row into 12 columns of equal width. However, these columns can also be combined to create columns that are wider and positioned differently. The grid can also be responsive and rearrange depending on the screen width or window size.

### Why does Bootstrap have 12 columns?
The reason Bootstrap has a 12-unit grid (instead of 10, 16, etc..) is that 12 evenly divides into 6 (halves), 4 (quarters) and 3 (thirds). This makes adapting to a variety of layouts much easier. Bootstrap’s grid columns are identified by different col-(breakpoint)-(units) CSS classes. So for example, col-md-3 would be a column that takes up 3 of the 12 units (or 25%) across in a row.

<p align="center"><img src="https://user-images.githubusercontent.com/54719422/125285320-29916400-e338-11eb-8bbe-5bc5da318d10.png"></p>

## Classes
Bootstrap uses CSS media queries to create responsive breakpoints that establish a boundary for each grid size. These grid sizes enable you to change the layout of columns to best match different screen widths and devices__ the essence of responsive design.

- .col-* -for screens narrower than 576px.
- .col-sm-* -for screens wider than 576px.
- .col-md-* - for screens wider than 768px.
- .col-lg-* - for screens wider than 992px.
- .col-xl-* - for screens wider than 1200px.

### How to use grid system?

To enable or “use” a grid size, you simply specify it using the appropriate col-*-* class in your HTML markup. For example,
3-units wide on medium screens…
~~~
<div class=”col-md-3">..</div>
~~~
6-units wide on small screens…
~~~
<div class=”col-sm-6">..</div>
~~~

**Key points to remember about breakpoints and grid sizes:**
1. Columns will stack vertically (and become full-width) on xs screens unless you use a specific col-xs-* class in your HTML markup. Use xs to prevent vertical stacking.

2. The smaller grid classes also apply to larger screens unless overriden specifically for larger screens. So, <div class=”col-md-6"></div> is effectively the same as <div class=”col-md-6 col-lg-6"></div>. Therefore, you only need to use the class for the smallest device width you want to support.

## Bootstrap Grid System Rules
To understand how the Bootstrap grid system is used, you must know the rules by which it functions:

1. To create horizontal groups of elements, you have to create a .row class first. For the proper alignment and padding, these should be placed into .container or .container-fluid containers.

2. Content is placed in columns that are placed in rows. Only columns should be direct children of .row containers.

3. The columns create gaps between each other that are referred to as gutters. They are offset as negative margin in the first and last columns of the row. The gutters are typically 15px wide on both sides of the column.
4. You can create grid columns by specifying how many of the 12 available columns they should span.
Column widths are all percentage values. This keeps them responsive and fluid.
5. Unlike Bootstrap 3, Bootstrap 4 uses flexbox instead of floats. This allows you to create equal columns without specifying their width. An example of this could be creating the containers with the .col-sm class, which would result in three columns with widths of 33.33%.

## Advanced Bootstrap Layouts
As you create different responsive layouts you find that some scenarios require more complex combinations of rows & columns to make “things fit” on multiple devices.
### Column Wrapping
- In some responsive scenarios you’ll see that it’s necessary to have columns exceeding 12 units in a single .row element. Consider for example a layout where we want 3 columns on larger devices, and 2 columns on smaller devices:

To get the below layout copy this following code:
~~~
<div class="row"> 
  <div class="col-xs-6 col-md-4"> x </div> 
  <div class="col-xs-6 col-md-4"> x </div> 
  <div class="col-xs-6 col-md-4"> x </div> 
  <div class="col-xs-6 col-md-4"> x </div> 
  <div class="col-xs-6 col-md-4"> x </div> 
  <div class="col-xs-6 col-md-4"> x </div> 
</div>
~~~
<p align="center"><img src="https://miro.medium.com/max/2000/0*hQKf30h43s11n_VZ.png"><p>

<p align="center"><img src="https://miro.medium.com/max/1240/0*5z95TI47K6TakZv5.png"><p>

### Offsets
The offset feature of the grid enables you to move columns to the right, or create more whitespace to the left. This comes in handy when you want a narrower centered layout.
Here’s an example of 2–33% width columns (col-*-4) that are centered by moving the first columns over 2 units (col-offset-md-2).
~~~
<div class="row">
  <div class="col-offset-md-2 col-md-4"> 1 </div>
  <div class="col-md-4"> 2 </div> 
</div>
~~~

### Nesting
Many scenarios require that columns inside columns, and in this case our columns become the containers. Bootstrap allows us to nest row and col-* inside other col-* which enables more control over when columns stack vertically at specific breakpoints.

~~~
<div class="row"> 
  <div class="col-md-6"> 
    <div class="row"> 
      <div class="col-md-12"> 1 </div> 
      <div class="col-md-12"> 2 </div> 
    </div> 
  </div> 
  <div class="col-md-6"> 3 </div> 
  <div class="col-md-6"> 4 </div> 
</div>
~~~

This is how it looks in large layout screen:
<p align="center"><img src="https://miro.medium.com/max/2000/0*2kLY-zwqi8Z5Y24U.png"><p>

In small screens it will look like nesting the columns:
<p align="center"><img src="https://miro.medium.com/max/1006/0*knPud2BH5y2BGXkA.png"><p>

## Options
Using the following table, you can easily check out the different layout building solutions that the Bootstrap grid system offers:

<p align="center"><img src="https://user-images.githubusercontent.com/54719422/125314179-96662780-e353-11eb-8761-620cdfca9d02.png"><p>

## Summary
This is the most important chapter of Bootstrap tutorial as without understanding grid system it would be very difficult to work with bootstrap. So, make sure that you understand each and every topic properly and read the complete grid system by <a href="https://getbootstrap.com/docs/5.0/layout/grid/">Clicking here.</a>
 Grid system helps you in creating Bootstrap layouts that respond to screen size easily. As responsive layout makes the content easier to read.
