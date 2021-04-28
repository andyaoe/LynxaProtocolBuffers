using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lynxa
{
    public class CellTowerInfo
    {
        public int MCC { get; set; }
        public int MNC { get; set; }
        public int LAC { get; set; }
    }
    public static class LynxaDeviceMessageTranslator
    {
        public static CellTowerInfo TranslateModemParameters(ModemParameters_103 modemParameters)
        {
            CellTowerInfo cell_tower_info = new CellTowerInfo();
            cell_tower_info.MCC = int.Parse(modemParameters.Plmn.Substring(0, 3));
            cell_tower_info.MNC = int.Parse(modemParameters.Plmn.Substring(3, 3));
            cell_tower_info.LAC = int.Parse(modemParameters.Tac, System.Globalization.NumberStyles.HexNumber);

            return cell_tower_info;
        }
    }
}
