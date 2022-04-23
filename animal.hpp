class Animal {
   private:
       int gender = 0;
       int energy = 100;
       int health = 0;
       int tired = 100;
       int activity = 0;
       int position_x = 0;
       int position_y = 0;
       int vector_x = 0;
       int vector_y = 0;
       bool inited = false;
   public:
       void init (int to_x, int to_y, int to_vector_x = 0, int to_vector_y = 0) {
           position_x = to_x;
           position_y = to_y;
           vector_x = to_vector_x;
           vector_y = to_vector_y;
           inited = true;
       }
       int getX () {
           return position_x;
       }
       int getY () {
           return position_y;
       }
       void move (){
           position_x = position_x+vector_x;
           position_y = position_y+vector_y;
       }
       int eat(){
           return 0;
       }
       int sleep(){
           return 0;
       }

};
