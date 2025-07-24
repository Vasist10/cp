def reverse(s):
    return s[::-1]
def is_palindrome( s):
    if s == reverse(s):
        print("The string is a palindrome.")
    return print("The string is not a palindrome.")

def ct_vowels(s):
    vowels = "aeiouAEIOU"
    count = sum(1 for char in s if char in vowels)
    print(f"Number of vowels in the string: {count}")
    
def longest_word(s):
    words = s.split()
    print(words)
    longest = max(words, key=len)
    print(f"The longest word is: {longest}")
    
def rem_punc(s):
    punc = '!,.?;:'
    for c in punc:
        s=s.replace(c,'')
    print(f"String without punctuation: {s}")
def main():
    s = input("Enter a string to reverse: ")
    ans = reverse(s)
    print("Reversed string:", ans)
    is_palindrome(s)
    ct_vowels(s)
    longest_word(s)
    rem_punc(s)

if __name__ == "__main__":
    main()
    