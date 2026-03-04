class Solution:
    def numSpecial(self, mat: List[List[int]]) -> int:
        m=len(mat)
        n=len(mat[0])
        row_cnt=[0]*m
        col_cnt=[0]*n
        for row in range(m):
            for col in range(n):
                if mat[row][col]==1:
                    row_cnt[row]+=1
                    col_cnt[col]+=1
                
        ans=0
        for row in range(m):
            for col in range(n):
                if mat[row][col]==1:
                    if row_cnt[row]==1 and col_cnt[col]==1:
                        ans+=1
        return ans

        