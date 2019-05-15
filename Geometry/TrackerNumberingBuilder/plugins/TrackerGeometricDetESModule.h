#ifndef Geometry_TrackerNumberingBuilder_TrackerGeometricDetESModule_H
#define Geometry_TrackerNumberingBuilder_TrackerGeometricDetESModule_H

#include "FWCore/Framework/interface/ESProducer.h"

namespace edm {
  class ConfigurationDescriptions;
  class ParameterSet;
}  // namespace edm

class GeometricDet;
class IdealGeometryRecord;

class TrackerGeometricDetESModule : public edm::ESProducer {
public:
  TrackerGeometricDetESModule(const edm::ParameterSet& p);
  ~TrackerGeometricDetESModule(void) override;
  std::unique_ptr<GeometricDet> produce(const IdealGeometryRecord&);

  static void fillDescriptions(edm::ConfigurationDescriptions& descriptions);

private:
  bool fromDDD_;
};

#endif
