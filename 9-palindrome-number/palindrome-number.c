bool isPalindrome(int x) {
    if (x<0){
        return false; // Automatically will be false because negative numbers can't be palindrome due to '-' sign.
    }

    long long reversed = 0;
    long long temp = x; // We store the orginal value so that we can compare later.
    while(temp>0) // Reverse the number digit by digit.
    {
        reversed = reversed * 10 + temp % 10; 
        temp/= 10;
    }
    if(x == reversed){
        return true; // If it's still equal to x, it means it is palindrome.
    }
    else{
        return false; // It's not palindrome.
    }
}