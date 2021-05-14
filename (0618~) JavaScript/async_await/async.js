// 기존에 존재하는 것을 더 간편하게 기능을 제공하는 것을
// syntatic sugar 이라고 한다.

// function fetchUser() {
//   // 10초걸리는 request라고 가정한다.
//   //   return "hello"

//   //1. Promise 객체를 만든다.
//   //   resolve, reject : executer가 있다.
//   return new Promise((resolve, reject) => {
//     // return "hello"
//     resolve("hello")
//   })
// }

// const user = fetchUser()

// user.then(console.log)
// console.log(user)

// 1. async
async function fetchUser() {
  return "hello"
}

const user = fetchUser()

user.then(console.log)
console.log(user)

// 2. await
// async가 붙은 함수안에서만 사용가능!

function delay(ms) {
  return new Promise((resolve) => setTimeout(resolve, ms))
}

async function getApple() {
  await delay(2000)
  return "🍎"
}

async function getBanana() {
  await delay(1500)
  return "🍌"
}

async function pickFruit() {
  const applePromise = getApple()
  const bananaPromise = getBanana()
  const apple = await applePromise
  const banana = await bananaPromise

  return `${apple} + ${banana}`
}

pickFruit().then(console.log)

// 3. useful Promise APIs  3-1. promise.all

function pickAllFruits() {
  return Promise.all([getApple(), getBanana()]).then((fruits) =>
    fruits.join(" + ")
  )
}

pickAllFruits().then(console.log)

// 3-2. promise.all

function pickOnlyOne() {
  return Promise.race([getApple(), getBanana()])
}

pickOnlyOne().then(console.log)
