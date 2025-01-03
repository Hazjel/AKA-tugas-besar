#include <iostream>

using namespace std;

struct Patient {
    char name[50];
    bool isEmergency;
};

void sortQueue(Patient queue[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (!queue[j].isEmergency && queue[j + 1].isEmergency) {
                Patient temp = queue[j];
                queue[j] = queue[j + 1];
                queue[j + 1] = temp;
            }
        }
    }
}
void processQueue(Patient queue[], int count) {
    for (int i = 0; i < count; i++) {
        cout << queue[i].name << endl;
    }
}

int main() {
    Patient queue[] = {
        {"Patient1", false}, {"Patient2", true}, {"Patient3", false},
        {"Patient4", true}, {"Patient5", false},
        {"Patient6", true}, {"Patient7", false}, {"Patient8", true},
        {"Patient9", false}, {"Patient10", true},
        {"Patient11", false}, {"Patient12", true}, {"Patient13", false},
        {"Patient14", true}, {"Patient15", false},
        {"Patient16", true}, {"Patient17", false}, {"Patient18", true},
        {"Patient19", false}, {"Patient20", true},
        {"Patient21", false}, {"Patient22", true}, {"Patient23", false},
        {"Patient24", true}, {"Patient25", false},
        {"Patient26", true}, {"Patient27", false}, {"Patient28", true},
        {"Patient29", false}, {"Patient30", true},
        {"Patient31", false}, {"Patient32", true}, {"Patient33", false},
        {"Patient34", true}, {"Patient35", false},
        {"Patient36", true}, {"Patient37", false}, {"Patient38", true},
        {"Patient39", false}, {"Patient40", true},
        {"Patient41", false}, {"Patient42", true}, {"Patient43", false},
        {"Patient44", true}, {"Patient45", false},
        {"Patient46", true}, {"Patient47", false}, {"Patient48", true},
        {"Patient49", false}, {"Patient50", true},
        {"Patient51", false}, {"Patient52", true}, {"Patient53", false},
        {"Patient54", true}, {"Patient55", false},
        {"Patient56", true}, {"Patient57", false}, {"Patient58", true},
        {"Patient59", false}, {"Patient60", true},
        {"Patient61", false}, {"Patient62", true}, {"Patient63", false},
        {"Patient64", true}, {"Patient65", false},
        {"Patient66", true}, {"Patient67", false}, {"Patient68", true},
        {"Patient69", false}, {"Patient70", true},
        {"Patient71", false}, {"Patient72", true}, {"Patient73", false},
        {"Patient74", true}, {"Patient75", false},
        {"Patient76", true}, {"Patient77", false}, {"Patient78", true},
        {"Patient79", false}, {"Patient80", true},
        {"Patient81", false}, {"Patient82", true}, {"Patient83", false},
        {"Patient84", true}, {"Patient85", false},
        {"Patient86", true}, {"Patient87", false}, {"Patient88", true},
        {"Patient89", false}, {"Patient90", true},
        {"Patient91", false}, {"Patient92", true}, {"Patient93", false},
        {"Patient94", true}, {"Patient95", false},
        {"Patient96", true}, {"Patient97", false}, {"Patient98", true},
        {"Patient99", false}, {"Patient100", true},
        {"Patient101", false}, {"Patient102", true}, {"Patient103", false},
        {"Patient104", true}, {"Patient105", false},
        {"Patient106", true}, {"Patient107", false}, {"Patient108", true},
        {"Patient109", false}, {"Patient110", true},
        {"Patient111", false}, {"Patient112", true}, {"Patient113", false},
        {"Patient114", true}, {"Patient115", false},
        {"Patient116", true}, {"Patient117", false}, {"Patient118", true},
        {"Patient119", false}, {"Patient120", true},
        {"Patient121", false}, {"Patient122", true}, {"Patient123", false},
        {"Patient124", true}, {"Patient125", false},
        {"Patient126", true}, {"Patient127", false}, {"Patient128", true},
        {"Patient129", false}, {"Patient130", true},
        {"Patient131", false}, {"Patient132", true}, {"Patient133", false},
        {"Patient134", true}, {"Patient135", false},
        {"Patient136", true}, {"Patient137", false}, {"Patient138", true},
        {"Patient139", false}, {"Patient140", true},
        {"Patient141", false}, {"Patient142", true}, {"Patient143", false},
        {"Patient144", true}, {"Patient145", false},
        {"Patient146", true}, {"Patient147", false}, {"Patient148", true},
        {"Patient149", false}, {"Patient150", true},
        {"Patient151", false}, {"Patient152", true}, {"Patient153", false},
        {"Patient154", true}, {"Patient155", false},
        {"Patient156", true}, {"Patient157", false}, {"Patient158", true},
        {"Patient159", false}, {"Patient160", true},
        {"Patient161", false}, {"Patient162", true}, {"Patient163", false},
        {"Patient164", true}, {"Patient165", false},
        {"Patient166", true}, {"Patient167", false}, {"Patient168", true},
        {"Patient169", false}, {"Patient170", true},
        {"Patient171", false}, {"Patient172", true}, {"Patient173", false},
        {"Patient174", true}, {"Patient175", false},
        {"Patient176", true}, {"Patient177", false}, {"Patient178", true},
        {"Patient179", false}, {"Patient180", true},
        {"Patient181", false}, {"Patient182", true}, {"Patient183", false},
        {"Patient184", true}, {"Patient185", false},
        {"Patient186", true}, {"Patient187", false}, {"Patient188", true},
        {"Patient189", false}, {"Patient190", true},
        {"Patient191", false}, {"Patient192", true}, {"Patient193", false},
        {"Patient194", true}, {"Patient195", false},
        {"Patient196", true}, {"Patient197", false}, {"Patient198", true},
        {"Patient199", false}, {"Patient200", true},
        {"Patient201", false}, {"Patient202", true}, {"Patient203", false},
        {"Patient204", true}, {"Patient205", false},
        {"Patient206", true}, {"Patient207", false}, {"Patient208", true},
        {"Patient209", false}, {"Patient210", true},
        {"Patient211", false}, {"Patient212", true}, {"Patient213", false},
        {"Patient214", true}, {"Patient215", false},
        {"Patient216", true}, {"Patient217", false}, {"Patient218", true},
        {"Patient219", false}, {"Patient220", true},
        {"Patient221", false}, {"Patient222", true}, {"Patient223", false},
        {"Patient224", true}, {"Patient225", false},
        {"Patient226", true}, {"Patient227", false}, {"Patient228", true},
        {"Patient229", false}, {"Patient230", true},
        {"Patient231", false}, {"Patient232", true}, {"Patient233", false},
        {"Patient234", true}, {"Patient235", false},
        {"Patient236", true}, {"Patient237", false}, {"Patient238", true},
        {"Patient239", false}, {"Patient240", true},
        {"Patient241", false}, {"Patient242", true}, {"Patient243", false},
        {"Patient244", true}, {"Patient245", false},
        {"Patient246", true}, {"Patient247", false}, {"Patient248", true},
        {"Patient249", false}, {"Patient250", true},
        {"Patient251", false}, {"Patient252", true}, {"Patient253", false},
        {"Patient254", true}, {"Patient255", false},
        {"Patient256", true}, {"Patient257", false}, {"Patient258", true},
        {"Patient259", false}, {"Patient260", true},
        {"Patient261", false}, {"Patient262", true}, {"Patient263", false},
        {"Patient264", true}, {"Patient265", false},
        {"Patient266", true}, {"Patient267", false}, {"Patient268", true},
        {"Patient269", false}, {"Patient270", true},
        {"Patient271", false}, {"Patient272", true}, {"Patient273", false},
        {"Patient274", true}, {"Patient275", false},
        {"Patient276", true}, {"Patient277", false}, {"Patient278", true},
        {"Patient279", false}, {"Patient280", true},
        {"Patient281", false}, {"Patient282", true}, {"Patient283", false},
        {"Patient284", true}, {"Patient285", false},
        {"Patient286", true}, {"Patient287", false}, {"Patient288", true},
        {"Patient289", false}, {"Patient290", true},
        {"Patient291", false}, {"Patient292", true}, {"Patient293", false},
        {"Patient294", true}, {"Patient295", false},
        {"Patient296", true}, {"Patient297", false}, {"Patient298", true},
        {"Patient299", false}, {"Patient300", true},
        {"Patient301", false}, {"Patient302", true}, {"Patient303", false},
        {"Patient304", true}, {"Patient305", false},
        {"Patient306", true}, {"Patient307", false}, {"Patient308", true},
        {"Patient309", false}, {"Patient310", true},
        {"Patient311", false}, {"Patient312", true}, {"Patient313", false},
        {"Patient314", true}, {"Patient315", false},
        {"Patient316", true}, {"Patient317", false}, {"Patient318", true},
        {"Patient319", false}, {"Patient320", true},
        {"Patient321", false}, {"Patient322", true}, {"Patient323", false},
        {"Patient324", true}, {"Patient325", false},
        {"Patient326", true}, {"Patient327", false}, {"Patient328", true},
        {"Patient329", false}, {"Patient330", true},
        {"Patient331", false}, {"Patient332", true}, {"Patient333", false},
        {"Patient334", true}, {"Patient335", false},
        {"Patient336", true}, {"Patient337", false}, {"Patient338", true},
        {"Patient339", false}, {"Patient340", true},
        {"Patient341", false}, {"Patient342", true}, {"Patient343", false},
        {"Patient344", true}, {"Patient345", false},
        {"Patient346", true}, {"Patient347", false}, {"Patient348", true},
        {"Patient349", false}, {"Patient350", true},
        {"Patient351", false}, {"Patient352", true}, {"Patient353", false},
        {"Patient354", true}, {"Patient355", false},
        {"Patient356", true}, {"Patient357", false}, {"Patient358", true},
        {"Patient359", false}, {"Patient360", true},
        {"Patient361", false}, {"Patient362", true}, {"Patient363", false},
        {"Patient364", true}, {"Patient365", false},
        {"Patient366", true}, {"Patient367", false}, {"Patient368", true},
        {"Patient369", false}, {"Patient370", true},
        {"Patient371", false}, {"Patient372", true}, {"Patient373", false},
        {"Patient374", true}, {"Patient375", false},
        {"Patient376", true}, {"Patient377", false}, {"Patient378", true},
        {"Patient379", false}, {"Patient380", true},
        {"Patient381", false}, {"Patient382", true}, {"Patient383", false},
        {"Patient384", true}, {"Patient385", false},
        {"Patient386", true}, {"Patient387", false}, {"Patient388", true},
        {"Patient389", false}, {"Patient390", true},
        {"Patient391", false}, {"Patient392", true}, {"Patient393", false},
        {"Patient394", true}, {"Patient395", false},
        {"Patient396", true}, {"Patient397", false}, {"Patient398", true},
        {"Patient399", false}, {"Patient400", true},
        {"Patient401", false}, {"Patient402", true}, {"Patient403", false},
        {"Patient404", true}, {"Patient405", false},
        {"Patient406", true}, {"Patient407", false}, {"Patient408", true},
        {"Patient409", false}, {"Patient410", true},
        {"Patient411", false}, {"Patient412", true}, {"Patient413", false},
        {"Patient414", true}, {"Patient415", false},
        {"Patient416", true}, {"Patient417", false}, {"Patient418", true},
        {"Patient419", false}, {"Patient420", true},
        {"Patient421", false}, {"Patient422", true}, {"Patient423", false},
        {"Patient424", true}, {"Patient425", false},
        {"Patient426", true}, {"Patient427", false}, {"Patient428", true},
        {"Patient429", false}, {"Patient430", true},
        {"Patient431", false}, {"Patient432", true}, {"Patient433", false},
        {"Patient434", true}, {"Patient435", false},
        {"Patient436", true}, {"Patient437", false}, {"Patient438", true},
        {"Patient439", false}, {"Patient440", true},
        {"Patient441", false}, {"Patient442", true}, {"Patient443", false},
        {"Patient444", true}, {"Patient445", false},
        {"Patient446", true}, {"Patient447", false}, {"Patient448", true},
        {"Patient449", false}, {"Patient450", true},
        {"Patient451", false}, {"Patient452", true}, {"Patient453", false},
        {"Patient454", true}, {"Patient455", false},
        {"Patient456", true}, {"Patient457", false}, {"Patient458", true},
        {"Patient459", false}, {"Patient460", true},
        {"Patient461", false}, {"Patient462", true}, {"Patient463", false},
        {"Patient464", true}, {"Patient465", false},
        {"Patient466", true}, {"Patient467", false}, {"Patient468", true},
        {"Patient469", false}, {"Patient470", true},
        {"Patient471", false}, {"Patient472", true}, {"Patient473", false},
        {"Patient474", true}, {"Patient475", false},
        {"Patient476", true}, {"Patient477", false}, {"Patient478", true},
        {"Patient479", false}, {"Patient480", true},
        {"Patient481", false}, {"Patient482", true}, {"Patient483", false},
        {"Patient484", true}, {"Patient485", false},
        {"Patient486", true}, {"Patient487", false}, {"Patient488", true},
        {"Patient489", false}, {"Patient490", true},
        {"Patient491", false}, {"Patient492", true}, {"Patient493", false},
        {"Patient494", true}, {"Patient495", false},
        {"Patient496", true}, {"Patient497", false}, {"Patient498", true},
        {"Patient499", false}, {"Patient500", true},
        {"Patient501", false}, {"Patient502", true}, {"Patient503", false},
        {"Patient504", true}, {"Patient505", false},
        {"Patient506", true}, {"Patient507", false}, {"Patient508", true},
        {"Patient509", false}, {"Patient510", true},
        {"Patient511", false}, {"Patient512", true}, {"Patient513", false},
        {"Patient514", true}, {"Patient515", false},
        {"Patient516", true}, {"Patient517", false}, {"Patient518", true},
        {"Patient519", false}, {"Patient520", true},
        {"Patient521", false}, {"Patient522", true}, {"Patient523", false},
        {"Patient524", true}, {"Patient525", false},
        {"Patient526", true}, {"Patient527", false}, {"Patient528", true},
        {"Patient529", false}, {"Patient530", true},
        {"Patient531", false}, {"Patient532", true}, {"Patient533", false},
        {"Patient534", true}, {"Patient535", false},
        {"Patient536", true}, {"Patient537", false}, {"Patient538", true},
        {"Patient539", false}, {"Patient540", true},
        {"Patient541", false}, {"Patient542", true}, {"Patient543", false},
        {"Patient544", true}, {"Patient545", false},
        {"Patient546", true}, {"Patient547", false}, {"Patient548", true},
        {"Patient549", false}, {"Patient550", true},
        {"Patient551", false}, {"Patient552", true}, {"Patient553", false},
        {"Patient554", true}, {"Patient555", false},
        {"Patient556", true}, {"Patient557", false}, {"Patient558", true},
        {"Patient559", false}, {"Patient560", true},
        {"Patient561", false}, {"Patient562", true}, {"Patient563", false},
        {"Patient564", true}, {"Patient565", false},
        {"Patient566", true}, {"Patient567", false}, {"Patient568", true},
        {"Patient569", false}, {"Patient570", true},
        {"Patient571", false}, {"Patient572", true}, {"Patient573", false},
        {"Patient574", true}, {"Patient575", false},
        {"Patient576", true}, {"Patient577", false}, {"Patient578", true},
        {"Patient579", false}, {"Patient580", true},
        {"Patient581", false}, {"Patient582", true}, {"Patient583", false},
        {"Patient584", true}, {"Patient585", false},
        {"Patient586", true}, {"Patient587", false}, {"Patient588", true},
        {"Patient589", false}, {"Patient590", true},
        {"Patient591", false}, {"Patient592", true}, {"Patient593", false},
        {"Patient594", true}, {"Patient595", false},
        {"Patient596", true}, {"Patient597", false}, {"Patient598", true},
        {"Patient599", false}, {"Patient600", true},
        {"Patient601", false}, {"Patient602", true}, {"Patient603", false},
        {"Patient604", true}, {"Patient605", false},
        {"Patient606", true}, {"Patient607", false}, {"Patient608", true},
        {"Patient609", false}, {"Patient610", true},
        {"Patient611", false}, {"Patient612", true}, {"Patient613", false},
        {"Patient614", true}, {"Patient615", false},
        {"Patient616", true}, {"Patient617", false}, {"Patient618", true},
        {"Patient619", false}, {"Patient620", true},
        {"Patient621", false}, {"Patient622", true}, {"Patient623", false},
        {"Patient624", true}, {"Patient625", false},
        {"Patient626", true}, {"Patient627", false}, {"Patient628", true},
        {"Patient629", false}, {"Patient630", true},
        {"Patient631", false}, {"Patient632", true}, {"Patient633", false},
        {"Patient634", true}, {"Patient635", false},
        {"Patient636", true}, {"Patient637", false}, {"Patient638", true},
        {"Patient639", false}, {"Patient640", true},
        {"Patient641", false}, {"Patient642", true}, {"Patient643", false},
        {"Patient644", true}, {"Patient645", false},
        {"Patient646", true}, {"Patient647", false}, {"Patient648", true},
        {"Patient649", false}, {"Patient650", true},
        {"Patient651", false}, {"Patient652", true}, {"Patient653", false},
        {"Patient654", true}, {"Patient655", false},
        {"Patient656", true}, {"Patient657", false}, {"Patient658", true},
        {"Patient659", false}, {"Patient660", true},
        {"Patient661", false}, {"Patient662", true}, {"Patient663", false},
        {"Patient664", true}, {"Patient665", false},
        {"Patient666", true}, {"Patient667", false}, {"Patient668", true},
        {"Patient669", false}, {"Patient670", true},
        {"Patient671", false}, {"Patient672", true}, {"Patient673", false},
        {"Patient674", true}, {"Patient675", false},
        {"Patient676", true}, {"Patient677", false}, {"Patient678", true},
        {"Patient679", false}, {"Patient680", true},
        {"Patient681", false}, {"Patient682", true}, {"Patient683", false},
        {"Patient684", true}, {"Patient685", false},
        {"Patient686", true}, {"Patient687", false}, {"Patient688", true},
        {"Patient689", false}, {"Patient690", true},
        {"Patient691", false}, {"Patient692", true}, {"Patient693", false},
        {"Patient694", true}, {"Patient695", false},
        {"Patient696", true}, {"Patient697", false}, {"Patient698", true},
        {"Patient699", false}, {"Patient700", true},
        {"Patient701", false}, {"Patient702", true}, {"Patient703", false},
        {"Patient704", true}, {"Patient705", false},
        {"Patient706", true}, {"Patient707", false}, {"Patient708", true},
        {"Patient709", false}, {"Patient710", true},
        {"Patient711", false}, {"Patient712", true}, {"Patient713", false},
        {"Patient714", true}, {"Patient715", false},
        {"Patient716", true}, {"Patient717", false}, {"Patient718", true},
        {"Patient719", false}, {"Patient720", true},
        {"Patient721", false}, {"Patient722", true}, {"Patient723", false},
        {"Patient724", true}, {"Patient725", false},
        {"Patient726", true}, {"Patient727", false}, {"Patient728", true},
        {"Patient729", false}, {"Patient730", true},
        {"Patient731", false}, {"Patient732", true}, {"Patient733", false},
        {"Patient734", true}, {"Patient735", false},
        {"Patient736", true}, {"Patient737", false}, {"Patient738", true},
        {"Patient739", false}, {"Patient740", true},
        {"Patient741", false}, {"Patient742", true}, {"Patient743", false},
        {"Patient744", true}, {"Patient745", false},
        {"Patient746", true}, {"Patient747", false}, {"Patient748", true},
        {"Patient749", false}, {"Patient750", true},
        {"Patient751", false}, {"Patient752", true}, {"Patient753", false},
        {"Patient754", true}, {"Patient755", false},
        {"Patient756", true}, {"Patient757", false}, {"Patient758", true},
        {"Patient759", false}, {"Patient760", true},
        {"Patient761", false}, {"Patient762", true}, {"Patient763", false},
        {"Patient764", true}, {"Patient765", false},
        {"Patient766", true}, {"Patient767", false}, {"Patient768", true},
        {"Patient769", false}, {"Patient770", true},
        {"Patient771", false}, {"Patient772", true}, {"Patient773", false},
        {"Patient774", true}, {"Patient775", false},
        {"Patient776", true}, {"Patient777", false}, {"Patient778", true},
        {"Patient779", false}, {"Patient780", true},
        {"Patient781", false}, {"Patient782", true}, {"Patient783", false},
        {"Patient784", true}, {"Patient785", false},
        {"Patient786", true}, {"Patient787", false}, {"Patient788", true},
        {"Patient789", false}, {"Patient790", true},
        {"Patient791", false}, {"Patient792", true}, {"Patient793", false},
        {"Patient794", true}, {"Patient795", false},
        {"Patient796", true}, {"Patient797", false}, {"Patient798", true},
        {"Patient799", false}, {"Patient800", true},
        {"Patient801", false}, {"Patient802", true}, {"Patient803", false},
        {"Patient804", true}, {"Patient805", false},
        {"Patient806", true}, {"Patient807", false}, {"Patient808", true},
        {"Patient809", false}, {"Patient810", true},
        {"Patient811", false}, {"Patient812", true}, {"Patient813", false},
        {"Patient814", true}, {"Patient815", false},
        {"Patient816", true}, {"Patient817", false}, {"Patient818", true},
        {"Patient819", false}, {"Patient820", true},
        {"Patient821", false}, {"Patient822", true}, {"Patient823", false},
        {"Patient824", true}, {"Patient825", false},
        {"Patient826", true}, {"Patient827", false}, {"Patient828", true},
        {"Patient829", false}, {"Patient830", true},
        {"Patient831", false}, {"Patient832", true}, {"Patient833", false},
        {"Patient834", true}, {"Patient835", false},
        {"Patient836", true}, {"Patient837", false}, {"Patient838", true},
        {"Patient839", false}, {"Patient840", true},
        {"Patient841", false}, {"Patient842", true}, {"Patient843", false},
        {"Patient844", true}, {"Patient845", false},
        {"Patient846", true}, {"Patient847", false}, {"Patient848", true},
        {"Patient849", false}, {"Patient850", true},
        {"Patient851", false}, {"Patient852", true}, {"Patient853", false},
        {"Patient854", true}, {"Patient855", false},
        {"Patient856", true}, {"Patient857", false}, {"Patient858", true},
        {"Patient859", false}, {"Patient860", true},
        {"Patient861", false}, {"Patient862", true}, {"Patient863", false},
        {"Patient864", true}, {"Patient865", false},
        {"Patient866", true}, {"Patient867", false}, {"Patient868", true},
        {"Patient869", false}, {"Patient870", true},
        {"Patient871", false}, {"Patient872", true}, {"Patient873", false},
        {"Patient874", true}, {"Patient875", false},
        {"Patient876", true}, {"Patient877", false}, {"Patient878", true},
        {"Patient879", false}, {"Patient880", true},
        {"Patient881", false}, {"Patient882", true}, {"Patient883", false},
        {"Patient884", true}, {"Patient885", false},
        {"Patient886", true}, {"Patient887", false}, {"Patient888", true},
        {"Patient889", false}, {"Patient890", true},
        {"Patient891", false}, {"Patient892", true}, {"Patient893", false},
        {"Patient894", true}, {"Patient895", false},
        {"Patient896", true}, {"Patient897", false}, {"Patient898", true},
        {"Patient899", false}, {"Patient900", true},
        {"Patient901", false}, {"Patient902", true}, {"Patient903", false},
        {"Patient904", true}, {"Patient905", false},
        {"Patient906", true}, {"Patient907", false}, {"Patient908", true},
        {"Patient909", false}, {"Patient910", true},
        {"Patient911", false}, {"Patient912", true}, {"Patient913", false},
        {"Patient914", true}, {"Patient915", false},
        {"Patient916", true}, {"Patient917", false}, {"Patient918", true},
        {"Patient919", false}, {"Patient920", true},
        {"Patient921", false}, {"Patient922", true}, {"Patient923", false},
        {"Patient924", true}, {"Patient925", false},
        {"Patient926", true}, {"Patient927", false}, {"Patient928", true},
        {"Patient929", false}, {"Patient930", true},
        {"Patient931", false}, {"Patient932", true}, {"Patient933", false},
        {"Patient934", true}, {"Patient935", false},
        {"Patient936", true}, {"Patient937", false}, {"Patient938", true},
        {"Patient939", false}, {"Patient940", true},
        {"Patient941", false}, {"Patient942", true}, {"Patient943", false},
        {"Patient944", true}, {"Patient945", false},
        {"Patient946", true}, {"Patient947", false}, {"Patient948", true},
        {"Patient949", false}, {"Patient950", true},
        {"Patient951", false}, {"Patient952", true}, {"Patient953", false},
        {"Patient954", true}, {"Patient955", false},
        {"Patient956", true}, {"Patient957", false}, {"Patient958", true},
        {"Patient959", false}, {"Patient960", true},
        {"Patient961", false}, {"Patient962", true}, {"Patient963", false},
        {"Patient964", true}, {"Patient965", false},
        {"Patient966", true}, {"Patient967", false}, {"Patient968", true},
        {"Patient969", false}, {"Patient970", true},
        {"Patient971", false}, {"Patient972", true}, {"Patient973", false},
        {"Patient974", true}, {"Patient975", false},
        {"Patient976", true}, {"Patient977", false}, {"Patient978", true},
        {"Patient979", false}, {"Patient980", true},
        {"Patient981", false}, {"Patient982", true}, {"Patient983", false},
        {"Patient984", true}, {"Patient985", false},
        {"Patient986", true}, {"Patient987", false}, {"Patient988", true},
        {"Patient989", false}, {"Patient990", true},
        {"Patient991", false}, {"Patient992", true}, {"Patient993", false},
        {"Patient994", true}, {"Patient995", false},
        {"Patient996", true}, {"Patient997", false}, {"Patient998", true},
        {"Patient999", false}, {"Patient1000", true}
    };
    int count = 1000;

    sortQueue(queue, count);

    processQueue(queue, count);

    return 0;
}
