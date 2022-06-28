class Solution {
public:
    double angleClock(int hour, int minutes) {
        hour += minutes/60;
        hour %= 12;
        minutes %= 60;
        float h = (hour + (float)minutes/60)*30;
        float m = minutes*6;
        double angle = abs(h-m);
        return (angle>180)?360-angle:angle;
    }
};