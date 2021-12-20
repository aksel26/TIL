/**
 * @param {number[]} nums
 * @return {number[]}
 */

function merge_sort(left, right) {
  console.log("eft, right: ", left, right);
  let result = [];

  while (left.length && right.length) {
    if (left[0] < right[0]) {
      result.push(left.shift());
    } else {
      result.push(right.shift());
    }
  }
  while (left.length) result.push(left.shift());
  while (right.length) result.push(right.shift());
  return result;
}

var sortArray = function (nums) {
  console.log("nums: ", nums);
  if (nums.length < 2) return nums;

  let mid = Math.floor(nums.length / 2);
  let left = nums.slice(0, mid);
  let right = nums.slice(mid, nums.length);

  return merge_sort(sortArray(left), sortArray(right));
};

// sortArray([5, 2, 3, 1]);
// sortArray([5, 1, 1, 2, 0, 0]);
// console.log("sortArray([5, 1, 1, 2, 0, 0]);: ", sortArray([5, 1, 1, 2, 0, 0]));
// console.trace("sortArray([5, 2, 3, 1]);: ", sortArray([5, 2, 3, 1]));
