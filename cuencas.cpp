#include <iostream>
#include <string>
#include <vector>
#include "arista-poste.h"
#include "notacion.h"

using namespace std;

void crearMatriz(vector<vector<string>> &matriz_entrada);
string convertirFecha(string fecha);
void columnas(vector<vector<string>> matriz_entrada); // Solo para ver
void filas(vector<vector<string>> matriz_entrada);
string recorrerLLS(lista L, string abr);

int main() {

    vector<vector<string>> matriz_entrada{};
    vector<vector<string>> matriz_salida {};
    lista L = NULL;
    creacion(L);
    string salida;

    geoloc glacial1(-33.0553309, -70.0974934, 5482.2498764);
    geoloc glacial2(-33.0648283, -70.0801479, 4872.0800966);
    geoloc glacial3(-33.0648283, -70.0801479, 4872.0800966);
    geoloc glacial4(-33.0648283, -70.0801479, 4872.0807003);
    geoloc glacial5(-33.1062033, -70.1099957, 4140.3754039);

    nodo glacial[5];

    glacial[0].defGeo(glacial1);
    glacial[1].defGeo(glacial2);
    glacial[2].defGeo(glacial3);
    glacial[3].defGeo(glacial4);
    glacial[4].defGeo(glacial5); 

    geoloc olivares1(-33.1342342, -70.1173206, 3865.0788179); // OGJS
    geoloc olivares2(-33.1519159, -70.1156773, 3624.2458196);
    geoloc olivares3(-33.1691106, -70.1196407, 2995.8209692);
    geoloc olivares4(-33.1744201, -70.1245323, 2872.1727692); // OGSO
    geoloc olivares5(-33.1787219, -70.1246264, 2820.785347); // OEPC
    geoloc olivares6(-33.2059301, -70.1079302, 2646.4256055);
    geoloc olivares7(-33.2125441, -70.1081171, 2624.9997426); // OECF
    geoloc olivares8(-33.223682, -70.1115996, 2531.1668304); // OETL
    geoloc olivares9(-33.2537932, -70.1237616, 2439.3954124); // OELP
    geoloc olivares10(-33.2657705, -70.1340651, 2419.8888041); // OQMH
    geoloc olivares11(-33.2681972, -70.1392941, 2399.9873003);
    geoloc olivares12(-33.3190523, -70.1403288, 2337.2787479);
    geoloc olivares13(-33.355944, -70.1346517, 2232.3907302); // OEPT
    geoloc olivares14(-33.3653737, -70.1319324, 2217.384257);
    geoloc olivares15(-33.3717985, -70.137324, 2205.1608841);
    geoloc olivares16(-33.3889931, -70.1294007, 2135.9048404);
    geoloc olivares17(-33.4952772, -70.1384679, 1542.7589502); // ORCR

    nodo olivares[17];

    olivares[0].defGeo(olivares1);
    olivares[1].defGeo(olivares2);
    olivares[2].defGeo(olivares3);
    olivares[3].defGeo(olivares4);
    olivares[4].defGeo(olivares5);
    olivares[5].defGeo(olivares6);
    olivares[6].defGeo(olivares7);
    olivares[7].defGeo(olivares8);
    olivares[8].defGeo(olivares9);
    olivares[9].defGeo(olivares10);
    olivares[10].defGeo(olivares11);
    olivares[11].defGeo(olivares12);
    olivares[12].defGeo(olivares13);
    olivares[13].defGeo(olivares14);
    olivares[14].defGeo(olivares15);
    olivares[15].defGeo(olivares16);
    olivares[16].defGeo(olivares17);

    geoloc colorado1(-33.2988383, -69.851112, 3782.4503661);
    geoloc colorado2(-33.3181697, -69.8515594, 3425.1511472);
    geoloc colorado3(-33.325609, -69.8553227, 3393.4648096);
    geoloc colorado4(-33.339763, -69.8714362, 3298.1508146);
    geoloc colorado5(-33.3492648, -69.8860748, 3144.9132491);
    geoloc colorado6(-33.3515485, -69.8894041, 3116.5715558); // CETG
    geoloc colorado7(-33.351237, -69.8996911, 2998.0634925);
    geoloc colorado8(-33.3577246, -69.9048547, 2957.7664107);
    geoloc colorado9(-33.3576432, -69.9063923, 2942.0085095); // CQPD
    geoloc colorado10(-33.358856, -69.9091544, 2933.4343304);
    geoloc colorado11(-33.3672627, -69.9108441, 2875.9506136);
    geoloc colorado12(-33.369232, -69.9131924, 2845.4575157);
    geoloc colorado13(-33.3682529, -69.9152635, 2816.1642544); // CEQB
    geoloc colorado14(-33.3683192, -69.9166788, 2814.1469121);
    geoloc colorado15(-33.3797012, -69.9238454, 2724.0666729); // CEMN
    geoloc colorado16(-33.3872289, -69.9407286, 2637.4643916); // CEBA
    geoloc colorado17(-33.3899174, -69.9553667, 2577.212555);
    geoloc colorado18(-33.3896802, -69.9560343, 2553.6126849);
    geoloc colorado19(-33.3899538, -69.9571175, 2527.2709138);
    geoloc colorado20(-33.3937036, -69.9587083, 2515.8523188);
    geoloc colorado21(-33.3945006, -69.960786, 2491.1393956);
    geoloc colorado22(-33.3962332, -69.9625149, 2465.4939202);
    geoloc colorado23(-33.3971113, -69.965034, 2445.2251599);
    geoloc colorado24(-33.3985312, -69.966495, 2439.714441);
    geoloc colorado25(-33.3989991, -69.9711912, 2395.2196133);
    geoloc colorado26(-33.4006204, -69.972614, 2395.0238927);
    geoloc colorado27(-33.4013253, -69.9746946, 2394.7842507);
    geoloc colorado28(-33.4021105, -69.9744902, 2387.2773904);
    geoloc colorado29(-33.4021081, -69.9756246, 2379.3473743);
    geoloc colorado30(-33.4023889, -69.9759254, 2370.7562417);
    geoloc colorado31(-33.4023317, -69.9763622, 2378.6818318);
    geoloc colorado32(-33.4028172, -69.9769553, 2372.3357162);
    geoloc colorado33(-33.402958, -69.9774329, 2380.0441342);
    geoloc colorado34(-33.4041641, -69.9772329, 2363.3011657);
    geoloc colorado35(-33.4075397, -69.9819485, 2325.1097756); // CRMS
    geoloc colorado36(-33.411371, -69.9933607, 2269.6763448);
    geoloc colorado37(-33.433818, -70.0158051, 2105.8868431);
    geoloc colorado38(-33.440292, -70.0150036, 2082.0191488);
    geoloc colorado39(-33.4494011, -70.0191869, 2018.9857862);
    geoloc colorado40(-33.4502202, -70.0237215, 2004.5689077);
    geoloc colorado41(-33.4784833, -70.0294556, 1920.8326753);
    geoloc colorado42(-33.4871421, -70.0367802, 1880.0843891);
    geoloc colorado43(-33.4843365, -70.0491505, 1848.8239538);
    geoloc colorado44(-33.4852905, -70.0499376, 1836.3980139); // CELV
    geoloc colorado45(-33.4877769, -70.0526371, 1808.7363381);
    geoloc colorado46(-33.4906991, -70.0586068, 1803.6110524);
    geoloc colorado47(-33.4904389, -70.0647822, 1784.9240801);
    geoloc colorado48(-33.5001541, -70.0997479, 1644.7037508);
    geoloc colorado49(-33.4910348, -70.1291316, 1557.6081995);
    geoloc colorado50(-33.49542, -70.1387722, 1545.2991431);
    geoloc colorado51(-33.5023313, -70.1470978, 1621.6020372);
    geoloc colorado52(-33.50317, -70.1548085, 1508.877653);
    geoloc colorado53(-33.4939167, -70.1694857, 1427.1352832);
    geoloc colorado54(-33.4952558, -70.1788556, 1398.2135435);
    geoloc colorado55(-33.5029502, -70.1894472, 1348.6200876);
    geoloc colorado56(-33.5111925, -70.2088092, 1297.6696046);
    geoloc colorado57(-33.527048, -70.2541224, 1164.6716031);
    geoloc colorado58(-33.5291349, -70.2538144, 1158.322989);
    geoloc colorado59(-33.530353, -70.2689792, 1135.980816);
    geoloc colorado60(-33.5622696, -70.3235833, 989.8118938);
    geoloc colorado61(-33.5699581, -70.3478616, 937.0568568);
    geoloc colorado62(-33.5961005, -70.3739337, 876.6319689); // CRMP

    nodo colorado[62];

    colorado[0].defGeo(colorado1);
    colorado[1].defGeo(colorado2);
    colorado[2].defGeo(colorado3);
    colorado[3].defGeo(colorado4);
    colorado[4].defGeo(colorado5);
    colorado[5].defGeo(colorado6);
    colorado[6].defGeo(colorado7);
    colorado[7].defGeo(colorado8);
    colorado[8].defGeo(colorado9);
    colorado[9].defGeo(colorado10);
    colorado[10].defGeo(colorado11);
    colorado[11].defGeo(colorado12);
    colorado[12].defGeo(colorado13);
    colorado[13].defGeo(colorado14);
    colorado[14].defGeo(colorado15);
    colorado[15].defGeo(colorado16);
    colorado[16].defGeo(colorado17);
    colorado[17].defGeo(colorado18);
    colorado[18].defGeo(colorado19);
    colorado[19].defGeo(colorado20);
    colorado[20].defGeo(colorado21);
    colorado[21].defGeo(colorado22);
    colorado[22].defGeo(colorado23);
    colorado[23].defGeo(colorado24);
    colorado[24].defGeo(colorado25);
    colorado[25].defGeo(colorado26);
    colorado[26].defGeo(colorado27);
    colorado[27].defGeo(colorado28);
    colorado[28].defGeo(colorado29);
    colorado[29].defGeo(colorado30);
    colorado[30].defGeo(colorado31);
    colorado[31].defGeo(colorado32);
    colorado[32].defGeo(colorado33);
    colorado[33].defGeo(colorado34);
    colorado[34].defGeo(colorado35);
    colorado[35].defGeo(colorado36);
    colorado[36].defGeo(colorado37);
    colorado[37].defGeo(colorado38);
    colorado[38].defGeo(colorado39);
    colorado[39].defGeo(colorado40);
    colorado[40].defGeo(colorado41);
    colorado[41].defGeo(colorado42);
    colorado[42].defGeo(colorado43);
    colorado[43].defGeo(colorado44);
    colorado[44].defGeo(colorado45);
    colorado[45].defGeo(colorado46);
    colorado[46].defGeo(colorado47);
    colorado[47].defGeo(colorado48);
    colorado[48].defGeo(colorado49);
    colorado[49].defGeo(colorado50);
    colorado[50].defGeo(colorado51);
    colorado[51].defGeo(colorado52);
    colorado[52].defGeo(colorado53);
    colorado[53].defGeo(colorado54);
    colorado[54].defGeo(colorado55);
    colorado[55].defGeo(colorado56);
    colorado[56].defGeo(colorado57);
    colorado[57].defGeo(colorado58);
    colorado[58].defGeo(colorado59);
    colorado[59].defGeo(colorado60);
    colorado[60].defGeo(colorado61);
    colorado[61].defGeo(colorado62);

    geoloc maipo1(-34.16811333123542, -69.97122989469764, 2461.646160354653);
    geoloc maipo2(-34.10294725690946, -70.0280077024385, 2200.725584314629);
    geoloc maipo3(-34.08880323537929, -70.08636790491991, 2039.74465836648);
    geoloc maipo4(-33.96093548721234, -70.15671818440072, 1708.182026099083);
    geoloc maipo5(-33.94094614496521, -70.19130044302143, 1587.883081752135);
    geoloc maipo6(-33.84891873974222, -70.19779948276464, 1446.26612297798);
    geoloc maipo7(-33.81725508536556, -70.22106111435394, 1390.144077248036);
    geoloc maipo8(-33.80976638299407, -70.21742696303497, 1306.339639035248);
    geoloc maipo9(-33.79470321998689, -70.22196396561525, 1274.593661344977);
    geoloc maipo10(-33.7854467, -70.2334603, 1234.7653468); // MRYS
    geoloc maipo11(-33.77697999495577, -70.25309623296485, 1185.120217521159);
    geoloc maipo12(-33.74224788478475, -70.29399979229548, 1090.357829518272); // MEMT
    geoloc maipo13(-33.706385, -70.3357932, 1015.3516362); // MQLC
    geoloc maipo14(-33.68372000000001, -70.33955999999999, 1000.633648); // MECC
    geoloc maipo15(-33.67326, -70.34765, 980.8436792); // MEES
    geoloc maipo16(-33.65102975916639, -70.35609100222963, 959.0620814645642);
    geoloc maipo17(-33.61030926174674, -70.35034920792216, 904.3142384299579);
    geoloc maipo18(-33.59603227724939, -70.37388634576239, 876.732305948335);
    geoloc maipo19(-33.58496, -70.41354, 826.3048464); // MEEM
    geoloc maipo20(-33.5812563261259, -70.45555297608594, 816.2892173828284);
    geoloc maipo21(-33.59058949651366, -70.45990244484977, 776.9890557983896);
    geoloc maipo22(-33.6442, -70.6328, 599.6925255); // MRCR
    geoloc maipo23(-33.66718177946488, -70.705893891861, 526.2662420407735);
    geoloc maipo24(-33.68746059273706, -70.71937880337796, 508.0412824170966);
    geoloc maipo25(-33.79780897105258, -70.86954270540193, 344.639401965468);
    geoloc maipo26(-33.80345620170155, -70.90068683314723, 332.1642809099652);
    geoloc maipo27(-33.7660656526142, -70.91250495384365, 321.2999979525983);
    geoloc maipo28(-33.7501816394541, -70.93157401595066, 308.7326499203805);
    geoloc maipo29(-33.73803729167845, -70.92852474944874, 305.7384946703503);
    geoloc maipo30(-33.72481225567126, -70.91904195939806, 297.312375960284);
    geoloc maipo31(-33.71622025814307, -70.95014960111587, 279.8416249587482);
    geoloc maipo32(-33.71660721368723, -71.08701458277191, 211.3986252090165);
    geoloc maipo33(-33.69876124671041, -71.12559914931656, 191.6556330989679);
    geoloc maipo34(-33.69455027402355, -71.14492410993466, 183.2370027000509);
    geoloc maipo35(-33.69869291439263, -71.17810872849068, 162.2936614193971);
    geoloc maipo36(-33.71149131212308, -71.20778242498135, 150.0343675534476);
    geoloc maipo37(-33.73752761752579, -71.22947837789327, 131.6704353679641);
    geoloc maipo38(-33.74486015433197, -71.24504342225586, 127.5158470612255);
    geoloc maipo39(-33.72678306122678, -71.29567351671932, 107.4238619750011);
    geoloc maipo40(-33.73428957217367, -71.34683135536659, 84.72194612913576);
    geoloc maipo41(-33.76273061498583, -71.36929504837167, 77.14883465388856);
    geoloc maipo42(-33.77744174201984, -71.41038197660228, 59.16112326718427);
    geoloc maipo43(-33.7842810960413, -71.43416011077181, 52.68292851605507);
    geoloc maipo44(-33.78069140285394, -71.46777486087086, 44.95894053526827);
    geoloc maipo45(-33.78521927447585, -71.47128955192345, 44.52710073253753);
    geoloc maipo46(-33.77070536444632, -71.49489780929214, 46.23637950759919);
    geoloc maipo47(-33.77944585319372, -71.52129591028782, 45.95831133645346);
    geoloc maipo48(-33.74490199665725, -71.53819897325761, 57.21079322615299);
    geoloc maipo49(-33.72895690795016, -71.55951465149491, 30.24704397440975);
    geoloc maipo50(-33.67623916721804, -71.57473457547343, 20.3362517065388);
    geoloc maipo51(-33.63125712915149, -71.60018884216969, 7.988764330607498);
    geoloc maipo52(-33.62972420829878, -71.60666756435229, 9.070518444555892);
    geoloc maipo53(-33.62353222726228, -71.61169469546451, 9.479777437158818);
    geoloc maipo54(-33.61930453151292, -71.62821549988892, 1.3891701);
    geoloc maipo55(-33.61426458039482, -71.62695538313575, 6.7947056);
    geoloc maipo56(-33.61368698973122, -71.62690741760269, 4.3172211);

    nodo maipo[56];

    maipo[0].defGeo(maipo1);
    maipo[1].defGeo(maipo2);
    maipo[2].defGeo(maipo3);
    maipo[3].defGeo(maipo4);
    maipo[4].defGeo(maipo5);
    maipo[5].defGeo(maipo6);
    maipo[6].defGeo(maipo7);
    maipo[7].defGeo(maipo8);
    maipo[8].defGeo(maipo9);
    maipo[9].defGeo(maipo10);
    maipo[10].defGeo(maipo11);
    maipo[11].defGeo(maipo12);
    maipo[12].defGeo(maipo13);
    maipo[13].defGeo(maipo14);
    maipo[14].defGeo(maipo15);
    maipo[15].defGeo(maipo16);
    maipo[16].defGeo(maipo17);
    maipo[17].defGeo(maipo18);
    maipo[18].defGeo(maipo19);
    maipo[19].defGeo(maipo20);
    maipo[20].defGeo(maipo21);
    maipo[21].defGeo(maipo22);
    maipo[22].defGeo(maipo23);
    maipo[23].defGeo(maipo24);
    maipo[24].defGeo(maipo25);
    maipo[25].defGeo(maipo26);
    maipo[26].defGeo(maipo27);
    maipo[27].defGeo(maipo28);
    maipo[28].defGeo(maipo29);
    maipo[29].defGeo(maipo30);
    maipo[30].defGeo(maipo31);
    maipo[31].defGeo(maipo32);
    maipo[32].defGeo(maipo33);
    maipo[33].defGeo(maipo34);
    maipo[34].defGeo(maipo35);
    maipo[35].defGeo(maipo36);
    maipo[36].defGeo(maipo37);
    maipo[37].defGeo(maipo38);
    maipo[38].defGeo(maipo39);
    maipo[39].defGeo(maipo40);
    maipo[40].defGeo(maipo41);
    maipo[41].defGeo(maipo42);
    maipo[42].defGeo(maipo43);
    maipo[43].defGeo(maipo44);
    maipo[44].defGeo(maipo45);
    maipo[45].defGeo(maipo46);
    maipo[46].defGeo(maipo47);
    maipo[47].defGeo(maipo48);
    maipo[48].defGeo(maipo49);
    maipo[49].defGeo(maipo50);
    maipo[50].defGeo(maipo51);
    maipo[51].defGeo(maipo52);
    maipo[52].defGeo(maipo53);
    maipo[53].defGeo(maipo54);
    maipo[54].defGeo(maipo55);
    maipo[55].defGeo(maipo56);

    geoloc yeso1(-33.66788656367681, -70.08480991398048, 2519.46552114703); // YEYS
    geoloc yeso2(-33.67475257785719, -70.08514701661102, 2505.651332083379);
    geoloc yeso3(-33.67969607660103, -70.10170089923592, 2419.223623826757);
    geoloc yeso4(-33.69544275541433, -70.11386265569615, 2290.087374743091);
    geoloc yeso5(-33.70581287870269, -70.1268130395637, 2178.173135564348);
    geoloc yeso6(-33.73186793526041, -70.1418428288799, 1917.780782440326);
    geoloc yeso7(-33.73322966997981, -70.14933677147903, 1857.727885619521);
    geoloc yeso8(-33.73516994495526, -70.14849488348311, 1851.729283860756);
    geoloc yeso9(-33.74419977122603, -70.1537273669244, 1741.260537069716);
    geoloc yeso10(-33.74477618774222, -70.15530753645449, 1731.506688036943);
    geoloc yeso11(-33.75193744504289, -70.15777561272445, 1682.173811027569);
    geoloc yeso12(-33.75615072920819, -70.16089598677812, 1644.792962274016);
    geoloc yeso13(-33.76012752064667, -70.16781595504709, 1585.98784648031); // YESN
    geoloc yeso14(-33.77838621614497, -70.17375863914482, 1486.445634540827);
    geoloc yeso15(-33.7832834916841, -70.17795413149217, 1463.348039356534);
    geoloc yeso16(-33.79155729870419, 1353.760393761203, -70.20448646195564);
    geoloc yeso17(-33.79242203960457, -70.20664155721326, 1344.595283203422);
    geoloc yeso18(-33.79210605794567, -70.21513573037258, 1335.900652340044);
    geoloc yeso19(-33.78979988098492, -70.21905376740416, 1300.83397210931);
    geoloc yeso20(-33.79016307447888, -70.22163942929721, 1296.223951894353);
    geoloc yeso21(-33.78643346562345, -70.22886430793895, 1254.491769563727);
    geoloc yeso22(-33.78616199745353, -70.23062768602958, 1247.721591066282);
    geoloc yeso23(-33.78558948378463, -70.23152433114019, 1243.990846549376);

    nodo yeso[23];

    yeso[0].defGeo(yeso1);
    yeso[1].defGeo(yeso2);
    yeso[2].defGeo(yeso3);
    yeso[3].defGeo(yeso4);
    yeso[4].defGeo(yeso5);
    yeso[5].defGeo(yeso6);
    yeso[6].defGeo(yeso7);
    yeso[7].defGeo(yeso8);
    yeso[8].defGeo(yeso9);
    yeso[9].defGeo(yeso10);
    yeso[10].defGeo(yeso11);
    yeso[11].defGeo(yeso12);
    yeso[12].defGeo(yeso13);
    yeso[13].defGeo(yeso14);
    yeso[14].defGeo(yeso15);
    yeso[15].defGeo(yeso16);
    yeso[16].defGeo(yeso17);
    yeso[17].defGeo(yeso18);
    yeso[18].defGeo(yeso19);
    yeso[19].defGeo(yeso20);
    yeso[20].defGeo(yeso21);
    yeso[21].defGeo(yeso22);
    yeso[22].defGeo(yeso23);

    geoloc quebrada1(-33.49501638623575, -70.4698327077802, 1686.013140384966);
    geoloc quebrada2(-33.4949, -70.47306999999999, 1610.5502711); // MEAM
    geoloc quebrada3(-33.49530029877229, -70.47682160115704, 1533.458070066135);
    geoloc quebrada4(-33.50131195382696, -70.48517802705548, 1299.241817201839);
    geoloc quebrada5(-33.4978779668201, -70.49901411512197, 1105.118229803398);
    geoloc quebrada6(-33.50033937266248, -70.50709893026477, 1030.46012256217); // MQDZ
    geoloc quebrada7(-33.50176425721232, -70.5147016902186, 941.9722754108165);
    geoloc quebrada8(-33.50771684736193, -70.52424760725869, 836.5069383185775);
    geoloc quebrada9(-33.51185830029151, -70.54109199398997, 726.7058398088328);

    nodo quebrada[9];

    quebrada[0].defGeo(quebrada1);
    quebrada[1].defGeo(quebrada2);
    quebrada[2].defGeo(quebrada3);
    quebrada[3].defGeo(quebrada4);
    quebrada[4].defGeo(quebrada5);
    quebrada[5].defGeo(quebrada6);
    quebrada[6].defGeo(quebrada7);
    quebrada[7].defGeo(quebrada8);
    quebrada[8].defGeo(quebrada9);

    geoloc zanjon1(-33.51272436796072, -70.54262150714335, 712.4038111745657);
    geoloc zanjon2(-33.51337320910128, -70.54738281121874, 692.0884097048173);
    geoloc zanjon3(-33.51472926726334, -70.55235369990497, 666.8647076341653);
    geoloc zanjon4(-33.51553834073908, -70.55627739604127, 654.7475636473011);
    geoloc zanjon5(-33.51616518609571, -70.55710665786999, 651.4068132260815);
    geoloc zanjon6(-33.51739999999999, -70.55803000000002, 645.8098883); // ACSC
    geoloc zanjon7(-33.51683488467618, -70.56036348208316, 621.7390481991656);
    geoloc zanjon8(-33.51726225219505, -70.56463083048278, 621.5691327669863);
    geoloc zanjon9(-33.51644797157758, -70.57557287448367, 607.5186430346406);
    geoloc zanjon10(-33.51370422740074, -70.57818479189125, 603.7421430945695);
    geoloc zanjon11(-33.51337451514635, -70.58668866498316, 588.1381528324266);
    geoloc zanjon12(-33.48616734852688, -70.61630392857104, 553.9716411598888);
    geoloc zanjon13(-33.48413766567413, -70.62604246260224, 546.7897745685881);
    geoloc zanjon14(-33.47987825570117, -70.63257432971074, 539.0610613848794); // ATIR I
    geoloc zanjon15(-33.47617, -70.66548999999999, 520.7659233); // ATIR F
    geoloc zanjon16(-33.47710858034209, -70.68932999573394, 505.4860922694358);
    geoloc zanjon17(-33.48169875361865, -70.71347753899151, 493.5539889472787);
    geoloc zanjon18(-33.48283326285528, -70.72805717080644, 485.6563114348752);
    geoloc zanjon19(-33.48440886535465, -70.74320928983434, 479.0777017277594);
    geoloc zanjon20(-33.48964234240078, -70.75114331107542, 471.2107817766909);
    geoloc zanjon21(-33.49225273943193, -70.75733093177179, 470.107376781642);
    geoloc zanjon22(-33.49277688480605, -70.76183923016109, 463.8814967185427); // ATAS I
    geoloc zanjon23(-33.49336358941875, -70.76378442382851, 463.7588949758614); // ATAS F
    geoloc zanjon24(-33.49587251906024, -70.77591550897772, 461.8542903646195);
    geoloc zanjon25(-33.4988327001424, -70.78550889073421, 451.5294978294035);
    geoloc zanjon26(-33.49643469012729, -70.79094483444409, 450.5355222142801);
    geoloc zanjon27(-33.49327376528515, -70.79380481359708, 449.0657792715792);
    geoloc zanjon28(-33.49071, -70.80307999999999, 446.256521); // ARMP

    nodo zanjon[28];

    zanjon[0].defGeo(zanjon1);
    zanjon[1].defGeo(zanjon2);
    zanjon[2].defGeo(zanjon3);
    zanjon[3].defGeo(zanjon4);
    zanjon[4].defGeo(zanjon5);
    zanjon[5].defGeo(zanjon6);
    zanjon[6].defGeo(zanjon7);
    zanjon[7].defGeo(zanjon8);
    zanjon[8].defGeo(zanjon9);
    zanjon[9].defGeo(zanjon10);
    zanjon[10].defGeo(zanjon11);
    zanjon[11].defGeo(zanjon12);
    zanjon[12].defGeo(zanjon13);
    zanjon[13].defGeo(zanjon14);
    zanjon[14].defGeo(zanjon15);
    zanjon[15].defGeo(zanjon16);
    zanjon[16].defGeo(zanjon17);
    zanjon[17].defGeo(zanjon18);
    zanjon[18].defGeo(zanjon19);
    zanjon[19].defGeo(zanjon20);
    zanjon[20].defGeo(zanjon21);
    zanjon[21].defGeo(zanjon22);
    zanjon[22].defGeo(zanjon23);
    zanjon[23].defGeo(zanjon24);
    zanjon[24].defGeo(zanjon25);
    zanjon[25].defGeo(zanjon26);
    zanjon[26].defGeo(zanjon27);
    zanjon[27].defGeo(zanjon28);

    geoloc embalse1(-33.6514564, -70.0760077, 2567.574949);

    poste embalse[1];

    embalse[0].defGeo(embalse1); // EEYS

    crearMatriz(matriz_entrada);

    string fecha, nombre;
     
    for(int j = 0; j < matriz_entrada[0].size(); j++){

        vector<string> datos {};
        
        for(int i = 0; i < matriz_entrada.size(); i++){

            if(i == 0 && j == 0){

                datos.push_back("Fecha\tHora");

            }else if(j == 0){ //fechas
                 
                fecha = convertirFecha(matriz_entrada[i][j]);
               // cout << fecha << endl;
                datos.push_back(fecha);
            
            }else if(i == 0){ //nombre
            
                nombre = recorrerLLS(L, matriz_entrada[i][j]);
                //cout << matriz_entrada[i][j] << endl;
                datos.push_back(nombre);

                if(matriz_entrada[i][j] == "OGJS"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        olivares[0].defC(stod(matriz_entrada[u][j]));
                        salida = olivares[0].compararCaudal(MIN_OGJS, MAX_OGJS);
                        //cout << salida << endl;
                        datos.push_back(salida);

                    }

                }else if(matriz_entrada[i][j] == "OGSO"){
                    
                    for(int u = 1; u < matriz_entrada.size(); u++){
                        olivares[3].defC(stod(matriz_entrada[u][j]));
                        salida = olivares[3].compararCaudal(MIN_OGSO, MAX_OGSO);
                        datos.push_back(salida);
                       
                    }


                }else if(matriz_entrada[i][j] == "OEPC"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        olivares[4].defC(stod(matriz_entrada[u][j]));
                        salida = olivares[4].compararCaudal(MIN_OEPC, MAX_OEPC);
                        datos.push_back(salida);

                    }

                }else if(matriz_entrada[i][j] == "OECF"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        olivares[6].defC(stod(matriz_entrada[u][j]));
                        salida = olivares[6].compararCaudal(MIN_OECF, MAX_OECF);
                        datos.push_back(salida);

                    }
                    

                }else if(matriz_entrada[i][j] == "OETL"){
                    
                    for(int u = 1; u < matriz_entrada.size(); u++){
                        
                        olivares[7].defC(stod(matriz_entrada[u][j]));
                        salida = olivares[7].compararCaudal(MIN_OETL, MAX_OETL);
                        datos.push_back(salida);
                    
                    }
                
                }else if(matriz_entrada[i][j] == "OELP"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        olivares[8].defC(stod(matriz_entrada[u][j]));
                        salida = olivares[8].compararCaudal(MIN_OELP, MAX_OELP);
                        datos.push_back(salida);

                    }
                    

                }else if(matriz_entrada[i][j] == "OQMH"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        olivares[9].defC(stod(matriz_entrada[u][j]));
                        salida = olivares[9].compararCaudal(MIN_OQMH, MAX_OQMH);
                        datos.push_back(salida);

                    }

                }else if(matriz_entrada[i][j] == "OEPT"){
                    
                    for(int u = 1; u < matriz_entrada.size(); u++){
                        
                        olivares[12].defC(stod(matriz_entrada[u][j]));
                        salida = olivares[12].compararCaudal(MIN_OEPT, MAX_OEPT);
                        datos.push_back(salida);
                    
                    }

                }else if(matriz_entrada[i][j] == "ORCR"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        olivares[16].defC(stod(matriz_entrada[u][j]));
                        salida = olivares[16].compararCaudal(MIN_ORCR, MAX_ORCR);
                        datos.push_back(salida);

                    }
            
                }else if(matriz_entrada[i][j] == "CETG"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        colorado[5].defC(stod(matriz_entrada[u][j]));
                        salida = colorado[5].compararCaudal(MIN_CETG, MAX_CETG);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "CQPD"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        colorado[8].defC(stod(matriz_entrada[u][j]));
                        salida = colorado[8].compararCaudal(MIN_CQPD, MAX_CQPD);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "CEQB"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        colorado[12].defC(stod(matriz_entrada[u][j]));
                        salida = colorado[12].compararCaudal(MIN_CEQB, MAX_CEQB);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "CEMN"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        colorado[14].defC(stod(matriz_entrada[u][j]));
                        salida = colorado[14].compararCaudal(MIN_CEMN, MIN_CEMN);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "CEBA"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        colorado[15].defC(stod(matriz_entrada[u][j]));
                        salida = colorado[15].compararCaudal(MIN_CEBA, MAX_CEBA);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "CRMS"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        colorado[34].defC(stod(matriz_entrada[u][j]));
                        salida = colorado[34].compararCaudal(MIN_CRMS, MAX_CRMS);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "CELV"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        colorado[43].defC(stod(matriz_entrada[u][j]));
                        salida = colorado[43].compararCaudal(MIN_CELV, MAX_CELV);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "CRMP"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        colorado[61].defC(stod(matriz_entrada[u][j]));
                        salida = colorado[61].compararCaudal(MIN_CRMP, MAX_CRMP);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "MRYS"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        maipo[9].defC(stod(matriz_entrada[u][j]));
                        salida = maipo[9].compararCaudal(MIN_MRYS, MAX_MRYS);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "MEMT"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        maipo[11].defC(stod(matriz_entrada[u][j]));
                        salida = maipo[11].compararCaudal(MIN_MEMT, MAX_MEMT);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "MQLC"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        maipo[12].defC(stod(matriz_entrada[u][j]));
                        salida = maipo[12].compararCaudal(MIN_MQLC, MAX_MQLC);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "MECC"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        maipo[13].defC(stod(matriz_entrada[u][j]));
                        salida = maipo[13].compararCaudal(MIN_MECC, MAX_MECC);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "MEES"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        maipo[14].defC(stod(matriz_entrada[u][j]));
                        salida = maipo[14].compararCaudal(MIN_MEES, MAX_MEES);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "MEEM"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        maipo[18].defC(stod(matriz_entrada[u][j]));
                        salida = maipo[18].compararCaudal(MIN_MEEM, MAX_MEEM);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "MRCR"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        maipo[21].defC(stod(matriz_entrada[u][j]));
                        salida = maipo[21].compararCaudal(MIN_MRCR, MAX_MRCR);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "YEYS"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        yeso[0].defC(stod(matriz_entrada[u][j]));
                        salida = yeso[0].compararCaudal(MIN_YEYS, MAX_YEYS);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "YESN"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        yeso[12].defC(stod(matriz_entrada[u][j]));
                        salida = yeso[12].compararCaudal(MIN_YESN, MAX_YESN);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "MEAM"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        quebrada[1].defC(stod(matriz_entrada[u][j]));
                        salida = quebrada[1].compararCaudal(MIN_MEAM, MAX_MEAM);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "MQDZ"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        quebrada[5].defC(stod(matriz_entrada[u][j]));
                        salida = quebrada[5].compararCaudal(MIN_MQDZ, MAX_MQDZ);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "ACSC"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        zanjon[5].defC(stod(matriz_entrada[u][j]));
                        salida = quebrada[5].compararCaudal(MIN_ACSC, MAX_ACSC);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "ATIR"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        zanjon[13].defC(stod(matriz_entrada[u][j]));
                        salida = quebrada[13].compararCaudal(MIN_ATIR, MAX_ATIR);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "ATAS"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        zanjon[21].defC(stod(matriz_entrada[u][j]));
                        salida = quebrada[21].compararCaudal(MIN_ATAS, MAX_ATAS);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "ARMP"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        zanjon[27].defC(stod(matriz_entrada[u][j]));
                        salida = quebrada[27].compararCaudal(MIN_ARMP, MAX_ARMP);
                        datos.push_back(salida);

                    }
                    
                }else if(matriz_entrada[i][j] == "EEYS"){

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        embalse[0].defHT(stod(matriz_entrada[u][j]));
                        salida = embalse[0].compararAltura(MIN_EEYS, MAX_EEYS);
                        datos.push_back(salida);

                    }
                    
                }else{ // La abreviación no coincide con ninguna de las especificadas en las instrucciones del programa

                    for(int u = 1; u < matriz_entrada.size(); u++){

                        salida = "Indefinido";
                        datos.push_back(salida);

                    }

                }
                
            }
            
        }
        matriz_salida.push_back(datos);
    }

    
    for(int j = 0; j < matriz_salida[0].size(); j++){

        for(int i = 0; i < matriz_salida.size(); i++){

            cout << matriz_salida[i][j] << "\t";

        }

        cout << endl;

    }

    return 0;
}

string convertirFecha(string fecha) {

    string anio = fecha.substr(0, 4);
    string mes = fecha.substr(5, 2);
    string dia = fecha.substr(8, 2);
    string hora = fecha.substr(11, 2) + "." + fecha.substr(14, 2);

    int mes1 = stoi(mes) - 1;

    vector<string> meses{"ene", "feb", "mar", "abr", "may", "jun",
                        "jul", "ago", "sep", "oct", "nov", "dic"};
    string fechaTotal = dia + "/" + meses[mes1] + "/" + anio + " " + hora;

    return fechaTotal;
  
}

void crearMatriz(vector<vector<string>> &matriz_entrada) {

    string delimiter = " ";
    size_t pos = 0;

    for (string line; getline(cin, line);) {

        vector<string> datos{};

        if(line == "exit")
            break;
        line += " parche";

        while ((pos = line.find(delimiter)) != string::npos) {

    datos.push_back(line.substr(0, pos));
    line.erase(0, pos + delimiter.length());

    }

    matriz_entrada.push_back(datos);
    
  }
}

string recorrerLLS(lista L, string abr){
    
    lista p = L;

    while(p != NULL){

        if(p->abreviatura == abr)

            return p->nombre;

        else
            p = p->sig;
    }

    return "Indefinido";
}
