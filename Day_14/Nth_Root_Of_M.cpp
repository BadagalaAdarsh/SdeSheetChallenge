double findNthRootOfM(int n, long long m) {
	// Write your code here.
    
    double t = 1.000000 / n;
    double answer = pow(m, t);
    return answer;
}
