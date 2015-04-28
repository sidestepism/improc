//
//  main.cpp
//  improc
//
//  Created by Ryohei Fushimi on 2015/04/28.
//  Copyright (c) 2015年 Ryohei Fushimi. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, const char * argv[]) {
    // insert code here...
    cv::Mat src_img = cv::imread("/Users/ryohei/gitrepos/improc/improc/lenna.jpg", 1);
    if(src_img.empty()) return -1;
    cv::namedWindow("image1", CV_WINDOW_AUTOSIZE|CV_WINDOW_FREERATIO);
    cv::Mat proc_img = cv::Mat();
    
    cv::cvtColor(src_img, proc_img, CV_RGB2GRAY);
    for(int i = 0; i < src_img.cols;i ++){
        for(int j = 0; j < src_img.rows; j++){
            src_img.data[(i*src_img.rows+j)*3 + 2] += 20;
            
        }
    }
    cv::imshow("image1", proc_img);
    cv::waitKey(0);
    return 0;
}
