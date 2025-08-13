#include <iostream>
using namespace std;
struct Process {
 int id, burst_time, remaining_time;
};
int main() {
 int n, quantum;
 
 // Input number of processes and time quantum
 cout << "Enter number of processes: ";
 cin >> n;
 cout << "Enter time quantum (ms): ";
 cin >> quantum;
 Process processes[n];
 // Input burst time for each process
 for (int i = 0; i < n; i++) {
 processes[i].id = i + 1;
 cout << "Enter burst time for process " << processes[i].id << ": ";
 cin >> processes[i].burst_time;
 processes[i].remaining_time = processes[i].burst_time;
 }
 int current_time = 0, completed = 0;
 int turnaround_time[n], waiting_time[n];
 // Round Robin Scheduling
 while (completed < n) {
 for (int i = 0; i < n; i++) {
 if (processes[i].remaining_time > 0) {
 if (processes[i].remaining_time <= quantum) {
 current_time += processes[i].remaining_time;
 processes[i].remaining_time = 0;
 turnaround_time[i] = current_time;
 completed++;
 } else {
 current_time += quantum;
 processes[i].remaining_time -= quantum;
 }
 }
 }
 }
 // Calculate waiting time and display results
 cout << "Process\tBurst Time\tTurnaround Time\tWaiting Time\n";
 for (int i = 0; i < n; i++) {
 waiting_time[i] = turnaround_time[i] - processes[i].burst_time;
 cout << processes[i].id << "\t" << processes[i].burst_time << "\t\t"
 << turnaround_time[i] << "\t\t" << waiting_time[i] << endl;
 }
 return 0;
}