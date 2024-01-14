class Solution:
    def repeatedRows(self, arr, m ,n):
        #code here
        v=[]
        for i in range(0,len(arr)-1):
            for j in range(i+1,len(arr)):
                #print(arr[i],'#',arr[j],'\n')
                if(arr[i]==arr[j]):
                    v.append(j)
        w=set(v)
        p=list(w)
        p.sort()
        return p
