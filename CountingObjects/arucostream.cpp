
#include <opencv2\highgui\highgui.hpp>

int main()
{
	cvNamedWindow("Streaming", CV_WINDOW_AUTOSIZE);
	CvCapture* capture = cvCreateCameraCapture(0);
	IplImage* frame;
	while (1)
	{
		frame = cvQueryFrame(capture);
		if (!frame) break;
		cvShowImage("Streaming", frame);
		char c = cvWaitKey(33);
		if (c == 27) break; // press escape to terminate the loop
	}

	cvReleaseCapture(&capture);
	cvDestroyWindow("Streaming");
	return 0;
}
// even een kleine test imn te kijken of alles werkt........