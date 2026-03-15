let btn=document.querySelector("button");
// btn.addEventListener("click",function(event){
//     console.log(event);
//     console.log("button clicked");

// });
// btn.addEventListener("dblbutton",function(e){
//     console.log(e);
//     console.log("button clicked");//two times click on the button than button give a information
// })

Inp.addEventListener("keydown",function(event){
    console.log("code=",event.code);
    if(event.code=="Arrowup"){
        console.log("char move forward");
    }else if(event.code== "arrow down"){
        console.log("char move backward")
    }else if(event.code=="arrow left"){
        console.log("char move left side ")
        
    }else if(event.code=="arrow right"){
        console.log("char move right side")
    }
    console.log("key was pressed");
});