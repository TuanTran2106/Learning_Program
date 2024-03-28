var username=document.querySelector('#username')
var email=document.querySelector('#email')
var password=document.querySelector('#password')
var cfpassword=document.querySelector('#cfpassword')
var form =document.querySelector('.form')

function showError(input,message)
{
	let parent=input.parentElement;
	let small = parent.querySelector('small')

	parent.classList.add('error')
	small.innerText=message
}

function showSuccess(input)
{
	let parent=input.parentElement;
	let small = parent.querySelector('small')

	parent.classList.remove('error')
	small.innerText=''
}

function checkEmptyError(listInput)
{
	let isEmptyError=false;
	listInput.forEach(input =>
	{
		input.value=input.value.trim()

		if(!input.value)
		{
			isEmptyError=true;
			showError(input,'Khong duoc de trong')
		}
		else
		{
			showSuccess(input)
		}
	});
	return isEmptyError
}

function checkEmail(input)
{

	let regex = /^(([^<>()\[\]\\.,;:\s@"]+(\.[^<>()\[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/
	input.value=input.value.trim()

	let isEmailerror=true
	if(regex.test(input.value))
	{
		showSuccess(input)
		isEmailerror=false
	}
	else
	{
		showError(input,'Nhap dung email có bao gồm (@.com)')
	}
	return isEmptyError
}

funcction checkLengthError(input,min,max)
{
	input.value=input.value.trim()

	if(input.value.length<min)
	{
		showError(input,'Phai co it nhat ${min} ky tu')
		return true
	}

	if(input.value.length>max)
	{
		showError(input,'Phai co it hon ${max} ky tu')
		return true
	}
	showSuccess(input)
	return false

}

function checkMatchPassword(password,cfpassword)
{
	if(password.value!=cfpassword.value)
	{
		showError(cfpassword,'Mat khau khong trung khop')
		return true
	}
	return false
}
form.addEventListener('submit',function(e)
{
	e.preventDefault()
	let isEmptyError=checkEmptyError([username,email,password,cfpassword])
	let ischeckEmail =checkEmail(email)
	let isUsernameLengthError =checkLengthError(username,3,10)
	let isPasswordLengthError =checkLengthError(username,3,10)
	let isMatchPassword=checkMatchPassword(password,cfpassword)
	
	if(isEmptyError|| ischeckEmail||isUsernameLengthError
		||isPasswordLengthError||isMatchPassword)	
	{
		//do nothing
	}
	else
	{
		//thục hiện
	}
})
