#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
//#include "SOIL2/SOIL2.h"
#include <string>
#include <tesseract/baseapi.h>
#include <tesseract/strngs.h>
#include <leptonica/allheaders.h>
#include <opencv2/core/core.hpp>
#include <opencv2/core/utility.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include "stb_image.h"
using namespace cv;
using namespace std;
GLuint texture;     //  TEXTURE FOR RECTS
// COUNTERS
int count1 = 1;
int count2 = 11;

std::string str = "captchas/1.png";    //  DEFAULT STATE

int fontFace = FONT_HERSHEY_DUPLEX;     //  FONT FOR OUTPUT IMAGE

static void error_callback(int error, const char* description)  //  ERROR CALLBACK
{
    fputs(description, stderr);
}

//  KEY PRESS FUNCTION
static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) //  ESCAPE - CLOSE WINDOW
        glfwSetWindowShouldClose(window, GL_TRUE);
    else if (key == GLFW_KEY_RIGHT_SHIFT && action == GLFW_PRESS) // TEXT CAPTCHAS
    {
        count1++;
        if (count1 >10)
            count1 = 1;
        str = "captchas/" + std::to_string(count1) + ".png";    // FILE PATH
    }
    else if (key == GLFW_KEY_ENTER && action == GLFW_PRESS) // NUMERICAL CAPTCHAS
    {
        count2++;
        if (count2 >20)
            count2 = 11;
        str = "captchas/" + std::to_string(count2) + ".png";    // FILE PATH
    }
}


//  LOAD TEXTURE USING SOIL2
//void loadTexture(GLuint* texture, char* path){
//    *texture = SOIL_load_OGL_texture(path,
//                                     SOIL_LOAD_AUTO,
//                                     SOIL_CREATE_NEW_ID,
//                                     SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_MULTIPLY_ALPHA
//    );
//    if(*texture == NULL){
//        printf("[Texture loader] \"%s\" failed to load!\n", path);
//    }
//}

//  FUNCTIONS FOR DRAWING TEXTURED RECTANGLES
void drawTexturedRect1label(char* a){
//    loadTexture(&texture, a);
//    glEnable(GL_TEXTURE_2D);
//    glBindTexture(GL_TEXTURE_2D, texture);
//    glEnable(GL_BLEND);
//    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
//    glDepthMask(GL_FALSE);
//    glDisable(GL_DEPTH_TEST);
//    glBegin(GL_QUADS);
//    glColor3f(1,1,1);

    int w1, h1, comp1;
    GLuint t1;

    unsigned char * im = stbi_load(a, &w1, &h1, &comp1, 0);

    glGenTextures(1, &t1);

    glBindTexture(GL_TEXTURE_2D, t1);

    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w1, h1, 0, GL_RGBA, GL_UNSIGNED_BYTE, im);
    stbi_image_free(im);
    glBindTexture(GL_TEXTURE_2D, 0);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, t1);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDepthMask(GL_FALSE);
    glDisable(GL_DEPTH_TEST);
    glBegin(GL_QUADS);
    glColor3f(1,1,1);

    glTexCoord2f(1,0);
    glVertex2f(-0.1,0.3); // TR

    glTexCoord2f(0.0,0.0);
    glVertex2f(-0.5,0.3); // TL

    glTexCoord2f(0,1);
    glVertex2f(-0.5,0.1); // BL

    glTexCoord2f(1,1);
    glVertex2f(-0.1,0.1); // BR


    glEnd();
    glDisable(GL_DEPTH_TEST);
    glDepthMask(GL_TRUE);
    glDisable(GL_BLEND);

}
void drawTexturedRect2label(char* a){
//    loadTexture(&texture, a);
//    glEnable(GL_TEXTURE_2D);
//    glBindTexture(GL_TEXTURE_2D, texture);
//    glEnable(GL_BLEND);
//    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
//    glDepthMask(GL_FALSE);
//    glDisable(GL_DEPTH_TEST);
//    glBegin(GL_QUADS);
//    glColor3f(1,1,1);

    int w1, h1, comp1;
    GLuint t1;

    unsigned char * im = stbi_load(a, &w1, &h1, &comp1, 0);

    glGenTextures(1, &t1);

    glBindTexture(GL_TEXTURE_2D, t1);

    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w1, h1, 0, GL_RGBA, GL_UNSIGNED_BYTE, im);
    stbi_image_free(im);
    glBindTexture(GL_TEXTURE_2D, 0);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, t1);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDepthMask(GL_FALSE);
    glDisable(GL_DEPTH_TEST);
    glBegin(GL_QUADS);
    glColor3f(1,1,1);

    glTexCoord2f(1,0);
    glVertex2f(-0.1,0.0); // TR

    glTexCoord2f(0.0,0.0);
    glVertex2f(-0.5,0.0); // TL

    glTexCoord2f(0,1);
    glVertex2f(-0.5,-0.2); // BL

    glTexCoord2f(1,1);
    glVertex2f(-0.1,-0.2); // BR


    glEnd();
    glDisable(GL_DEPTH_TEST);
    glDepthMask(GL_TRUE);
    glDisable(GL_BLEND);

}
void drawTexturedRect3label(char* a){
//    loadTexture(&texture, a);
//    glEnable(GL_TEXTURE_2D);
//    glBindTexture(GL_TEXTURE_2D, texture);
//    glEnable(GL_BLEND);
//    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
//    glDepthMask(GL_FALSE);
//    glDisable(GL_DEPTH_TEST);
//    glBegin(GL_QUADS);
//    glColor3f(1,1,1);

    int w1, h1, comp1;
    GLuint t1;

    unsigned char * im = stbi_load(a, &w1, &h1, &comp1, 0);

    glGenTextures(1, &t1);

    glBindTexture(GL_TEXTURE_2D, t1);

    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w1, h1, 0, GL_RGBA, GL_UNSIGNED_BYTE, im);
    stbi_image_free(im);
    glBindTexture(GL_TEXTURE_2D, 0);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, t1);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDepthMask(GL_FALSE);
    glDisable(GL_DEPTH_TEST);
    glBegin(GL_QUADS);
    glColor3f(1,1,1);

    glTexCoord2f(1,0);
    glVertex2f(-0.1,-0.3); // TR

    glTexCoord2f(0.0,0.0);
    glVertex2f(-0.5,-0.3); // TL

    glTexCoord2f(0,1);
    glVertex2f(-0.5,-0.5); // BL

    glTexCoord2f(1,1);
    glVertex2f(-0.1,-0.5); // BR


    glEnd();
    glDisable(GL_DEPTH_TEST);
    glDepthMask(GL_TRUE);
    glDisable(GL_BLEND);

}
void drawTexturedRect4label(char* a){
//    loadTexture(&texture, a);
//    glEnable(GL_TEXTURE_2D);
//    glBindTexture(GL_TEXTURE_2D, texture);
//    glEnable(GL_BLEND);
//    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
//    glDepthMask(GL_FALSE);
//    glDisable(GL_DEPTH_TEST);
//    glBegin(GL_QUADS);
//    glColor3f(1,1,1);

    int w1, h1, comp1;
    GLuint t1;

    unsigned char * im = stbi_load(a, &w1, &h1, &comp1, 0);

    glGenTextures(1, &t1);

    glBindTexture(GL_TEXTURE_2D, t1);

    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w1, h1, 0, GL_RGBA, GL_UNSIGNED_BYTE, im);
    stbi_image_free(im);
    glBindTexture(GL_TEXTURE_2D, 0);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, t1);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDepthMask(GL_FALSE);
    glDisable(GL_DEPTH_TEST);
    glBegin(GL_QUADS);
    glColor3f(1,1,1);

    glTexCoord2f(1,0);
    glVertex2f(-0.1,-0.6); // TR

    glTexCoord2f(0.0,0.0);
    glVertex2f(-0.5,-0.6); // TL

    glTexCoord2f(0,1);
    glVertex2f(-0.5,-0.8); // BL

    glTexCoord2f(1,1);
    glVertex2f(-0.1,-0.8); // BR


    glEnd();
    glDisable(GL_DEPTH_TEST);
    glDepthMask(GL_TRUE);
    glDisable(GL_BLEND);

}
void drawTexturedRect1(char* a){
//    loadTexture(&texture, a);
//    glEnable(GL_TEXTURE_2D);
//    glBindTexture(GL_TEXTURE_2D, texture);
//    glEnable(GL_BLEND);
//    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
//    glDepthMask(GL_FALSE);
//    glDisable(GL_DEPTH_TEST);
//    glBegin(GL_QUADS);
//    glColor3f(1,1,1);

    int w1, h1, comp1;
    GLuint t1;

    unsigned char * im = stbi_load(a, &w1, &h1, &comp1, 0);

    glGenTextures(1, &t1);

    glBindTexture(GL_TEXTURE_2D, t1);

    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w1, h1, 0, GL_RGBA, GL_UNSIGNED_BYTE, im);
    stbi_image_free(im);
    glBindTexture(GL_TEXTURE_2D, 0);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, t1);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDepthMask(GL_FALSE);
    glDisable(GL_DEPTH_TEST);
    glBegin(GL_QUADS);
    glColor3f(1,1,1);

    glTexCoord2f(1,0);
    glVertex2f(0.5,0.3); // TR

    glTexCoord2f(0.0,0.0);
    glVertex2f(0.1,0.3); // TL

    glTexCoord2f(0,1);
    glVertex2f(0.1,0.1); // BL

    glTexCoord2f(1,1);
    glVertex2f(0.5,0.1); // BR


    glEnd();
    glDisable(GL_DEPTH_TEST);
    glDepthMask(GL_TRUE);
    glDisable(GL_BLEND);

}
void drawTexturedRect2(char* a){
//    loadTexture(&texture, a);
//    glEnable(GL_TEXTURE_2D);
//    glBindTexture(GL_TEXTURE_2D, texture);
//    glEnable(GL_BLEND);
//    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
//    glDepthMask(GL_FALSE);
//    glDisable(GL_DEPTH_TEST);
//    glBegin(GL_QUADS);
//    glColor3f(1,1,1);
    int w1, h1, comp1;
    GLuint t1;

    unsigned char * im = stbi_load(a, &w1, &h1, &comp1, 0);

    glGenTextures(1, &t1);

    glBindTexture(GL_TEXTURE_2D, t1);

    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w1, h1, 0, GL_RGB, GL_UNSIGNED_BYTE, im);
    stbi_image_free(im);
    glBindTexture(GL_TEXTURE_2D, 0);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, t1);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDepthMask(GL_FALSE);
    glDisable(GL_DEPTH_TEST);
    glBegin(GL_QUADS);
    glColor3f(1,1,1);

    glTexCoord2f(1,0);
    glVertex2f(0.5,0.0); // TR

    glTexCoord2f(0.0,0.0);
    glVertex2f(0.1,0.0); // TL

    glTexCoord2f(0,1);
    glVertex2f(0.1,-0.2); // BL

    glTexCoord2f(1,1);
    glVertex2f(0.5,-0.2); // BR

    glEnd();
    glDisable(GL_DEPTH_TEST);
    glDepthMask(GL_TRUE);
    glDisable(GL_BLEND);

}
void drawTexturedRect3(char* a){
//    loadTexture(&texture, a);
//    glEnable(GL_TEXTURE_2D);
//    glBindTexture(GL_TEXTURE_2D, texture);
//    glEnable(GL_BLEND);
//    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
//    glDepthMask(GL_FALSE);
//    glDisable(GL_DEPTH_TEST);
//    glBegin(GL_QUADS);
//    glColor3f(1,1,1);

    int w1, h1, comp1;
    GLuint t1;

    unsigned char * im = stbi_load(a, &w1, &h1, &comp1, 0);

    glGenTextures(1, &t1);

    glBindTexture(GL_TEXTURE_2D, t1);

    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w1, h1, 0, GL_RGB, GL_UNSIGNED_BYTE, im);
    stbi_image_free(im);
    glBindTexture(GL_TEXTURE_2D, 0);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, t1);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDepthMask(GL_FALSE);
    glDisable(GL_DEPTH_TEST);
    glBegin(GL_QUADS);
    glColor3f(1,1,1);

    glTexCoord2f(1,0);
    glVertex2f(0.5,-0.3); // TR

    glTexCoord2f(0.0,0.0);
    glVertex2f(0.1,-0.3); // TL

    glTexCoord2f(0,1);
    glVertex2f(0.1,-0.5); // BL

    glTexCoord2f(1,1);
    glVertex2f(0.5,-0.5); // BR


    glEnd();
    glDisable(GL_DEPTH_TEST);
    glDepthMask(GL_TRUE);
    glDisable(GL_BLEND);

}
void drawTexturedRect4(char* a){
//    loadTexture(&texture, a);
//    glEnable(GL_TEXTURE_2D);
//    glBindTexture(GL_TEXTURE_2D, texture);
//    glEnable(GL_BLEND);
//    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
//    glDepthMask(GL_FALSE);
//    glDisable(GL_DEPTH_TEST);
//    glBegin(GL_QUADS);
//    glColor3f(1,1,1);

    int w1, h1, comp1;
    GLuint t1;

    unsigned char * im = stbi_load(a, &w1, &h1, &comp1, 0);

    glGenTextures(1, &t1);

    glBindTexture(GL_TEXTURE_2D, t1);

    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w1, h1, 0, GL_RGB, GL_UNSIGNED_BYTE, im);
    stbi_image_free(im);
    glBindTexture(GL_TEXTURE_2D, 0);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, t1);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDepthMask(GL_FALSE);
    glDisable(GL_DEPTH_TEST);
    glBegin(GL_QUADS);
    glColor3f(1,1,1);

    glTexCoord2f(1,0);
    glVertex2f(0.5,-0.6); // TR

    glTexCoord2f(0.0,0.0);
    glVertex2f(0.1,-0.6); // TL

    glTexCoord2f(0,1);
    glVertex2f(0.1,-0.8); // BL

    glTexCoord2f(1,1);
    glVertex2f(0.5,-0.8); // BR


    glEnd();
    glDisable(GL_DEPTH_TEST);
    glDepthMask(GL_TRUE);
    glDisable(GL_BLEND);

}
void drawTexturedRecttitle(char* a){
//    loadTexture(&texture, a);
//    glEnable(GL_TEXTURE_2D);
//    glBindTexture(GL_TEXTURE_2D, texture);
//    glEnable(GL_BLEND);
//    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
//    glDepthMask(GL_FALSE);
//    glDisable(GL_DEPTH_TEST);
//    glBegin(GL_QUADS);
//    glColor3f(1,1,1);

    int w1, h1, comp1;
    GLuint t1;

    unsigned char * im = stbi_load(a, &w1, &h1, &comp1, 0);

    glGenTextures(1, &t1);

    glBindTexture(GL_TEXTURE_2D, t1);

    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w1, h1, 0, GL_RGBA, GL_UNSIGNED_BYTE, im);
    stbi_image_free(im);
    glBindTexture(GL_TEXTURE_2D, 0);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, t1);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDepthMask(GL_FALSE);
    glDisable(GL_DEPTH_TEST);
    glBegin(GL_QUADS);
    glColor3f(1,1,1);

    glTexCoord2f(1,0);
    glVertex2f(0.9,1); // TR

    glTexCoord2f(0.0,0.0);
    glVertex2f(-0.9,1); // TL

    glTexCoord2f(0,1);
    glVertex2f(-0.9,-1); // BL

    glTexCoord2f(1,1);
    glVertex2f(0.9,-1); // BR


    glEnd();
    glDisable(GL_DEPTH_TEST);
    glDepthMask(GL_TRUE);
    glDisable(GL_BLEND);

}

//  TESSERACT FUNCTIONS
class OCRDecoder
{
public:
    void decodeGrayMat(cv::Mat mat, char* result);
};

void OCRDecoder::decodeGrayMat (cv::Mat mat, char *result)
{
    tesseract::TessBaseAPI tess;
    tess.Init(NULL, "eng", tesseract::OEM_DEFAULT);
    tess.SetPageSegMode(tesseract::PSM_SINGLE_BLOCK);
    tess.SetImage((uchar*)mat.data, mat.cols, mat.rows, 1, mat.cols);

    strcpy(result, tess.GetUTF8Text());
}


int main(void)
{
    // OPENCV PARAMETERS
    float dist_betn_lines=1; //distance between 2 detected lines to be identified as seperate lines
    float min_line_length=3; //minimum line length detected
    float line_threshold=40; //decrease this to detect more lines and vice versa
    float line_resolution=1; //thickness of line detected //dont touch

    float dilation_coeff=1; //make image thinner
    float erosion_coeff=1; //make thin image broader
    float blur_coeff=4; // at least 2 or comment out blur loop for no blur
    float red_line_width=1.5; //width by which every detected line is erased
    float final_threshold=155; //dont change too much //max 255 //dont make 0

    GLFWwindow* window; // OPENGL WINDOW
    glfwSetErrorCallback(error_callback);
    if (!glfwInit())
        exit(EXIT_FAILURE);
    window = glfwCreateWindow(640, 480, "Captcha Solver", NULL, NULL);  //  WINDOW TITLE and SIZE
    if (!window)    //  EXIT WINDOW
    {
        glfwTerminate();
        exit(EXIT_FAILURE);
    }
    glfwMakeContextCurrent(window);
    glfwSetKeyCallback(window, key_callback);
    while (!glfwWindowShouldClose(window))  //  RENDER LOOP
    {
        float ratio;
        int width, height;
        glfwGetFramebufferSize(window, &width, &height);
        ratio = width / (float) height;
        glViewport(0, 0, width, height);
        glClear(GL_COLOR_BUFFER_BIT);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();
        //////////////////////////////////  TESSARACT/OPENCV STUFF HERE
        Mat mat = imread(&str[0u],0);
        Mat threshold_mat;

        char buffer[255];
        OCRDecoder decoder;
        Mat dst,cdst,cdst1; vector<Vec4i> lines;
        Mat mat1;
        GaussianBlur(mat, mat1, Size(1, 1), 0, 0);
//        for (int i = 1; i< 2; i = i+2)
//        {
//            GaussianBlur(mat, mat1, Size(i, i), 0, 0);
//        }
        Canny(mat1,dst,50,200,3);
        imwrite("canny.png",dst);
        cvtColor(mat, cdst, CV_GRAY2BGR);
        cvtColor(mat, cdst1, CV_GRAY2BGR);
        HoughLinesP(dst, lines,line_resolution, CV_PI/180, line_threshold, min_line_length, dist_betn_lines );

        for( size_t i = 0; i < lines.size(); i++ )  // REMOVE STRAY LINES
        {
            Vec4i l = lines[i];
            line( cdst, Point(l[0], l[1]), Point(l[2], l[3]), Scalar(255,255,255), red_line_width, CV_AA);
            line( cdst1, Point(l[0], l[1]), Point(l[2], l[3]), Scalar(0,0,255), red_line_width, CV_AA);
            //cout<<l<<endl;
        }

        //  imshow("src",dst);

        imwrite("lines.png",cdst1);
        Mat blur,dilated,eroded;
        float dilation_size=dilation_coeff;
        float erosion_size=erosion_coeff;
        Mat element = getStructuringElement( MORPH_RECT,
                                             Size( 2*dilation_size + 1, 2*dilation_size+1 ),
                                             Point( dilation_size, dilation_size ) );
        dilate(cdst,dilated, element);
        Mat element2 = getStructuringElement( MORPH_RECT,
                                              Size( 2*erosion_size + 1, 2*erosion_size+1 ),
                                              Point( erosion_size, erosion_size ) );

        /// Apply the erosion operation
        erode( dilated, eroded, element2 );
        for (int i=1; i<blur_coeff; i=i+2)
        {// Gaussian smoothing
            GaussianBlur( eroded, blur, Size( i, i ), 0, 0 );
        }
        imwrite("cleaned.png",blur);
        Mat thres;

        //     imwrite("cleaned.jpg",eroded);

        mat = imread("cleaned.png",0);

        cv::threshold(mat, threshold_mat, final_threshold, 255, cv::THRESH_BINARY);

        decoder.decodeGrayMat(threshold_mat, buffer);
        //      decoder.decodeGrayMat(cdst, buffer);
        cout<<"result:"<<buffer<<endl;
        string word = buffer;
        word.erase(std::remove_if(word.begin(),
                                  word.end(),
                                  [](char c) {
                                      return !(isalnum(c) || '-' == c || '+' == c || '~'==c);
                                  }), word.end());

        cout<<"clean word:"<<word<<endl;
        int calc_flag=0;
        // if + or - are present ignore alphabets and do calculation
        for(unsigned int i = 0; i<word.length(); i++)
        {
            char c = word[i]; //this is your character
            if(c=='+')
            {
                calc_flag=1; // flag=1 => addition
                break;
            }
            else if(c=='-'||c=='~')
            {
                calc_flag=2; // flag=2 => subraction
                break;
            }
            else
                calc_flag=0;
        }

        string elems[] = {"firstelement","secondelement"};

        if(calc_flag==1 || calc_flag==2)
        {
            word.erase(std::remove_if(word.begin(),
                                      word.end(),
                                      [](char c) {
                                          return (isalpha(c));
                                      }), word.end());


            int n = word.length();

            // declaring character array
            char char_array[n+1];

            // copying the contents of the
            // string to char array
            strcpy(char_array, word.c_str());

            cout<<char_array<<endl;

            char * pch;
            pch = strtok (char_array,"+-");
            int i=0;
            while (pch != NULL)
            {
                elems[i] = pch;
                i++;
                pch = strtok (NULL, "+-");
            }


        }

        cout<<"word1:"<<elems[0]<<endl;
        cout<<"word2:"<<elems[1]<<endl;

        int ans=0;

        if(calc_flag==1)
        {
            ans = stoi(elems[0])+stoi(elems[1]);
            word = to_string(ans);
        }
        else if(calc_flag==2)
        {
            ans = stoi(elems[0])-stoi(elems[1]);
            word = to_string(ans);
        }
        cout<<"result:"<<word<<endl;
        Mat img(80, 200, CV_8UC3, Scalar::all(0));
        int baseline=0;
        Size textSize = getTextSize(word, fontFace, 1, 3, &baseline);
        baseline += 3;

        //  PUT OUPUT TEXT ON AN IMAGE TO RENDER AS TEXTURE
        Point textOrg((img.cols - textSize.width)/2, (img.rows + textSize.height)/2);

        putText(img, word, textOrg, fontFace, 1, Scalar::all(255), 3, 8);
        imwrite("output.png", img);
        //////////////////////////////////  TESSARACT/OPENCV STUFF HERE

        // DRAW TEXTURED RECTANGLES
        drawTexturedRecttitle("textures/title.png");
        drawTexturedRect1(&str[0u]);
        drawTexturedRect2("lines.png");
        drawTexturedRect3("cleaned.png");
        drawTexturedRect4("output.png");
        drawTexturedRect1label("textures/inputlabel.png");
        drawTexturedRect2label("textures/findnoiselabel.png");
        drawTexturedRect3label("textures/removenoiselabel.png");
        drawTexturedRect4label("textures/finaloutputlabel.png");
        glEnd();
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
}