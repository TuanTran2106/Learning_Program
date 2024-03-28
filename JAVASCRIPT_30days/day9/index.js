var search=document.querySelector('#search')
var capital=document.querySelector('.capital')
var country=document.querySelector('.country')
var degree=document.querySelector('.degree')
var status=document.querySelector('.status')
var visibility=document.querySelector('.visibility')
var wind=document.querySelector('.wind')
var sun=document.querySelector('.sun')
var time=document.querySelector('.timer')
var weather=document.querySelector('.weather')
var body=document.querySelector('body')
 async function changeWeatherUI(input)
{
	let apiURL= await fetch("https://api.openweathermap.org/data/2.5/weather?q={input}&appid=fe35c1bdc90b45717b4f5fe0abc66fd4")
	let data = await apiURL.json()

	if(data.cod==200)
	{
		weather.classList.remove('hide')
		capital.innerText=data.name
		country.innerText=data.sys.country
		visibility.innerText=data.visibility +'m'
		wind.innerText=data.wind.speed +'m/s'
		sun.innerText=data.main.humidity + '%'
		degree.innerText=Math.round((data.main.temp -273.15))
		status.innerText=data.weather.main
		time.innerText= new Date().toLocaleString('vi')	
	}
	else
	{
		weather.classList.add('hide')
	}

	if(degree.innerText<22)
	{
		body.setAttribute('class','cold')
	}
	if(degree.innerText>=22)
	{
		body.setAttribute('class','hot')
	}
}

search.addEventListener('keypress',function(e)
{
	if(e.code=='Enter')
	{
		let capitalSearch=search.value.trim()
		changeWeatherUI(capitalSearch)
	}
})
changeWeatherUI('Da lat')