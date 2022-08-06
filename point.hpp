struct point{
  point():point{0.0,0.0} {}
  point(double x,double y):x_{x},y_{y} {}
  point(point const &pt):point{pt.x,pt.y} {}
  double x_;
  double y_;
};

