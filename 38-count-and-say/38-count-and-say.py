class Solution(object):
    
    def create_list(self,s):
        if(len(s)==1):
            #print("len is one")
            return[1,1]
    
        i=0
        count=0
        map = []
        while i<len(s):
            count=1
            while(i<len(s)-1 and s[i]==s[i+1]):
                count+=1
                i+=1
                #print("count  :",count)
            #print(count)
            map.append(count)
            #print(s[i])
            map.append(s[i])
            i+=1
            #map.append([count,s[i]])
        
        #print(str(map))
        return map
    
    
    def make_string(self,map):
        s=''
        for ele in map:
            s=s+str(ele)#[0])+str(ele[1])
            #print("string  :",s)
        return s
    
    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """
        
        iter=1
        seed = '1'
        while(iter<n):
            map=self.create_list(seed)
            seed=self.make_string(map)
            iter+=1

        return seed
        