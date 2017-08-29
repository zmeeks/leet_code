class Solution {
public:
    string intToRoman(int num) {
        string romanNum = "";
        while(num>0)
            romanNum += intToRomanChar(num);
        return romanNum;
    }
    
    string intToRomanChar(int &c){
        if(c >= 1000){
            c = c - 1000;
            return "M";
        }
        if(c >= 900){
            c = c - 900;
            return "CM";
        }
        if(c >= 500){
            c = c - 500;
            return "D";
        }
        if(c >= 400){
            c = c - 400;
            return "CD";
        }
        if(c >= 100){
            c = c - 100;
            return "C";
        }
        if(c >= 90){
            c = c - 90;
            return "XC";
        }
        if(c >= 50){
            c = c - 50;
            return "L";
        }
        if(c >= 40){
            c = c - 40;
            return "XL";
        }
        if(c >= 10){
            c = c - 10;
            return "X";
        }
        if(c >= 9){
            c = c - 9;
            return "IX";
        }
        if(c >= 5){
            c = c - 5;
            return "V";
        }
        if(c >= 4){
            c = c - 4;
            return "IV";
        }
        if(c >= 1){
            c = c - 1;
            return "I";
        }
    }
};