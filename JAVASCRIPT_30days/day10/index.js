var text =document.querySelector('#text')
var button=document.querySelector('.button')
var form=document.querySelector('form')
var todo=document.querySelector('.todo')

form.addEventListener('submit',function(event)
{
	//event.preventDefault()xóa hết những sự kiện trước đó
	event.preventDefault();
	let val = text.value.trim()
	if(val)
	{
		addTodoElement({
			text:val,
			status:'finding'
		})
	}
	SaveToDoList()
	text.value=''
})
function addTodoElement(todoyou)
{
	var li =document.createElement('li')
	li.innerHTML=`<p>${todoyou.text}</p>
	<i class="fa-sharp fa-solid fa-trash"></i>`
	if(todoyou.status=='finding')
	{
		li.setAttribute('class','finding')
		SaveToDoList()
	}

	if(todoyou.status=='completed')
	{
		li.setAttribute('class','completed')
		SaveToDoList()
	}
	li.addEventListener('click',function()
	{
		//classList:dùng trong việc tương tác với trạng thái
		//của 1 class... add vào ,chuyển từ class này sang class khác
		/*
		const element = document.getElementById("blogName");

		element.classList.add("uppercase");
		console.log(element.classList);

		----> thêm class uppercase vào clss blogName
		*/

		this.classList.toggle('completed')
	})

	//click vào thẻ i
	li.querySelector('i').addEventListener('click',function()
	{
		//parentElement trả về thẻ lớp cha của đối tượng hiện tại
		//thực hiện remove để xóa thẻ đó
		this.parentElement.remove()
		SaveToDoList()
	})
	//appendChild bổ sung 1 DOM vào trong 1 DOM khác
	todo.appendChild(li)
}

function SaveToDoList()
{
	let todoList=document.querySelectorAll('li')
	let todoStorage=[]
	todoList.map(function(text)
	{
		let text1=text.querySelector('p').innerText
		let status=text.getAttribute('class')
		console.log(status)
		todoStorage.push({
			text1,
			status
		})
	})
	localStorage.setItem('todoList',JSON.stringify(todoStorage))
}

function init()
{
	let data =JSON.parse(localStorage.getItem('todoList'))
	data.map(function(text)
	{
		addTodoElement(text.item)
	})
}
init()