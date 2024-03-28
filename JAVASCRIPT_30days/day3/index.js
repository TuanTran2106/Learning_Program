<!-- Thực hiện focus vào các nút trong class với các chức năng  -->

var btnOpen =document.querySelector('.open-modal-btn')
var model =document.querySelector('.modal')
var iconClose =document.querySelector('.modal_header i')
var btnClose =document.querySelector('.modal_footer button')

<!-- toggle chuyển trạng thái bật ,tắt mục ẩn hiện của modal -->

function ToggleModel(e)
{
	model.classList.toggle('hide')
}

<!-- click vào các nút  -->

btnOpen.addEventListener('click',ToggleModel)
btnClose.addEventListener('click',ToggleModel)
iconClose.addEventListener('click',ToggleModel)
model.addEventListener('click',function(e)
{
	<!-- kích đúng nút (i hoặc button) mới thực hiện bật tắt -->
	if(e.target==e.currentTarget)
	{
		ToggleModel()
	}
})