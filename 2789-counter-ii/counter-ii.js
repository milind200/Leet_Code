/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let cntNumber=init;
    function increment(){
       return ++cntNumber;
    }
    function decrement(){
       return --cntNumber;
    }
    function reset(){
        return (cntNumber=init);
    }
    return{increment,decrement,reset};
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */