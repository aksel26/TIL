console.log(/asd/.test("asdfasdf"))
console.log(/asd/.test("asdfasdf"))

console.log('/[A-z]/.test("s"):', /[A-z]/.test("s"))

// [찾을 문자의 범위]

console.log('/[A-z]/.test("s"):', /\S/.test("#"))

// 모든문자 다음에 골뱅이가 오는지 검사

console.log('/[A-z]/.test("s"):', /\S@/.test("s"))
console.log('/[A-z]/.test("s"):', /\S@/.test("s@"))

// \S
// 특수문자포함 모든문자 1개

console.log('/[A-z]/.test("s"):', /\S+@\S+\.\S+/.test("aaas@nvaer.com"))
