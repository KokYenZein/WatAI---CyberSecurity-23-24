/**
 * @author: Akira Yoshiyama
 * @date: 28/02/2024
 * @description: Positive Selection Algorithm for Network Attack Detection with 100 detectors
*/

/**
 * Params to be hardcoded by user:
 *      Class Detectors: num_detectors, num_features, array_ capacity, array_
 *      float* scaler(): mean, std_dev, mean length, std_dev length
 *      bool psa(): radius
 *      int main(): dummy attack vector length
*/

/** 
 * @brief       Interface for detectors array
*/
class Detectors {
    public:
        Detectors();
        ~Detectors();
        float get(short, short);
        unsigned short get_num_dtrs() {
            return num_detectors;
        }
        unsigned short get_num_feats() {
            return num_features;
        }

    private:
        // Harcoded
        unsigned short num_detectors{100};
        unsigned short num_features{5};
        // num_detectors * num_features
        float detectorsArray_[500]{4.5348984226694276, 5.181020889084533, 6.03930089462135, 3.6061234770833277, 9.81287910995907, 4.029121274953518, 3.534918898568923, 0.22800420764326837, 6.109526170997523, 10.77765207185639, 3.8217013049238475, 12.827359761493929, 8.15325445750737, 7.1614396943142165, 32.20519674740139, 5.582660274690586, 13.441895401179616, 7.665691276370021, 21.83387937639029, 33.72724849572774, 9.329561572958491, 7.645278325019977, 3.0990725244088226, 23.535058748591293, 0.3032175473954519, 3.2518867639557976, 3.290236029557693, 6.010209685197266, 18.327933824376128, 11.129471707735812, 6.73603832223649, 7.570846994278385, 4.183942161970825, 18.586770550632664, 27.269766357478687, 1.779833678227291, 15.096931049538316, 3.810044211842585, 12.943043829999324, 25.29723672315886, 3.921563499643383, 7.604789872393816, 5.535485648610125, 23.700998313876983, 30.813819311430567, 1.0590447813318649, 15.04605105907042, 7.280262060889578, 9.283694482708103, 12.943184502862628, 8.769335956004337, 9.333494261509937, 2.0899774853762736, 8.676976968943125, 25.325595695725553, 2.601774374266623, 15.811895593240587, 9.037837919030029, 16.33325326260737, 26.002246039928938, 8.439466485765564, 1.6507686837966804, 6.84053791794087, 14.690692763322678, 18.711939451736907, 8.410488624310068, 9.739103186544988, 4.902519138917593, 11.032172431849139, 32.59240141026904, 4.628184497440621, 12.293018977472027, 10.30041377695395, 15.840928313126481, 33.008269256415325, 6.286663950915127, 9.10637012502512, 3.8076484048007524, 4.887004983935137, 30.166543790700512, 2.260334835729751, 1.2678571829903929, 2.3459549026678648, 11.829251721344676, 31.38739879307517, 7.953862544074432, 8.460055733983332, 4.975989099769015, 6.564246815541509, 34.3168848413797, 0.10219860734971184, 8.975658884715328, 10.031012005552746, 22.937060409600235, 5.087684894028177, 6.904276376415548, 4.607723791104996, 4.4001873508849245, 0.7675000971958688, 15.093824692672637, 1.8114911780682363, 4.623471572377087, 5.300753130699916, 0.3366842375953001, 7.626997051424695, 3.2186891631995085, 11.169267569727774, 8.016089799305913, 20.7295086656364, 24.27323033091935, 3.047424621725851, 9.996906493891577, 3.5750816407370025, 6.290142237273252, 8.79920828785353, 6.158576040765423, 4.075358477667823, 11.418736778087144, 5.848371200832296, 23.679845720971702, 2.917975864937614, 17.34568962093711, 9.681366531886994, 4.947424249765515, 6.384807712848643, 4.202109528934563, 6.177252059076972, 9.593233150074193, 15.31785001314027, 31.745498936561027, 3.1698092776428934, 9.865358650363046, 9.440496521468008, 1.6596816282938052, 12.159948422621149, 9.412418287090215, 15.956904639930613, 4.335018945364682, 22.410626388342124, 3.2130112615649495, 6.4332321650215425, 2.790112602258342, 11.478237749090185, 0.5338582304350039, 35.32969303815393, 8.711429672865197, 6.5768439424696, 4.597442500591636, 11.998639256592304, 2.2474396062211546, 7.263397747089955, 4.784431782506028, 6.079765103369258, 6.541035638510073, 0.9761639994193738, 2.8111829546840137, 11.56238709253821, 3.226681496403712, 0.9414814326367488, 9.812494717697076, 6.293353008326094, 5.559345728145288, 7.416348461367568, 15.285138000575959, 3.3644944986552963, 1.5281136990512596, 11.453125680052754, 1.5160031225680326, 15.570006848432682, 23.56905653711919, 7.631849669792082, 0.7832047550463181, 9.770523095066372, 9.534279271130007, 6.017588498620064, 8.489861795904845, 14.78113548032165, 0.23744793845639114, 22.741725711077564, 7.6669715092920825, 3.7282418746396404, 8.745009268546937, 4.66487554069954, 22.00244751746416, 32.551302145944774, 3.8563447272379494, 2.3019218464137317, 0.7849854333657225, 23.237268298669182, 30.33680488035725, 5.253507430781302, 10.347984649862388, 4.331378105017301, 11.590886805001347, 26.594943506140066, 2.6659873981611004, 15.14918639615137, 4.940562283172954, 18.288396496598846, 29.869167903457356, 4.318085711059327, 3.833758286367265, 3.7826851497064924, 14.015714049466814, 9.386219043659738, 6.803203149549623, 1.8521934719511925, 10.034789935291688, 10.752727865595409, 12.550547459908556, 7.098324954954689, 3.772697133421572, 3.44937488542647, 9.531105861862995, 10.444867486217143, 4.613984299028565, 8.366896942617855, 10.695025156081623, 5.659626048806524, 28.74033683034223, 9.074768318341931, 11.597840412400235, 2.469829265077402, 20.64862869853646, 13.01535818790061, 6.159526762516687, 6.08615069664439, 0.013883481256019995, 0.5276975608138817, 6.673756836874132, 1.279850490004689, 15.68067116210464, 8.019843631442908, 5.130118328783216, 32.30531398016883, 1.7798232784210672, 14.603390472354574, 0.9600168290513172, 13.048232400537676, 22.859885907038606, 6.6307689399708405, 7.736905587251877, 11.461745826585028, 10.444406625511892, 11.122737664708644, 4.643673674286746, 12.127605299072625, 11.662507681638726, 16.60357051008114, 34.50999492954416, 6.354283361689484, 15.42764106650252, 11.74397442835466, 13.341352423377895, 35.7929669494945, 8.885925165017996, 5.803740843465033, 8.85529954919136, 13.863254719536997, 3.5014620915850454, 3.655102884567038, 7.898065066914404, 4.857368356846667, 21.770194120511587, 28.200849734570387, 9.508346044768686, 2.301965544742382, 8.862197103439971, 20.19103832901016, 17.211404549906273, 0.8607755928603447, 11.72484201493982, 3.2581809787107696, 19.66872405109457, 19.217602631317686, 6.545926199784282, 5.887273839847362, 5.922826844817012, 12.144579765092525, 2.649687040860335, 0.7057684487361022, 6.604041418376225, 0.7695319071806237, 18.792265042936453, 31.165333416857237, 5.7223653675303625, 8.056156778950324, 3.129330455548207, 23.408235877842422, 20.6000033003997, 0.35414882399263725, 2.0700849456769994, 3.3825633428680626, 7.949768960167907, 11.44092303216635, 8.042750077319843, 3.8022109030354145, 2.1011731211254254, 20.592953318914613, 22.18373937533342, 3.183888323008569, 16.731270159979474, 0.4609026298582452, 13.601639855407516, 12.774691179560001, 2.6922687768535156, 1.1701699718620402, 8.339658988073278, 6.559583001932176, 26.535322197075587, 3.9741646633929677, 1.3340563356270603, 8.748553224249116, 4.202517908950523, 33.0422435682488, 4.827897039554616, 10.900776462827816, 6.352037197177576, 10.182991134215802, 17.214830693515, 8.455016504610922, 3.5022612943491387, 2.1775724374471754, 3.175125002542079, 1.2802909381552832, 0.35766268225156744, 1.9570159170533052, 0.3807080467568975, 19.457756855065014, 27.283463391168986, 6.933995048245778, 18.013606833568083, 5.195903250396692, 10.970733246555552, 4.052740498609068, 9.469847390934415, 16.47067393209248, 10.093705531630878, 4.127825063261187, 1.9253765229006068, 9.72907136673459, 8.49640598167565, 0.8256919465564767, 4.466150492859731, 29.235882394471965, 7.887051432674783, 14.500915281026728, 11.650532916531352, 7.3043170784570215, 5.3563732427727695, 7.471574265530306, 18.070350842567997, 1.1080947092695512, 8.448409779755627, 29.75920909522646, 6.280299961807268, 17.07306498157347, 11.35795389326038, 3.0123438691575917, 2.9472094898788663, 4.394928796916934, 2.0370187006664797, 2.3072212125078893, 17.503376664835756, 1.0097992649837773, 8.04327657532932, 14.94893494158802, 4.584064028354727, 13.489490906903802, 3.8836589383299454, 1.1552327509327223, 12.182830126649897, 2.3075875547603673, 17.986273149879022, 25.96708268066691, 9.468962020308275, 2.6276180409864613, 3.9481346765859113, 0.06960083603001611, 2.5372262184823944, 4.302551565864778, 3.2036805806186823, 3.7815706689214976, 2.6707315302799017, 9.392632023393979, 3.878416949979391, 0.7400428135312234, 7.948288752379697, 2.8942722363583884, 7.66109639473527, 3.2196363982472906, 12.75595786008953, 10.833689570293137, 2.4060231327643233, 10.383787634194437, 2.6131856801170867, 0.40003434811537425, 6.252689556866049, 14.517178859298175, 30.793914049776838, 7.228699143930455, 10.48327339901536, 3.739486559646508, 20.323796787972032, 4.55755813229368, 6.988118997367369, 13.954370082284592, 10.516404652996892, 11.377933751605417, 21.9562091355047, 4.65670088552407, 4.869242680179255, 6.260848063053655, 20.703861531703698, 7.509480795326248, 3.9081131677377425, 5.410417691824762, 1.9382990271309926, 11.43968318571011, 3.7107131682721857, 2.4492183401306913, 2.5174797849268047, 10.264933919005717, 16.79521085385613, 32.35471842290446, 7.778057428455893, 9.280835323994193, 7.334288658992095, 18.5592993044081, 4.898085738185536, 0.0004452457521591791, 6.702929755759962, 7.048831373995521, 14.295726398496397, 35.27376082732004, 4.627909927567204, 13.535842710073876, 10.059179037841828, 17.13412733181491, 4.600112990871634, 6.443674459689567, 7.075083042003251, 8.758216107021822, 15.691757512830858, 29.111961986996743, 4.231565510774149, 16.067143779968095, 2.9036113679442805, 18.75944845946213, 21.987867610657357, 5.224283486939386, 9.870008600474181, 2.3020964483206243, 3.4645368535343684, 25.29152976199069, 6.942109657161873, 11.571736200943228, 7.826546505102299, 5.528318997073706, 31.436278480542963, 9.486395710646736, 5.640088279046052, 4.01369260111733, 18.43444393366092, 20.408553782688323, 7.61333062124052, 4.823945264846516, 11.860399075226441, 6.502838134082415, 14.102822800369987, 5.483774647169993, 9.783952386060943, 1.113238810882855, 9.225907831731476, 15.468919648541226, 7.5249449075987735, 6.954088407951882, 6.405295624272503, 12.036305485872559, 7.809461067884202, 4.603835039547251, 0.5653871942814619, 11.347045323745904, 22.35103822453003, 24.510917077827184, 9.740008922800156, 11.28344375367368, 0.8919919623692801, 1.3429147859354804, 5.934319766108563, 7.577839104693377, 5.638163258775154, 0.35661034389963137, 12.097437903215274, 12.289486930733855, 2.9923777655206107, 10.787918139189717, 2.087052068954404, 19.479583637996946, 22.113123774665603};
};

/**
 * @brief               Empty constructor for Detectors class.
*/
Detectors::Detectors() {
}

/**
 * @brief               Destructor for Detectors class. Sets num_detectors = num_features = 0.
*/
Detectors::~Detectors() {
    num_detectors = 0;
    num_features = 0;
}

/**
 * @brief               Read one feature value from one detector.
 * @param detector      Index of detector. Range: 0 to num_detectors - 1.
 * @param feature       Index of feature. Range: 0 to num_features - 1.
 * @returns             Float of feature
*/
float Detectors::get(short detector, short feature) {
    return detectorsArray_[detector*num_features + feature];
}

/**
 * @brief               Scales all features of incoming network request. Modelled after sklearn StandardScaler().
 * @param request       Array of features of incoming network request.
 * @param cap           Capacity of network request feature array.
 * @returns             Scaled features array
*/
float* scaler(float request[], short cap) {

    // Hardcoded Mean and Standard Deviation
    // Get from StandardScaler() in Kaggle notebook
    double mean[5]{8.3157144e+07, 7.6943680e+04, 1.3118273e+01, 3.8499920e+01, 1.8166219e+02};
    double std_dev[5]{2.9066282e+14, 2.1407808e+11, 7.4370697e+01, 1.0545658e+05, 2.7581962e+05};  

    for (short i{0}; i < cap; i++) {
        request[i] = (request[i] - ((float) mean[i]))/ ((float) std_dev[i]);
    }

    return request;
}


/**
 * @brief              Absolute value function
*/
float abs(float x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

/**
 * @brief               Predicts if cyberattack or benign
 * @param attack        Feature array from incoming network request
 * @param D             Class holding detectors
 * @returns             True if Attack
*/
bool psa(float attack[], Detectors D) {
    float r{3.5}; //Hardcoded radius value
    float dist{0.0};
    
    float* scaled_attack = scaler(attack, D.get_num_feats());
    for (unsigned int d{0}; d < D.get_num_dtrs(); d++) {
        dist = 0.0;
        for (short f{0}; f < D.get_num_feats(); f++) {
            dist += abs(scaled_attack[f] - D.get(d, f));
        }
        if (dist < r) {
            return false;
        }
    }

    return true;
}

/**
 * @brief               Tests PSA on dummy attack vector
*/
int main() {

    while (true) {
        Detectors D;    
    
        float dummy_attack_vector[5];
        for (short i{0}; i < D.get_num_feats(); i++) {
            dummy_attack_vector[i] = (float) i;
        }

        bool is_attack = psa(dummy_attack_vector, D);

    }

    return 0;
}