/**
 * @param {string} val
 * @return {Object}
 */
var expect = function(val) {
    const obj = {
        toBe:(newVal)=>{
            if (newVal !== val) {
                throw new Error("Not Equal");
            }
            return true;
        },
        notToBe:(newVal)=>{
            if (newVal === val) {
                throw new Error("Equal");
            }
            return true;
        }
    }
    return obj;
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */