#include <opencv2/highgui/highgui.hpp>

int main() {
	cv::Mat img = cv::imread("/home/kurian/Pictures/art_diamond_phone.jpg",
				 CV_LOAD_IMAGE_COLOR);
	cv::imshow("opencvtest", img);
	cv::waitKey(0);

	return 0;
}
