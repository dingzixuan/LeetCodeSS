#### Add Digits:
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.
For example:
Given num = 38, the process is like: 3 + 8 = 11, 1 + 1 = 2. Since 2 has only one digit, return it.
Follow up:
Could you do it without any loop/recursion in O(1) runtime?

####思路
要理解digital root，先理解casting out of nine  
casting out of nine原意为，比如有一堆火柴棍，想把它每9个作为一捆，不关心有多少捆，就看看剩下零散的有多少；火柴总数假设是83根，那么83%9=2，这堆火柴的casting out of nine即为2。  
假如分配两个小孩A、B来共同完成这个任务，一人负责数一部分火柴，假如A分到了32根火柴，那么不出错的话他会捆3捆，余下5根；B分到了51根火柴，同样不出错的话他会捆5捆，余下6根。5根和6根又可以再捆成一捆然后余下2根，同样得出这堆火柴的casting out of nine是2。分配更多的小孩来做都是一样的，只需把他们各自的casting out of nine结果加起来算一遍casting out nine就好了。  
所以对一个大数的casting out of nine可以分解为若干个子部分做。  
实际casting out of nine会用在校验场景。  
下面用CON代替casting out of nine
  
小学对十进制数各个分位的解释是：十分位代表有多少个10，百分位代表有多少个百....比如4907，就是由4个1000,9个100,0个10和7个1加起来的。  
其实换个思路，4907 = 4000 + 900 + 7，各个分位上的digit就是这个基数的CON：    
4 = CON(4000), 4000每9个一分，余4 
9 = CON(900), 900每9个一分，余9  
7 = CON(7), 7每9个一分，余7  
十进制数本质就是casting out of nine: 
4907 = 4*10^3 + 9*10^2 + 0*10^1 + 7*10^0
     = 4*(999 + 1) + 9*(99 + 1) + 0*(9 + 1) + 7*(0 + 1)
     = (4*111)*9 + 4 + (9*11)*9 + 9 + (0*1)*9 + 0 + (7*0)*9 + 7
     = (4*111 + 9*11 + 0*1 + 7*0)*9 + (4 + 9 + 0 + 7)   

对各个数位的加和结果求CON，和对原数直接求CON，结果是一样的，CON(4 + 9 + 0 + 7) = CON(4907)  
但是这里不是直接%9，而是模9余0要转成9