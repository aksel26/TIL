/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function (nums) {
  const ht = {};

  for (const num of nums) {
    ht[num] = ht[num] + 1 || 1;
  }
  console.log(ht);
  for (const key in ht) {
    if (ht[key] > Math.floor(nums.length / 2)) {
      return key;
    }
  }
};

// majorityElement([3, 2, 3]);
// majorityElement([3, 3, 4]);
// console.log("majorityElement([3, 3, 4]);: ", majorityElement([3, 3, 4]));
majorityElement([2, 2, 1, 1, 1, 2, 2]);
// majorityElement([-1, 100, 2, 100, 100, 4, 100]);
// console.log(
//   "majorityElement([-1, 100, 2, 100, 100, 4, 100]);: ",
//   majorityElement([-1, 100, 2, 100, 100, 4, 100])
// );
