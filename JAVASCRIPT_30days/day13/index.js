var label =document.querySelector('.label')
var documents=document.querySelector('.documents')
var loadimg=document.querySelector('#mypicture')
var error=document.querySelector('.error')

loadimg.addEventListener('change',function(e)
{
	var file=loadimg.files[0]

	if(!file)
		{return}
	if(!file.name.endsWith('.jpg'))
	{
		error.innerHTML='Ban can upload hinh anh voi duoi jpg'
		return
	}
	else
	{
		error.innerHTML=''
	}

	if(file.size/(1024*1024)>3)
	{
		error.innerHTML='Chi duoc up file co dung luong <3MB'
		return
	}
	else
	{
		error.innerHTML=''
	}
	var img =document.createElement('img')
	img.src=URL.createObjectURL(file)
	label.appendChild(img)
})