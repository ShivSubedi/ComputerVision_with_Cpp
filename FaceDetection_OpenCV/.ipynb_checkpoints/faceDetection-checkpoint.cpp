#include <opencv2/opencv.hpp>
#include <iostream>
#include <cstdlib>  // for system()

int main() {

    ////////////////////DOWNLOAD HAARCASCADE MODEL/////////////////////
    //USE THIS SECTION OF CODE TO DOWNLOAD THE HAARCASCADE MODEL DIRECTLY FROM OPENCV
    //Note: If the .xml file already exists, comment lines 7-18
    //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    // // URL of the Haar Cascade file on GitHub
    // std::string url = "https://raw.githubusercontent.com/opencv/opencv/master/data/haarcascades/haarcascade_frontalface_default.xml";
    // std::string filename = "haarcascade_frontalface_default.xml";
    
    // // Use wget to download the Haar Cascade file
    // std::string command = "wget " + url + " -O " + filename;
    // int result = system(command.c_str());  // Run the wget command in the system shell

    // // Check if the file was successfully downloaded
    // if (result != 0) {
    //     std::cerr << "Failed to download Haar Cascade XML file!" << std::endl;
    //     return -1;
    // }
    
    // std::cout << "File downloaded successfully!" << std::endl;

    //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++



    // Load the Haar Cascade model for face detection
    cv::CascadeClassifier face_cascade;
    std::string filename = "haarcascade_frontalface_default.xml";  // Ensure this is the correct path to the XML file
    
    if (!face_cascade.load(filename)) {
        std::cerr << "Error loading Haar Cascade XML file!" << std::endl;
        return -1;
    }

    // Load a static image (replace with the path to your image)
    cv::Mat image = cv::imread("SSubedi.jpg");  // Change "face_image.jpg" to your image path
    
    if (image.empty()) {
        std::cerr << "Error: Could not load image!" << std::endl;
        return -1;
    }

    // Convert the image to grayscale for better detection
    cv::Mat gray;
    cv::cvtColor(image, gray, cv::COLOR_BGR2GRAY);

    // Detect faces in the image
    std::vector<cv::Rect> faces;
    face_cascade.detectMultiScale(gray, faces);

    // Draw rectangles around detected faces
    for (size_t i = 0; i < faces.size(); i++) {
        cv::rectangle(image, faces[i], cv::Scalar(0, 0, 255), 5);  // Blue rectangles around faces
    }

    // Save the output image with detected faces
    cv::imwrite("ssubedi_faceBBox.jpg", image);  // Save the image to a file

    std::cout << "Output image saved as 'ssubedi_faceBBox.jpg'!" << std::endl;

    return 0;
}