
#include "CalibTracker/SiStripQuality/plugins/SiStripBadModuleByHandBuilder.h"
#include "CalibTracker/SiStripQuality/plugins/SiStripBadStripFromASCIIFile.h"
#include "CalibTracker/SiStripQuality/plugins/SiStripQualityHotStripIdentifier.h"
#include "CalibTracker/SiStripQuality/plugins/SiStripQualityStatistics.h"
#include "FWCore/Framework/interface/MakerMacros.h"

DEFINE_FWK_MODULE(SiStripBadModuleByHandBuilder);
DEFINE_FWK_MODULE(SiStripQualityStatistics);
DEFINE_FWK_MODULE(SiStripQualityHotStripIdentifier);
DEFINE_FWK_MODULE(SiStripBadStripFromASCIIFile);
