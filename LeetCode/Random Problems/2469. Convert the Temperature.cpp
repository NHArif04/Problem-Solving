class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>kelfah(2);
        kelfah[0]= celsius + 273.15;
        kelfah[1]= celsius * 1.80 + 32.00;
        return kelfah;
    }
};