var prev= document.querySelector('.prev')
var next= document.querySelector('.next')
var listImage=document.querySelectorAll('.image img')
var mainImage=document.querySelector('.imageshow img')

var currentIndex=0;
function updateImage(index)
{
	//remove active trước
	document.querySelectorAll('.image div').forEach(item=>
	{
		item.classList.remove('active')
	})


	currentIndex=index
	mainImage.src=listImage[index].getAttribute('src')
	listImage[index].parentElement.classList.add('active')

}

listImage.forEach((imgElement,index)=>
{
	imgElement.addEventListener('click',function()
	{
		updateImage(index)
	})
})

prev.addEventListener('click',function()
	{
		if(currentIndex==0)
		{
			currentIndex=listImage.length-1
		}
		else
		{
			currentIndex--;
		}
		updateImage(currentIndex)
	})

next.addEventListener('click',function()
	{
		if(currentIndex==listImage.length-1)
		{
			currentIndex=0
		}
		else
		{
			currentIndex++;
		}
		updateImage(currentIndex)
	})
updateImage(0)