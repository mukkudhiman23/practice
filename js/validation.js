function validation(){
var name=document.getElementById("name").value;

var email=document.getElementById("email").value;
var no=document.getElementById("no").value;
var cmt=document.getElementById("comment").value;
var add=document.getElementById("address").value;


if(name==""){
    alert("Please Fill User name");
}

 else if(!isNaN(name)){
    
    alert("Username must have alphabet characters only");
    
}
if(no==""){
    alert("Please Fill Contact Number");

}

 else if(isNaN(no)){
    alert("Contact no should be in digits only");

}
if(email==""){
    alert("Please Fill Email");
}

if(add==""){
    alert("Please Fill User Address");

}
if(cmt==""){
    alert("Please fill comments");

}
}