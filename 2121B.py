n = int(input())

for _ in range(n):

    def new():

        z = int(input())
        s = str(input())
    
        left = 1
        right = len(s) - 1

        while left < right:
            a = s[:left]
            b = s[left:right]
            c = s[right:]

            if b in a + c:
                return "YES"

            left += 1
            right -= 1
        
        for i in range(len(s) - 2, 0, -1):
            a = s[:i]
            b = s[i:-1]
            c = s[-1:]

            if b in a + c:
                return "YES"

        a = s[0]
        for i in range(1, len(s) - 1):
            b = s[1:len(s) - i]
            c = s[len(s) - i:]

            if b in a + c:
                return "YES"

        return "NO"
        
    print(new())
