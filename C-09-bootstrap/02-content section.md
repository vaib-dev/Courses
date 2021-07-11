# Chapter- 2 Content Section

This section guides about the basic elements o styles of bootstrap like typography styles, short codes, forms, tables etc. These elements or styles are mostly needed to create a website either be simple or dynamic. So, understanding this section becomes very important. Let's get started- 

The first things comes after clicking on the content option is the Reboot feature, let's start with this:

## 1. Reboot 
*"Reboot, a collection of element-specific CSS changes in a single file, kickstart Bootstrap to provide an elegant, consistent, and simple baseline to build upon."*
Reboot builds upon Normalize, providing many HTML elements with somewhat opinionated styles using only element selectors. Additional styling is done only with classes. 

### Here are our guidelines and reasons for choosing what to override in Reboot

- Update some browser default values to use rems instead of ems for scalable component spacing.
- Avoid margin-top. Vertical margins can collapse, yielding unexpected results. More importantly though, a single direction of margin is a simpler mental model.
- For easier scaling across device sizes, block elements should use rems for margins.
- Keep declarations of font-related properties to a minimum, using inherit whenever possible.

## 2. Typography
You can use different fon-family in bootstrap and the default family is "sans-serif". Some normal features that we can use in Bootstrap are:

### (a) Headings
In bootstrap all HTML headings, h1 to h6, are available. In this h1 heading is the biggest and h6 is the smallest as show:

**Heading	Example**- 
<h1>h1. Bootstrap heading</h1>	
<h2>h2. Bootstrap heading</h2>	
<h3>h3. Bootstrap heading</h3>	
<h4>h4. Bootstrap heading</h4>	
<h5>h5. Bootstrap heading</h5>	
<h6>h6. Bootstrap heading</h6>	

### (b) Paragraphs
Paragraphs are written under (p) tag as we write in HTML. But with the use of different classes we can edit the styles of (p) tag as shown:

~~~
<p class="lead">
  This is a lead paragraph. It stands out from regular paragraphs.
</p>
~~~

### (c) Inline text elements

Below are some styles that you can implement using the below code:

~~~ <p>You can use the mark tag to <mark>highlight</mark> text.</p>
<p><del>This line of text is meant to be treated as deleted text.</del></p>
<p><s>This line of text is meant to be treated as no longer accurate.</s></p>
<p><ins>This line of text is meant to be treated as an addition to the document.</ins></p>
<p><u>This line of text will render as underlined.</u></p>
<p><small>This line of text is meant to be treated as fine print.</small></p>
<p><strong>This line rendered as bold text.</strong></p>
<p><em>This line rendered as italicized text.</em></p>
~~~
**Output**- 
<p>You can use the mark tag to <mark>highlight</mark> text.</p>
<p><del>This line of text is meant to be treated as deleted text.</del></p>
<p><s>This line of text is meant to be treated as no longer accurate.</s></p>
<p><ins>This line of text is meant to be treated as an addition to the document.</ins></p>
<p><u>This line of text will render as underlined.</u></p>
<p><small>This line of text is meant to be treated as fine print.</small></p>
<p><strong>This line rendered as bold text.</strong></p>
<p><em>This line rendered as italicized text.</em></p>


### (d) Lists
When we use the class "Unstyled" then it removes the default list-style and left margin on list items (immediate children only). This only applies to immediate children list items, meaning you will need to add the class for any nested lists as well.

~~~
<ul class="list-unstyled">
  <li>This is a list.</li>
  <li>It appears completely unstyled.</li>
  <li>Structurally, it's still a list.</li>
  <li>However, this style only applies to immediate child elements.</li>
  <li>Nested lists:
    <ul>
      <li>are unaffected by this style</li>
      <li>will still show a bullet</li>
      <li>and have appropriate left margin</li>
    </ul>
  </li>
  <li>This may still come in handy in some situations.</li>
</ul>
~~~

## 3. Images
Images in Bootstrap are made responsive with .img-fluid. This applies max-width: 100%; and height: auto; to the image so that it scales with the parent element. Use the below code to add an image in your hero section:

~~~
<img src="..." class="img-fluid" alt="...">
~~~

### Image thumbnails
In addition to our border-radius utilities, you can **use .img-thumbnail to give an image a rounded 1px border appearance**. Code for adding a image thumbnail: 
~~~
1. To add the image at the beginning of the the flex 
<img src="..." class="rounded float-start" alt="..."> 
2. To add the image at the end of the the flex
<img src="..." class="rounded float-end" alt="...">
3. To add the image at the middle of the the flex
<img src="..." class="rounded mx-auto d-block" alt="...">
~~~

## 4. Tables
We can different styles to tables as we have various classes in Bootstrap to do so. Below is the code to add a basic layout for a  table:
~~~
<table class="table">
  <thead>
    <tr>
      <th scope="col">#</th>
      <th scope="col">First</th>
      <th scope="col">Last</th>
      <th scope="col">Handle</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <th scope="row">1</th>
      <td>Mark</td>
      <td>Otto</td>
      <td>@mdo</td>
    </tr>
    <tr>
      <th scope="row">2</th>
      <td>Jacob</td>
      <td>Thornton</td>
      <td>@fat</td>
    </tr>
    <tr>
      <th scope="row">3</th>
      <td colspan="2">Larry the Bird</td>
      <td>@twitter</td>
    </tr>
  </tbody>
</table>
~~~

### Variants in tables
There are many different types of styles that you can easily add to your code like use .table-striped to add zebra-striping to any table row, .table-hover to enable a hover state on table rows, etc.

Below is the code for table with different colors of rows:

~~~
<-- On tables -->
<table class="table-primary">...</table>
<table class="table-secondary">...</table>
<table class="table-success">...</table>
<table class="table-danger">...</table>
<table class="table-warning">...</table>
<table class="table-info">...</table>
<table class="table-light">...</table>
<table class="table-dark">...</table>

<-- On rows -->
<tr class="table-primary">...</tr>
<tr class="table-secondary">...</tr>
<tr class="table-success">...</tr>
<tr class="table-danger">...</tr>
<tr class="table-warning">...</tr>
<tr class="table-info">...</tr>
<tr class="table-light">...</tr>
<tr class="table-dark">...</tr>

<-- On cells (`td` or `th`) -->
<tr>
  <td class="table-primary">...</td>
  <td class="table-secondary">...</td>
  <td class="table-success">...</td>
  <td class="table-danger">...</td>
  <td class="table-warning">...</td>
  <td class="table-info">...</td>
  <td class="table-light">...</td>
  <td class="table-dark">...</td>
</tr>
~~~

**Output**-

<img src="https://user-images.githubusercontent.com/54719422/125184332-5f502300-e23a-11eb-8c94-a249ae9d822a.png"></img>

## 5. Figures
Anytime you need to display a piece of content like an image with an optional caption, consider using a figure tag.

Use the included .figure, .figure-img and .figure-caption classes to provide some baseline styles for the HTML5 elements. Images in figures have no explicit size, so be sure to add the .img-fluid class to your image tag to make it responsive.

~~~
<figure class="figure">
  <img src="..." class="figure-img img-fluid rounded" alt="...">
  <figcaption class="figure-caption">A caption for the above image.</figcaption>
</figure><figure class="figure">
  <img src="..." class="figure-img img-fluid rounded" alt="...">
  <figcaption class="figure-caption">A caption for the above image.</figcaption>
</figure>
~~~
Output- 
<img src="https://user-images.githubusercontent.com/54719422/125156260-34a29380-e182-11eb-803c-6f06ebe7cda1.png"></img>



## Summary
Now we know about the basic classes, styles and elements as we use in HTML. If you haven't studied HTML yet then understand the above topics in detail by <a href="https://getbootstrap.com/docs/5.0/content/typography/">clicking here.</a>
