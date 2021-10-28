let me = new Map()
me.set("name", "kim")
me.set("age", 31)

console.log(me)
console.log(me.get("age"))
console.log(me.set("job", "dev"))

const roomType = new Map([
  ["01", "원룸(오픈형)"],
  ["02", "원룸(분리형)"],
  ["03", "원룸(복층형)"],
  ["04", "투룸(오픈형)"],
  ["05", "쓰리룸(오픈형)"],
])
console.log(roomType)

let setA = new Set()

let setB = new Set().add("a").add("b")
console.log("setB: ", setB)

setB.add("c").size
console.log('setB.add("c").size(): ', setB.add("c").size)

setB.has("c")
console.log("setB.has(c): ", setB.has("c"))

console.log([..."자르고싶다."])

console.log([...roomType.keys()])
console.log([...roomType.values()])

let iterObj = roomType.entries()
console.log("iterObj: ", iterObj)
console.log("iterObj: ", iterObj.next())
console.log("iterObj: ", iterObj.next())
console.log("iterObj: ", iterObj.next())
console.log("iterObj: ", iterObj.next())
console.log("iterObj: ", iterObj.next())
console.log("iterObj: ", iterObj.next())
