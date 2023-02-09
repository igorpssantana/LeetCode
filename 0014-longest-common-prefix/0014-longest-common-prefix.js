/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function (strs) {
  let actual_preFix = "",
    possible_preFix = "" + strs[0][0],
    count = 0;

  const strsLength = strs.length;

  if (strsLength === 1 || strs[0].length === 0) {
    return (preFix = strs[0]);
  }

  while (true) {
    for (let b = 0; b < strs[0].length; b++) {
      for (let a = 1; a < strsLength; a++) {
        if (strs[a].startsWith(possible_preFix)) {
          count++;
          continue;
        } else {
          break;
        }
      }

      if (count !== strs.length - 1) return actual_preFix;
      count = 0;
      actual_preFix = possible_preFix;

      if (strs[0][b + 1]) possible_preFix += strs[0][b + 1];
      else return actual_preFix;
    }
  }
};