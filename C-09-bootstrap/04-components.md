# Chapter- 4 Understanding Components 
Bootstrap comes bundled with basic HTML and CSS design templates that include many common UI components. These include Typography, Tables, Forms, Buttons, Glyph-icons, Dropdowns, Buttons and Input Groups, Navigation, Pagination, Labels and Badges, Alerts, Progress Bars, Modals, Tabs, Accordions, Carousels, and many others. Let's see how to implement these components on your website.

## 1. <a href="https://getbootstrap.com/docs/5.0/components/buttons/">Buttons</a>
Bootstrap provides clickable button to put content such as text and images. You can include the text to button by using the "input" tag.

You can create button by using .btn class followed by desired style (e.g. btn-success). Bootstrap provides some options to style buttons, which are listed below:
~~~
<button type="button" class="btn btn-primary">Primary</button>
<button type="button" class="btn btn-secondary">Secondary</button>
<button type="button" class="btn btn-success">Success</button>
<button type="button" class="btn btn-danger">Danger</button>
<button type="button" class="btn btn-warning">Warning</button>
<button type="button" class="btn btn-info">Info</button>
<button type="button" class="btn btn-light">Light</button>
<button type="button" class="btn btn-dark">Dark</button>
<button type="button" class="btn btn-link">Link</button>
~~~

**Output**:

<img src="https://user-images.githubusercontent.com/54719422/125814244-7737b02a-d863-49f1-9c0c-87eb805a67d9.png">

## 2. <a href="https://getbootstrap.com/docs/5.0/components/carousel/">Carousel</a>
Carousel is a flexible, responsive way to add a slider to your site. To create a carousel, add the .carousel and .slide classes to the container along with an id.
- Specify the slides in a "div" with class .carousel-inner and each slide defined with .carousel-item class.
- Add the .active class to one of the slides to make carousel visible; otherwise the carousel will not be visible. 

### Styles of Carousel
1. **Slides only**: Here’s a carousel with slides only. Note the presence of the .d-block and .w-100 on carousel images to prevent browser default image alignment.

Example: 
~~~
<div id="carouselExampleSlidesOnly" class="carousel slide" data-bs-ride="carousel">
  <div class="carousel-inner">
    <div class="carousel-item active">
      <img src="..." class="d-block w-100" alt="...">
    </div>
    <div class="carousel-item">
      <img src="..." class="d-block w-100" alt="...">
    </div>
    <div class="carousel-item">
      <img src="..." class="d-block w-100" alt="...">
    </div>
  </div>
</div>
~~~
Output: 

<img src="https://user-images.githubusercontent.com/54719422/125814904-aaa9bd07-a96d-499c-9113-ac01191dea15.png">

**2. With controls:** Adding in the previous and next controls. We recommend using "button" elements, but you can also use "a" elements with role="button".

 Example: 
 ~~~
<div id="carouselExampleControls" class="carousel slide" data-bs-ride="carousel">
  <div class="carousel-inner">
    <div class="carousel-item active">
      <img src="..." class="d-block w-100" alt="...">
    </div>
    <div class="carousel-item">
      <img src="..." class="d-block w-100" alt="...">
    </div>
    <div class="carousel-item">
      <img src="..." class="d-block w-100" alt="...">
    </div>
  </div>
  <button class="carousel-control-prev" type="button" data-bs-target="#carouselExampleControls" data-bs-slide="prev">
    <span class="carousel-control-prev-icon" aria-hidden="true"></span>
    <span class="visually-hidden">Previous</span>
  </button>
  <button class="carousel-control-next" type="button" data-bs-target="#carouselExampleControls" data-bs-slide="next">
    <span class="carousel-control-next-icon" aria-hidden="true"></span>
    <span class="visually-hidden">Next</span>
  </button>
</div>
 ~~~
 Output: 

 <img src="https://user-images.githubusercontent.com/54719422/125815408-39a7208c-8b91-4c4a-8cad-a974e1be0896.png">

## 3. <a href="">Navbar</a> 
It provides navigation headers for your application or site. Navbar collapse in mobile views and become horizontal as the available viewport width increases.

### Styles of Navbar
1. **Basic Navbar**: To create a basic navbar, add the .navbar class with responsive collapsing class .navbar-expand-xl|lg|md|sm (provides navbar on extra large, large, medium or small screens). To add links to the navbar, simply add an unordered list with the .navbar-nav class. To define each individual list item, add .nav-item class to "li" element and use the .nav-link class to an "a" element for individual links.

The following example demonstrates creation of a basic navbar:
~~~
<nav class="navbar navbar-expand-lg navbar-light bg-light">
  <div class="container-fluid">
    <a class="navbar-brand" href="#">Navbar</a>
    <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
      <span class="navbar-toggler-icon"></span>
    </button>
    <div class="collapse navbar-collapse" id="navbarSupportedContent">
      <ul class="navbar-nav me-auto mb-2 mb-lg-0">
        <li class="nav-item">
          <a class="nav-link active" aria-current="page" href="#">Home</a>
        </li>
        <li class="nav-item">
          <a class="nav-link" href="#">Link</a>
        </li>
        <li class="nav-item dropdown">
          <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-bs-toggle="dropdown" aria-expanded="false">
            Dropdown
          </a>
          <ul class="dropdown-menu" aria-labelledby="navbarDropdown">
            <li><a class="dropdown-item" href="#">Action</a></li>
            <li><a class="dropdown-item" href="#">Another action</a></li>
            <li><hr class="dropdown-divider"></li>
            <li><a class="dropdown-item" href="#">Something else here</a></li>
          </ul>
        </li>
        <li class="nav-item">
          <a class="nav-link disabled" href="#" tabindex="-1" aria-disabled="true">Disabled</a>
        </li>
      </ul>
      <form class="d-flex">
        <input class="form-control me-2" type="search" placeholder="Search" aria-label="Search">
        <button class="btn btn-outline-success" type="submit">Search</button>
      </form>
    </div>
  </div>
</nav>
~~~
Output:

<img src="https://user-images.githubusercontent.com/54719422/125817838-d4dc0feb-1201-4110-a907-1148afee48dd.png">

2. **Image and text**: The brand or logo of the page can be highlighted by using the .navbar-brand class as shown in the below example;
~~~
<nav class="navbar navbar-light bg-light">
  <div class="container-fluid">
    <a class="navbar-brand" href="#">
      <img src="/docs/5.0/assets/brand/bootstrap-logo.svg" alt="" width="30" height="24" class="d-inline-block align-text-top">
      Bootstrap
    </a>
  </div>
</nav>
~~~
Output:

<img src="https://user-images.githubusercontent.com/54719422/125818164-d9bdeaac-a208-4712-a229-4b2979302854.png">

## 4. <a href="https://getbootstrap.com/docs/5.0/components/progress/">Progress bars</a>
This component is used to provide the visuals on the feedback on the progress of work or action with a progress bar.
### Styles of Progress Bars
1. Basic Progress Bar
The basic progress bar can be created by adding "div" element with a class of .progress and add the .progress-bar class inside its child element. Add a style attribute with the width expressed as a percentage. Say for example, style = "60%"; indicates that the progress bar was at 60%. The following example demonstrates this:

Example:
~~~
<div class="progress">
  <div class="progress-bar" role="progressbar" aria-valuenow="0" aria-valuemin="0" aria-valuemax="100"></div>
</div>
<div class="progress">
  <div class="progress-bar" role="progressbar" style="width: 25%" aria-valuenow="25" aria-valuemin="0" aria-valuemax="100"></div>
</div>
<div class="progress">
  <div class="progress-bar" role="progressbar" style="width: 50%" aria-valuenow="50" aria-valuemin="0" aria-valuemax="100"></div>
</div>
<div class="progress">
  <div class="progress-bar" role="progressbar" style="width: 75%" aria-valuenow="75" aria-valuemin="0" aria-valuemax="100"></div>
</div>
<div class="progress">
  <div class="progress-bar" role="progressbar" style="width: 100%" aria-valuenow="100" aria-valuemin="0" aria-valuemax="100"></div>
</div>
~~~
Output:

<img src="https://user-images.githubusercontent.com/54719422/125821275-3dfb2162-d9fa-47a2-96d1-11ee12efba38.png">

## 5. <a href="https://getbootstrap.com/docs/5.0/components/offcanvas/">Offcanvas</a>
Build hidden sidebars into your project for navigation, shopping carts, and more with a few classes and our JavaScript plugin.

Example:

1. Enable Body Scrolling
~~~
<button class="btn btn-primary" type="button" data-bs-toggle="offcanvas" data-bs-target="#offcanvasScrolling" aria-controls="offcanvasScrolling">Enable body scrolling</button>
<button class="btn btn-primary" type="button" data-bs-toggle="offcanvas" data-bs-target="#offcanvasWithBackdrop" aria-controls="offcanvasWithBackdrop">Enable backdrop (default)</button>
<button class="btn btn-primary" type="button" data-bs-toggle="offcanvas" data-bs-target="#offcanvasWithBothOptions" aria-controls="offcanvasWithBothOptions">Enable both scrolling & backdrop</button>
~~~
2. No body scroll with dark background
~~~
<div class="offcanvas offcanvas-start" data-bs-scroll="true" data-bs-backdrop="false" tabindex="-1" id="offcanvasScrolling" aria-labelledby="offcanvasScrollingLabel">
  <div class="offcanvas-header">
    <h5 class="offcanvas-title" id="offcanvasScrollingLabel">Colored with scrolling</h5>
    <button type="button" class="btn-close text-reset" data-bs-dismiss="offcanvas" aria-label="Close"></button>
  </div>
  <div class="offcanvas-body">
    <p>Try scrolling the rest of the page to see this option in action.</p>
  </div>
</div>
~~~

## Summary
Bootstrap framework is a very handy tool for bringing in responsiveness to the web pages. The components explained in this chapter are some of the very widely used ones that help you write less code for more functionality and add more elegance to the web page that you’re building.
**Note:** There are many more components that you can try according to your website style. To see more styles <a href="https://getbootstrap.com/docs/5.0/components/">click here</a> or go to the Bootstrap website.