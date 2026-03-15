/*let btn =document.querySelector("button");
console.dir("button");
function sayHello(){
    alert("hello");
}
btn.onclick=sayHello;*/

let btn =document.querySelectorAll("button");
for(btn of btns){
    /*btn.onclick=sayhello;
    btn.onmouseenter=function(){or sayName
        console.log("youentered a button");

    
    console.dir(btn);*/
    btn.addEventListener("click",sayHello);
    btn.addEventListener("dblclick", wow);
}
function sayHello(){
    alert("hello");
    
}
function wow(){
    alert("himanshu");
}
