let btn= document.querySelector("button");
let ul= document.querySelector("ul");
let inp=document.querySelector("input");

btn.addEventListener("click",function(){
    let item=document.createElement("li");
    item.innerText=inp.value;

    let delBtn= document.createElement("button");
    delBtn.innerText="delete";
    delBtn.classList.add("delete");

    item.appendChild(delBtn);
    ul.appendChild(item);
    inp.value="";
    
});
ul.addEventListener("click",function(){
    if(event.target.nodeName=="BUTTON"){
        let listItem=event.target.parentElement;
        console.log(listItem);
        console.log("delete");
    }else{
        console.log("dont delete");
    }

    console.log("button clicked");
})
// let delBtns =documents.querySelectorAll(".delete");
// for(delBtn of delBtns){
//     delBtn.addEventListener("click",function(){
//         console.log("element delete");
//         let par=delBtn.parentElement;
//         console.log(par);
//         par.remove();
//     })
// }