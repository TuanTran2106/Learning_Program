const ul = document.querySelector('ul'),
	input = document.querySelector('input')

let tags = ['nodejs', 'reactjs']

createTag()

function createTag() {
	ul.innerHTML = ''
	tags.forEach((tag, index) => {
		let liTag = `
            <li>${tag}
            <i class="uit uit-multiply" onclick="removeTag(this, '${index}')"></i>
            </li>
            `
		ul.innerHTML += liTag
	})
	//Hàm appendChild bổ sung 1 DOM mới vào vị trí cuối cùng
	ul.appendChild(input)
	input.focus()
}

function removeTag(element, index) {
	//Xóa 1 phần tử ,vị trí indexppen
	tags.splice(index, 1)
	//Thuộc tính parentElement sẽ trả về thẻ HTML đang chứa thẻ hiện tại,
	element.parentElement.remove()
	input.focus()
}

function addTag(e) {
	if (e.key == 'Enter') {
		//trim():xoá kí tự khoảng trắng dư thừa
		let tag = e.target.value.trim()
		if (tag != '' && !tags.includes(tag)) {
			tags.push(tag)
			createTag()
		}
		e.target.value = ''
	}
}

input.addEventListener('keyup', addTag)

const removeBtn = document.querySelector('.wrap_close')
removeBtn.addEventListener('click', () => {
	tags.length = 0
	createTag()
})