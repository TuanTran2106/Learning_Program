var range =document.querySelector('.range')
var process=document.querySelector('.range-bar')
var value=document.querySelector('.value')
var body =document.querySelector('body')

function Application(percent)
{
	//lấy độ rộng của thanh process
	process.style.width=`${percent}%`
	//cập nhật giá trị của value
	value.innerHTML=`${percent}%`
	//thay đổi backgroundColor của body theo percent
	body.style.backgroundColor = `rgba(0, 0, 0, ${percent / 100})`
}
range.addEventListener('mousemove',function(e)
{
	//e.pageX :vị trí của chuột trên màn hình
	//this.offsetLeft: this thì focus vào đối tượng chính trong range
	// offsetLeft khoảng cách từ chuột đến viền trái của range
	var processWidth =e.pageX - this.offsetLeft
	var percent= processWidth/this.offsetWidth*100
	percent=Math.round(percent)
	Application(percent)
})