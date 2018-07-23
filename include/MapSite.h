
class MapSite
{
public:
  MapSite();
  ~MapSite();

  virtual void Enter() = 0;

enum Direction
{
  North,
  South,
  East,
  West
};

};