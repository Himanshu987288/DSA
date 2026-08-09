// h1= document.querySelector("h1");

// setTimeout(()=>{
//     h1.style.color="green";
// },2000);
// setTimeout(()=>{
//     h1.style.color="red";
// },1500);
// setTimeout(()=>{
//     h1.style.color="blue"
// })

function savetoDb(data){
    let internetSpeed = Math.floor(Math.random() * 10)+1;
    if (internetSpeed > 4){
        console.log("your data was saved");
    }else{
        console.log("weak connection. data mpot save");
    }
}

//async keyword->create as async function
//async function is return promise function

async function greet(){
    //throw "some random error";
    return "hello";
}
greet()
.then((result)=>{
    console.log("promise was resolved");
    console.log("result was :",result);
})
.catch((err)=>{
    console.log("promise was rejected with err:",err);
});

//Await keyword:- pause the execution ofits surrounding async function until the promise is settled (resolved and rejected)
function getNum(){
    return new Promise((resolve, reject) => {
        setTimeout(() =>{
            let num= Math.floor(Math.random()*10)+1;
            console.log(num);
            resolve();
        },1000);
    })
    
    
}
async function demo(){
    await getNum();
    await getNum();
    await getNum();

};
async function demo(){
    changeColor("red",1000);
}
//handling rejection with await
//its add try and ctch block


//API:= application programing interface
//apl is conversation between two software 

//JSON: javaScript object notation(www.json.org)

//Testing APIs requests------->Tools------>Hoppscoth-->Postman