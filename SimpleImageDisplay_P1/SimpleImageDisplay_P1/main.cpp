/* Filename     :   main.cpp
 * Description  :   This is a first sample program
 *              :   in openCV.
 * Author       :   Saroj Bardewa
 */

#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>


using namespace std;
using namespace cv;

int main(int argc, const char * argv[]) {
    
    string imageName("../../SimpleImageDisplay_P1/sample.jpg"); // by default
    Mat inImage;
    inImage = imread(imageName.c_str(),CV_LOAD_IMAGE_UNCHANGED);
    
    if(inImage.empty()){
        cout <<"No image to display" <<endl;
        return 0;
    }
    
    imshow("Original Image",inImage);
    
    waitKey(0);
    destroyWindow("Original Image");
    return 0;
}
