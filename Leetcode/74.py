class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        if ( matrix == [] or matrix == [[]]):
            return 0
        m=len(matrix)
        n=len(matrix[0])# m number of rows and n number of columns
        if ( m > 1 and n > 1):
            if (target == matrix[0][0]):
                return True
            elif (target == matrix[1][0]):
                return True
            elif (target == matrix[0][1]):
                return True
            for j in range(m):   # it starts from 0, so the last element is m -1, not m   
                if (target == matrix[j][0]):
                    return True
                elif (target > matrix[j][0]):  # j is the number of the row, so you want to check the first element of the row. if smaller, than it will go to the row, if not, it will scan the row ( what is intented)
                    for i in range(n): 
                        # for in  matrix[0][j] doesn't make sense, it can't recognixe element
                        if (target == matrix[j][i]):
                            return True
            return False
        elif ( n == 1 and m == 1):
            if (target == matrix[0][0]):
                return True
            return False
        elif ( n == 1 ):
            for i in range(m):
                if (target == matrix[i][n-1]):
                    return True
            return False
        elif ( m == 1):
            for j in range(n):
                print(j,n)
                if (target == matrix[m-1][j]):
                    return True
            return False
           
                
# Solved, but what pain in the ass!  the first of many!        