var dict = {
    'q':1, 'w':1, 'e':1, 'r':1, 't':1, 'y':1, 'u':1, 'i':1, 'o':1, 'p':1, 
    'a':2, 's':2, 'd':2, 'f':2, 'g':2, 'h':2, 'j':2, 'k':2, 'l':2,
    'z':3, 'x':3, 'c':3, 'v':3, 'b':3, 'n':3, 'm':3
};

var ret = [];

/**
 * @param {string} word
 * @return void
 */
function ary_parser(word){
    if(word.length === 1){
        ret.push(word);
        return;
    } 
    var lowercased = word.toLowerCase();
    for(var i=1, h=0; i<word.length; i++, h++){
        if(dict[lowercased.charAt(i)] !== dict[lowercased.charAt(i-1)])
            return; //~ don't add to ret if a letter in word is on a dif keyboard row
    }
    ret.push(word); //~ if get here --> all letters in word are from same keyboard row
}

/**
 * @param {string[]} words
 * @return {string[]}
 */
var findWords = function(words) {
    ret = [];
    words.forEach(ary_parser);
    return ret;
};