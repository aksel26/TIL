const searchEl = document.querySelector(".search")
const searchInputEl = searchEl.querySelector("input")

searchEl.addEventListener("click", function () {
  searchInputEl.focus()
})

searchInputEl.addEventListener("focus", function () {
  searchEl.classList.add("focused")
  searchInputEl.setAttribute("placeholder", "통합검색")
})
searchInputEl.addEventListener("blur", function () {
  searchEl.classList.remove("focused")
  searchInputEl.setAttribute("placeholder", "")
})

const badgeEl = document.querySelector("header .badges")

// window : 브라우저의 하나의 탭(창)
// _.throttle(함수, 시간)
window.addEventListener(
  "scroll",
  _.throttle(function () {
    if (window.scrollY > 500) {
      //배지 숨기기
      // badgeEl.style.display = "none"

      //gsap 애니메이션 라이브러리
      // gsap.to(요소, 지속시간, 옵션);
      gsap.to(badgeEl, 0.6, {
        opacity: 0,

        //안보이는 것 뿐만 아니라 실질적으로 사라지게 해야 함.
        display: "none",
      })

      console.log(window.scrollY)
    } else {
      // 배지 보이기
      // badgeEl.style.display = "block"

      gsap.to(badgeEl, 0.6, {
        opacity: 1,
        display: "block",
      })
    }
  }, 300)
)
