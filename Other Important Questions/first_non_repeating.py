#First Non repeating Character in a stream

#Input : "aabc"
#Output : "a#bb"

def FirstNonRepeating(self,A):
	stack=[]
    freq_arr={}
    ans=""
    for i in A:
        if in freq_arr:
            freq_arr[i]+=1
        else:
            freq_arr[i]=1
        if freq_arr[i]==1:
            stack.append(i)
        while stack and freq_arr[stack[0]]>1:
            stack.pop()
        if not stack:
            ans+="#"
        else:
            ans+=stack[0]
    return ans