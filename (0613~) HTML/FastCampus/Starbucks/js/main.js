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

const fadeEls = document.querySelectorAll(".visual .fade-in")
console.log("fadeEls: ", fadeEls)
fadeEls.forEach(function (fadeEl, index) {
  gsap.to(fadeEl, 1, { delay: (index + 1) * 0.7, opacity: 1 })
})

// new Swiper(선택자, 옵션)
new Swiper(".notice-line .swiper-container", {
  direction: "vertical",
  autoplay: true,
  loop: true,
})

new Swiper(".promotion .swiper-container", {
  slidesPerView: 3, //한번에 보여줄 슬라이드 갯수
  spaceBetween: 10, //슬라이드 사이 여백
  centeredSlides: true, //1번슬라이드가 가운데부터 보이기
  loop: true,
  autoplay: {
    delay: 5000, //0.5초에 한번씩 슬라이드가 된다.
  },
  pagination: {
    el: ".promotion .swiper-pagination", //페이지번호 요소 선택자
    clickable: true,
  },
  navigation: {
    prevEl: ".promotion .swiper-prev",
    nextEl: ".promotion .swiper-next",
  },
})

const promotionEl = document.querySelector(".promotion")
const promotionToggleBtn = document.querySelector(".toggle-promotion")
let isHidePromotion = false
promotionToggleBtn.addEventListener("click", function () {
  isHidePromotion = !isHidePromotion

  if (!isHidePromotion) {
    // 숨김처리
    promotionEl.classList.add("hide")
  } else {
    //보임처리
    promotionEl.classList.remove("hide")
  }
})

// 범위 랜덤 함수(소수점 2자리까지)
function random(min, max) {
  // `.toFixed()`를 통해 반환된 문자 데이터를,
  // `parseFloat()`을 통해 소수점을 가지는 숫자 데이터로 변환
  return parseFloat((Math.random() * (max - min) + min).toFixed(2))
}

function floatingObject(selector, delay, size) {
  gsap.to(selector, random(1.5, 2.5), {
    y: size,
    repeat: -1, //-1은 gsap라이브러리에서 무한반복을 의미함
    yoyo: true, //한번재생된 애니메이션을 다시 뒤로 재생
    ease: Power1.easeInOut,
    delay: random(0, delay),
  })
}

floatingObject(".floating1", 1, 15)
floatingObject(".floating2", 0.5, 15)
floatingObject(".floating3", 1.5, 20)
