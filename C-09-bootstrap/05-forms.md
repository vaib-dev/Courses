# Chapter- 5 Forms

Bootstrap provides us lots of styles in to make our website looks the best. We have different types of pre-made forms that you can customize easily according to your needs. You can use the different class to customize your forms. Now we are going to discuss about the different styles of forms and classes that we can us to build our desired form. So, let's start without wasting anytime.

Be sure to use an appropriate type attribute on all inputs (e.g., email for email address or number for numerical information) to take advantage of newer input controls like email verification, number selection, and more.

Here’s a quick example to demonstrate Bootstrap’s form styles. Keep reading for documentation on required classes, form layout, and more.

~~~
<form>
  <div class="mb-3">
    <label for="exampleInputEmail1" class="form-label">Email address</label>
    <input type="email" class="form-control" id="exampleInputEmail1" aria-describedby="emailHelp">
    <div id="emailHelp" class="form-text">We'll never share your email with anyone else.</div>
  </div>
  <div class="mb-3">
    <label for="exampleInputPassword1" class="form-label">Password</label>
    <input type="password" class="form-control" id="exampleInputPassword1">
  </div>
  <div class="mb-3 form-check">
    <input type="checkbox" class="form-check-input" id="exampleCheck1">
    <label class="form-check-label" for="exampleCheck1">Check me out</label>
  </div>
  <button type="submit" class="btn btn-primary">Submit</button>
</form>
~~~
Output:

<p align="center"><img src="https://user-images.githubusercontent.com/54719422/126159525-026f11e1-81ad-4d13-b66d-e66f5d1ca86a.png"></p>

Above you have seen the basic code for a starter form. Now let's learn about adding some more styles to the form.

## Form text
We can add text inside forms that can help the user to understand what he needs to fill in the form. These text acts like a comment we use in coding. Block-level or inline-level form text can be created using .form-text.

### To add below the input box
Sometimes we want to add text below the input box then we can use the below code. Text below inputs can be styled with .form-text as shown below:
~~~
<label for="inputPassword5"
class="form-label">Password</label>
<input type="password" id="inputPassword5" class="form-control" 
aria-describedby="passwordHelpBlock">
<div id="passwordHelpBlock" class="form-text">
  Your password must be 8-20 characters long,
  contain letters and numbers, and must not contain 
  spaces, special characters, or emoji.
</div>
~~~
Output:
<p align="center"><img src="https://user-images.githubusercontent.com/54719422/126156356-9ada5e2e-536b-4f21-9412-77415ffa8153.png"></p>

### Inline text
This can use any typical inline HTML element (be it a span, small, or something else) with nothing more than the .form-text class.

~~~
<div class="row g-3 align-items-center">
  <div class="col-auto">
    <label for="inputPassword6" 
    class="col-form-label">Password</label>
    </div>
  <div class="col-auto">
    <input type="password" id="inputPassword6" 
    class="form-control" 
    aria-describedby="passwordHelpInline">
  </div>
  <div class="col-auto">
    <span id="passwordHelpInline" class="form-text">
      Must be 8-20 characters long.
    </span>
  </div>
</div>
~~~
Output:
<p align="center"><img src="https://user-images.githubusercontent.com/54719422/126159268-2b85750e-c0b5-43b4-88fb-23e83808dca8.png"></p>

### Readonly plain text
If you want to have "input readonly" elements in your form styled as plain text, use the .form-control-plaintext class to remove the default form field styling and preserve the correct margin and padding.
~~~
  <div class="mb-3 row">
    <label for="staticEmail" class="col-sm-2 
    col-form-label">Email</label>
    <div class="col-sm-10">
      <input type="text" readonly 
      class="form-control-plaintext" 
      id="staticEmail" value="email@example.com">
    </div>
  </div>
  <div class="mb-3 row">
    <label for="inputPassword" class="col-sm-2 co
    l-form-label">Password</label>
    <div class="col-sm-10">
      <input type="password" class="form-control" 
      id="inputPassword">
    </div>
  </div>
~~~
Output:

<p align="center"><img src="https://user-images.githubusercontent.com/54719422/126156359-ef0c5cf6-355c-4f0b-98dc-0a3181b6bd38.png"></p>

## File Upload Option
We can add file upload feature by adding the following code in the form. This function allows user to upload or attach a file. 

### File input
If you want to add a file upload column in your form then you can use the below code:

~~~
<div class="mb-3">
  <label for="formFile" class="form-label">Default 
  file input example</label>
  <input class="form-control" type="file" 
  id="formFile">
</div>
<div class="mb-3">
  <label for="formFileMultiple" 
  class="form-label">Multiple files input example</
  label>
  <input class="form-control" type="file" 
  id="formFileMultiple" multiple>
</div>
<div class="mb-3">
  <label for="formFileDisabled" 
  class="form-label">Disabled file input example</
  label>
  <input class="form-control" type="file" 
  id="formFileDisabled" disabled>
</div>
<div class="mb-3">
  <label for="formFileSm" class="form-label">Small 
  file input example</label>
  <input class="form-control form-control-sm" 
  id="formFileSm" type="file">
</div>
<div>
  <label for="formFileLg" class="form-label">Large 
  file input example</label>
  <input class="form-control form-control-lg" 
  id="formFileLg" type="file">
</div>
~~~
Output:

<p align="center"><img src="https://user-images.githubusercontent.com/54719422/126156364-caaf5c5c-c5b7-432b-9352-eda410e634b6.png"></p>

## Range in Forms
This feature allows user to select a range for a particular item. This can be used in cases such as you want add a field which will allow user to enter his budget for the project.

### Min and max
Range inputs have implicit values for min and max—0 and 100, respectively. You may specify new values for those using the min and max attributes.

~~~~
<label for="customRange2" 
class="form-label">Example range</label>
<input type="range" class="form-range" min="0" 
max="5" id="customRange2">
~~~~
Output:

<p align="center"><img src="https://user-images.githubusercontent.com/54719422/126156366-95767a74-c87f-4f49-adc4-7ef5f59fb138.png"></p>

## Summary
Forms are the basic requirement to complete a website. We always require a basic contact us form in our website. So, you can use the above styles and classes to customize the form in the way you want. To learn more about forms <a href="https://getbootstrap.com/docs/5.0/forms/overview/">click here.</a>