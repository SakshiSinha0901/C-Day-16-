// Focused Practice: Revisited all the detailed concepts of loops, particularly honing in on understanding the intricate relationships between rows and columns in pyramid patterns.
// Pattern Mastery: Practiced various patterns, including square, rectangle, hollow shapes, and pyramids, to solidify my understanding.
// Doubt Clarification: Cleared up previous doubts about how patterns work by finding the right formulas and logic to make the code function correctly.
// Video Rewatch: Rewatched the pattern videos to ensure I grasped every detail and nuance of the exercises. 

// 5. Half pyramid
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the n:";
//     cin>>n;

//     for(int row =0; row<n; row++){
//         for (int col = 0; col<row+1; col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
//here in line 16 we used < sign because we wanted a less column to be printed as an output .Hence,didnt used <= .

// 6. Inverted half pyramid
//  #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the n:";
//     cin>>n;

//     for(int row =0; row<n; row++){
//         for (int col = 0; col<n-row; col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// here in line 34 col<=n-row-1 can also be used. n-row is used because after observation we get the same output for every row.