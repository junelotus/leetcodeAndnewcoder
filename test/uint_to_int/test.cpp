#include <iostream>
#include <map>
using namespace std;
const uint32_t POSITION_TYPE_NONE=0;
const uint32_t POSITION_TYPE_FIXED=1;
const uint32_t POSITION_TYPE_FIXEDHEIGHT=2;
const uint32_t POSITION_TYPE_FLOATCONV=4;
const uint32_t POSITION_TYPE_WIDELANE=5;
const uint32_t POSITION_TYPE_NARROWLANE=6;
const uint32_t POSITION_TYPE_DOPPLER_VELOCITY=8;
const uint32_t POSITION_TYPE_SINGLE=16;
const uint32_t POSITION_TYPE_PSRDIFF=17;
const uint32_t POSITION_TYPE_WAAS=18;
const uint32_t POSITION_TYPE_PROPAGATED=19;
const uint32_t POSITION_TYPE_OMNISTAR=20;
const uint32_t POSITION_TYPE_L1_FLOAT=32;
const uint32_t POSITION_TYPE_IONOFREE_FLOAT=33;
const uint32_t POSITION_TYPE_NARROW_FLOAT=34;
const uint32_t POSITION_TYPE_L1_INT=48;
const uint32_t POSITION_TYPE_WIDE_INT=49;
const uint32_t POSITION_TYPE_NARROW_INT=50;
const uint32_t POSITION_TYPE_RTK_DIRECT_INS=51;
const uint32_t POSITION_TYPE_INS_SBAS=52;
const uint32_t POSITION_TYPE_INS_PSRSP=53;
const uint32_t POSITION_TYPE_INS_PSRDIFF=54;
const uint32_t POSITION_TYPE_INS_RTKFLOAT=55;
const uint32_t POSITION_TYPE_INS_RTKFIXED=56;
const uint32_t POSITION_TYPE_INS_OMNISTAR=57;
const uint32_t POSITION_TYPE_INS_OMNISTAR_HP=58;
const uint32_t POSITION_TYPE_INS_OMNISTAR_XP=59;
const uint32_t POSITION_TYPE_OMNISTAR_HP=64;
const uint32_t POSITION_TYPE_OMNISTAR_XP=65;
const uint32_t POSITION_TYPE_PPP_CONVERGING=68;
const uint32_t POSITION_TYPE_PPP=69;
const uint32_t POSITION_TYPE_INS_PPP_CONVERGING=73;
const uint32_t POSITION_TYPE_INS_PPP=74;
enum {
    STATUS_NO_FIX = -1,
    STATUS_FIX = 0,
    STATUS_SBAS_FIX = 1,
    STATUS_GBAS_FIX = 2,
    SERVICE_GPS = 1u,
    SERVICE_GLONASS = 2u,
    SERVICE_COMPASS = 4u,
    SERVICE_GALILEO = 8u,
  };
std::map<int,int> position_type_to_status=std::map<int,int>{
         std::pair<int, int>( POSITION_TYPE_NONE, STATUS_NO_FIX),

 std::pair<int, int>(  POSITION_TYPE_FIXED, STATUS_FIX),
 std::pair<int, int>(   POSITION_TYPE_FIXEDHEIGHT, STATUS_FIX),
 std::pair<int, int>( POSITION_TYPE_FLOATCONV, STATUS_FIX),
 std::pair<int, int>( POSITION_TYPE_WIDELANE, STATUS_FIX),
 std::pair<int, int>( POSITION_TYPE_NARROWLANE, STATUS_FIX),
 std::pair<int, int>(  POSITION_TYPE_DOPPLER_VELOCITY, STATUS_FIX),
 std::pair<int, int>( POSITION_TYPE_SINGLE, STATUS_NO_FIX),
 std::pair<int, int>( POSITION_TYPE_PSRDIFF, STATUS_NO_FIX),
 std::pair<int, int>(  POSITION_TYPE_WAAS, STATUS_GBAS_FIX),
 std::pair<int, int>(  POSITION_TYPE_PROPAGATED, STATUS_NO_FIX),
 std::pair<int, int>( POSITION_TYPE_OMNISTAR, STATUS_SBAS_FIX),
 std::pair<int, int>( POSITION_TYPE_L1_FLOAT, STATUS_GBAS_FIX),
 std::pair<int, int>(  POSITION_TYPE_IONOFREE_FLOAT, STATUS_GBAS_FIX),
 std::pair<int, int>( POSITION_TYPE_NARROW_FLOAT, STATUS_GBAS_FIX),
 std::pair<int, int>( POSITION_TYPE_L1_INT, STATUS_GBAS_FIX),
 std::pair<int, int>(  POSITION_TYPE_WIDE_INT, STATUS_FIX),
 std::pair<int, int>( POSITION_TYPE_NARROW_INT, STATUS_FIX),
 std::pair<int, int>( POSITION_TYPE_RTK_DIRECT_INS, STATUS_FIX),
 std::pair<int, int>( POSITION_TYPE_INS_SBAS, STATUS_FIX),
 std::pair<int, int>(  POSITION_TYPE_INS_PSRSP, STATUS_NO_FIX),
 std::pair<int, int>( POSITION_TYPE_INS_PSRDIFF, STATUS_NO_FIX),
 std::pair<int, int>( POSITION_TYPE_INS_RTKFLOAT, STATUS_FIX),
 std::pair<int, int>( POSITION_TYPE_INS_RTKFIXED, STATUS_FIX),
 std::pair<int, int>( POSITION_TYPE_INS_OMNISTAR, STATUS_GBAS_FIX),
 std::pair<int, int>( POSITION_TYPE_INS_OMNISTAR_HP, STATUS_GBAS_FIX),
 std::pair<int, int>( POSITION_TYPE_INS_OMNISTAR_XP, STATUS_GBAS_FIX),
 std::pair<int, int>( POSITION_TYPE_OMNISTAR_HP, STATUS_SBAS_FIX),
 std::pair<int, int>( POSITION_TYPE_OMNISTAR_XP, STATUS_SBAS_FIX),
 std::pair<int, int>( POSITION_TYPE_PPP_CONVERGING, STATUS_SBAS_FIX),
 std::pair<int, int>( POSITION_TYPE_PPP, STATUS_SBAS_FIX),
 std::pair<int, int>( POSITION_TYPE_INS_PPP_CONVERGING, STATUS_SBAS_FIX),
 std::pair<int, int>( POSITION_TYPE_INS_PPP, STATUS_SBAS_FIX) 
        };


int main()
{

unsigned int wode = 8;
int nide  =wode;
cout<<nide<<endl;

cout<<(position_type_to_status.find(POSITION_TYPE_FIXEDHEIGHT))->second<<endl;

return 0;

}
