/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function (nums) {
  console.log("nums: ", nums);

  nums.sort((a, b) => {
    return a - b;
  });

  let target = 0;
  let answer;
  let cnt = 1;
  let max = 0;
  let now;
  let prev;
  let curNum;
  while (nums[target]) {
    now = nums[target];
    prev = nums[target - 1];

    if (now !== prev) {
      curNum = now;
      cnt = 1;
    } else {
      cnt++;
      curNum = prev;
    }

    target++;
  }
  console.log(cnt);
  console.log(curNum);
  return curNum;
};

// majorityElement([3, 2, 3]);
majorityElement([3, 3, 4]);
// majorityElement([2, 2, 1, 1, 1, 2, 2]);
// majorityElement([-1, 100, 2, 100, 100, 4, 100]);
// console.log(
//   "majorityElement([-1, 100, 2, 100, 100, 4, 100]);: ",
//   majorityElement([-1, 100, 2, 100, 100, 4, 100])
// );
