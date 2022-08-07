let numberEntered = Number(document.querySelector('.guess').value);
let message = document.querySelector('.message').textContent;
let score =20;
let highScore = Number(document.querySelector('.highscore').textContent);
let correctNumber= Math.floor(Math.random() * 20)+1;
let check = document.querySelector('.check');
let again = document.querySelector('.again');
console.log(score);
check.addEventListener('click',function(){

console.log( typeof numberEntered);
if(!numberEntered){
document.querySelector('.message').textContent="Please Enter Number";

}
if(numberEntered < correctNumber){
document.querySelector('.message').textContent="Enter High Number";

if(score<=0){
    document.querySelector('.message').textContent="You lost";
}else{
    score--;
}
document.querySelector('.score').textContent=score;
}
if(numberEntered>correctNumber){
    document.querySelector('.message').textContent="Enter Small Number";    
    if(score<=0){
        document.querySelector('.message').textContent="You lost";
    }else{
        score--;
    }
    document.querySelector('.score').textContent=score;
}
if(numberEntered==correctNumber){
    document.querySelector('.message').textContent="You WON!!!!";
document.querySelector('.highscore').textContent = correctNumber;
document.querySelector('.number').textContent=correctNumber
}
});

again.addEventListener('click',function(){
    document.querySelector('.number').textContent="?";
    score=20;
    document.querySelector('.score').textContent=score;
    document.querySelector('.guess').value = '';
    document.querySelector('.message').textContent= "Start guessing...";
    correctNumber= Math.floor(Math.random() * 20)+1;


});