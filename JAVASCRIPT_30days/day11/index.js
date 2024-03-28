var success=document.querySelector('.success')
var warning=document.querySelector('.warning')
var error=document.querySelector('.error')
var alertmainsuccess=document.querySelector('.alertmainsuccess')
var alertmainwarning=document.querySelector('.alertmainwarning')
var alertmainerror=document.querySelector('.alertmainerror')
function Alert()
{
	success.addEventListener('click',function()
	{
		alertmainsuccess.classList.remove('hide')
		setInterval(Timersuccess, 5000);
	})
	warning.addEventListener('click',function()
	{
		alertmainwarning.classList.remove('hide')
		setInterval(Timerwarning, 5000);
	})
	error.addEventListener('click',function()
	{
		alertmainerror.classList.remove('hide')
		setInterval(Timererror, 5000);
	})

}
function Timersuccess()
{
	if(alertmainsuccess.classList!='hide')
	{
		alertmainsuccess.classList.add('hide')
	}
}
function Timerwarning()
{
	if(alertmainwarning.classList!='hide')
	{
		alertmainwarning.classList.add('hide')
	}
}
function Timererror()
{
	if(alertmainerror.classList!='hide')
	{
		alertmainerror.classList.add('hide')
	}
}
Alert()