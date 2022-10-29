#include "../include/Camera.h"


void Camera::displayWebcam()
{

    // KEY LINE: Start the window thread
    cv::startWindowThread();

    cv::VideoCapture cap(0);
    cv::Mat img;

    while (true) {

        // Location of Test Image

        cap.read(img);


        cv::namedWindow("yo_mamma", cv::WINDOW_AUTOSIZE);

        cv::imshow("I see you...", img);
        cv::waitKey(1);
    }

    cv::destroyWindow("I see you...");

}


