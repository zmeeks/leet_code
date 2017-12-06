var Stack = function(){
    this.Stk = [];
    this.push = function(item){ this.Stk.push(item); };
    this.pop = function(){ return this.Stk.pop(); };
    this.peek = function(){ return this.Stk[this.Stk.length - 1]; };
    this.empty = function(){ return this.Stk.length === 0; };
};

var validate = {};
validate["("] = "push";
validate["["] = "push";
validate["{"] = "push";
validate[")"] = "(";
validate["]"] = "[";
validate["}"] = "{";


/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    var stk = new Stack(), tmp;
    for(var i=0; i<s.length; i++){
        tmp = validate[s[i]];
        if(tmp === undefined) return false;
        else if(tmp === "push") stk.push(s[i]);
        else if(stk.peek() !== tmp) return false;
        else stk.pop();
    }
    return stk.empty();
};