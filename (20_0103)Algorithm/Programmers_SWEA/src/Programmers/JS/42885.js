function solution(people, limit) {
  var answer = 0
  const maxWeight = limit

  let peopleSort = people.sort()
  console.log("peopleSort: ", peopleSort)

  let maxBoats = people.length

  //   for (let i = 0; i < people.length; i++) {
  //     if (people[i] > limit / 2) continue
  //     for (let j = i + 1; j < people.length; j++) {
  //       if (people[i] + people[j] <= maxWeight) {
  //         maxBoats--
  //       } else {
  //         break
  //       }
  //     }
  //   }

  let fil = peopleSort.filter((v) => v <= limit / 2)
  let fil2 = peopleSort.filter((v) => v > limit / 2)
  console.log(fil, fil2)
  answer = Math.ceil(fil.length / 2) + fil2.length
  console.log("answer: ", answer)

  //   for (let i = 0; i < peopleSort.length; i++) {
  //     if (peopleSort[i] > limit / 2) break
  //     for (let j = i + 1; j < peopleSort.length; j++) {
  //       if (peopleSort[i] + peopleSort[j] <= maxWeight) {
  //         maxBoats--
  //       }
  //       if (peopleSort[j] > limit / 2) break
  //     }
  //   }

  return answer
}
solution([70, 50, 80, 50], 170)
// solution([70, 80, 40, 43, 45, 50, 50, 96], 100)
