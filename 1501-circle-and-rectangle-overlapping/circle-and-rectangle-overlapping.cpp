class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int dx = max({x1 - xCenter, 0, xCenter - x2});;
        int dy=max({y1-yCenter,yCenter-y2,0});
        int d = (dx * dx + dy * dy);
    if(d>radius*radius)
    return false;
    return true;
    }
}; 