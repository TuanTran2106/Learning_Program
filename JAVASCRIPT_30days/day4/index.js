var close=document.querySelector('.close')
var prev=document.querySelector('.prev')
var next=document.querySelector('.next')
var images=document.querySelectorAll('.image img')
var gallaryImg=document.querySelector('.gallary-inner img')
var gallary=document.querySelector('.gallary')

var currentIndex=0;
function ShowGallary()
{
	if(currentIndex==0)
	{
		prev.classList.add('hide')
	}
	else
	{
		prev.classList.remove('hide')
	}

	if(currentIndex==images.length-1)
	{
		next.classList.add('hide')
	}
	else
	{
		next.classList.remove('hide')
	}
   //show
	gallaryImg.src=images[currentIndex].src
	gallary.classList.add('show')
}

images.forEach((item,index)=>{
	item.addEventListener('click',function()
	{
		currentIndex=index 
		ShowGallary()
	})
})

close.addEventListener('click',function()
{
	gallary.classList.remove('show')
})

document.addEventListener('click',function(e)
{
	if(e.keyCode==27)
	{
		gallary.classList.remove('show')
	}
})
prev.addEventListener('click',function()
{
	if(currentIndex>0)
	{
		currentIndex--
		ShowGallary()
	}
})

next.addEventListener('click',function()
{
	if(currentIndex<images.length-1)
	{
		currentIndex++
		ShowGallary()
	}
})
