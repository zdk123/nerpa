#ifndef NRPSMATCHER_NRPSPREDICTION_H
#define NRPSMATCHER_NRPSPREDICTION_H

#include "NRPsPart.h"

namespace nrpsprediction {
    //structure for store NRPs predictions
    class NRPsPrediction {
    private:
        std::vector<NRPsPart> nrpparts;

        //orf = <prefix>_<orfname>_A<num>
        //return (<orfname>, <num>)
        std::pair<std::string, int> get_orf_name_and_order(std::string orf);
    public:
        //parse ctg1_nrpspredictor2_codes.txt file
        //expected groupded by orfs and sorted by num in one group
        void read_file(std::string file_name);

    };
}


#endif //NRPSMATCHER_NRPSPREDICTION_H
