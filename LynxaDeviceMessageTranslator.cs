using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lynxa
{
    public class NetworkInfo
    {
        public int MCC { get; set; }
        public int MNC { get; set; }
        public int LAC { get; set; }
    }
    public static class LynxaDeviceMessageTranslator
    {
        public static NetworkInfo TranslateModemParameters(ModemParameters_103 modemParameters)
        {
            NetworkInfo network_info = new NetworkInfo();
            network_info.MCC = int.Parse(modemParameters.Plmn.Substring(0, 3));
            network_info.MNC = int.Parse(modemParameters.Plmn.Substring(3, 3));
            network_info.LAC = int.Parse(modemParameters.Tac, System.Globalization.NumberStyles.HexNumber);

            return network_info;
        }
    }
}
