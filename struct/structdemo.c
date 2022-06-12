struct foo{
  int x;
  int y[];
};

struct bar{
  struct foo z;
};

struct foo a = {1,{2,3,4}};
//struct bar b = {{1,{2,3,4}}};
struct bar b= { {1,{} } };
//struct foo d[1]={{1,{2,3,4} } };
struct foo d[1]={ {1,{} } };

