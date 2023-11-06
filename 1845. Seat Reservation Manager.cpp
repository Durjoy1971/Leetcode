class SeatManager {
private:
    int cur = 1;
    priority_queue <int, vector<int>, greater<int>> pq;
public:
    SeatManager(int n) {
        cur = 1;
    }
    
    int reserve() {
        if(pq.size()>0)
        {
            int value = pq.top();
            pq.pop();
            return value;
        }
        else
        {
            return cur++;
        }
    }
    
    void unreserve(int seatNumber) {
        pq.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */