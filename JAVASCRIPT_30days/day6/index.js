var eKey =document.querySelector('.card.key p:last-child')
var eLocation=document.querySelector('.card.location p:last-child')
var eWhich=document.querySelector('.card.which p:last-child')
var eCode=document.querySelector('.card.code p:last-child') 
var ePress=document.querySelector('.alert')
var eResult=document.querySelector('.result')
var box=document.querySelector('.box')
document.addEventListener('keydown',e=>
{
	eKey.innerText=e.key
	eLocation.innerText=e.location
	eWhich.innerText=e.which 
	eCode.innerText=e.code 
	eResult.innerText=e.key 
	ePress.classList.add('hide')
	box.classList.remove('hide')
})