class TicTacToe {
public:
    /** Initialize your data structure here. */
    TicTacToe(int n) {
        tot = n;
        vec.resize(n);
        for(int i=0; i<n; i++){
            vec[i].resize(n);
            fill(vec[i].begin(), vec[i].end(), 0);
        }
    }
    
    /** Player {player} makes a move at ({row}, {col}).
        @param row The row of the board.
        @param col The column of the board.
        @param player The player, can be either 1 or 2.
        @return The current winning condition, can be either:
                0: No one wins.
                1: Player 1 wins.
                2: Player 2 wins. */
    int move(int row, int col, int player) {
        vec[row][col] = player;
        int i;
        for(i=0; i<tot; i++){
            if(vec[row][i] != player) break;
        }
        if(i == tot) return player;
        for(i=0; i<tot; i++){
            if(vec[i][col] != player) break;
        }
        if(i == tot) return player;
        if(row == col){
            for(i=0; i<tot; i++){
                if(vec[i][i] != player) break;
            }
            if(i == tot) return player;
        }
        if(row == tot - col - 1){
            for(i=0; i<tot; i++){
                if(vec[i][tot-i-1] != player) break;
            }
            if(i == tot) return player;
        }
        return 0;
    }
private:
    vector<vector<int> > vec;
    int tot;
};

/**
 * Your TicTacToe object will be instantiated and called as such:
 * TicTacToe obj = new TicTacToe(n);
 * int param_1 = obj.move(row,col,player);
 */