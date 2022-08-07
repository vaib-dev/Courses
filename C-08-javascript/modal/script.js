let display = document.querySelectorAll(".show-modal");
let data= document.querySelector('.modal p');
let modal = document.querySelector('.modal');
let close = document.querySelector('.close-modal');
let overlay = document.querySelector('.overlay');
console.log(overlay);
console.log(display);

for (let i = 0; i < display.length; i++) {
  display[i].addEventListener("click", function () {
    console.log(modal.classList);
    modal.classList.remove('hidden');
    overlay.classList.remove('hidden');

  });
}

console.log(close);
close.addEventListener('click', function(){
modal.classList.add('hidden');
overlay.classList.add('hidden');
});

overlay.addEventListener('click',function(){
  modal.classList.add('hidden');
  overlay.classList.add('hidden');
});

document.addEventListener('keydown',function(pressed){
 
  if(pressed.key=='Escape'){
    modal.classList.add('hidden');
  overlay.classList.add('hidden');}
})