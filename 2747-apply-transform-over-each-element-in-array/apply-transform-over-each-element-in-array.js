/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
   return arr.reduce((acc, item, index)=>{
        acc = [...acc, fn(item, index)]
        return acc;
    },[])
   
};