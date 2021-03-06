// Copyright Igor Bogoslavskyi, year 2017.
// In case of any problems with the code please contact me.
// Email: igor.bogoslavskyi@uni-bonn.de.

#ifndef SRC_QT_UTILS_UTILS_H_
#define SRC_QT_UTILS_UTILS_H_

#include <QDir>
#include <QImage>
#include <QString>

#include <string>
#include <Eigen/Core>

#include <utils/cloud.h>
#include <opencv2/opencv.hpp>

namespace dc = depth_clustering;

QString appendPaths(const QString &path1, const QString &path2);

QImage MatToQImage(const cv::Mat &image);

dc::Cloud::Ptr CloudFromFile(const std::string &file_name,
                             const dc::ProjectionParams &proj_params);
bool ReadCameraImage(const std::string& imagePath,cv::Mat& imgRead,std::string& parent_dir_path);
//get random color
const Eigen::Vector3f randomColor();

#endif  // SRC_QT_UTILS_UTILS_H_
