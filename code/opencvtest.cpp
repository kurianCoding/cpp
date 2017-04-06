#include <opencv2/highgui/highgui.hpp>
using namespace cv;

int main() {
	Mat img = imread("/home/kurian/Pictures/art_diamond_phone.jpg",
			 CV_LOAD_IMAGE_COLOR);
	imshow("opencvtest", img);
	waitKey(0);

	return 0;
}
