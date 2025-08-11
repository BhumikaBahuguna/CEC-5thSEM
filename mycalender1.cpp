class MyCalendar {
    map<int, int> intervals; // Key -> End, Value -> Start
public:
    MyCalendar() {
    }
    
    bool book(int start, int end) {
        auto it = intervals.upper_bound(start);
        if (it == intervals.end() || it->second >= end) { // No overlap condition
            intervals[end] = start;
            return true;
        }
        return false;
    }
};
