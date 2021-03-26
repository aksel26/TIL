// 버튼 0(products)을 누르면..
// 0. 버튼 0 버튼1과 버튼2에 붙은 주황색 제거
// 0. 버튼 0 버튼1과 버튼2에 붙은 내용을 제거
// 1. 버튼 0이 주황색으로 하이라이트 되어야함
// 2. 내용 0이 보여야 함
let now = 1

for (let i = 0; i < $(".tab-button").length; i++) {
  $(".tab-button")
    .eq(i)
    .click(() => {
      $(".tab-button").removeClass("active")
      $(".tab-content").removeClass("show")
      $(".tab-button").eq(i).addClass("active")
      $(".tab-content").eq(i).addClass("show")
    })
}
