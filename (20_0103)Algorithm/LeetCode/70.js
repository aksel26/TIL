/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function (n) {
  let st = [];

  st[1] = 1;
  st[2] = 2;
  for (let i = 3; i <= n; i++) {
    st[i] = st[i - 1] + st[i - 2];
  }
  return st[n];
};

climbStairs(5);
console.log("climbStairs(3);: ", climbStairs(5));
