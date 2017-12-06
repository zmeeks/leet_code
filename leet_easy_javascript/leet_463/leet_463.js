/**
 * @param {number[][]} grid
 * @return {number}
 */
var islandPerimeter = function(grid) {
    var cnt = 0, row = 0, col = 0;
    if(grid.length === 0 || grid[0].length === 0) return 0;
    for(row=0; row<grid.length; row++) if(grid[row][0]===1) cnt++;
    for(col=0; col<grid[0].length; col++) if(grid[0][col]===1) cnt++;
    for(row=0; row<grid.length; row++){
        for(col=1; col<grid[0].length; col++)
            if(grid[row][col] === 1 && grid[row][col-1] !== 1) 
                cnt++;
    }
    for(row=1; row<grid.length; row++){
        for(col=0; col<grid[0].length; col++)
            if(grid[row][col] === 1 && grid[row-1][col] !== 1) 
                cnt++;
    }
    return cnt*2;
};