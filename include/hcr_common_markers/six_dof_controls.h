#ifndef _PBI_SIX_DOF_CONTROL_H_
#define _PBI_SIX_DOF_CONTROL_H_

#include <vector>
#include "visualization_msgs/InteractiveMarkerControl.h"

namespace hcr_common_markers {
// Generates a 6 DOF controls whose orientations stay fixed even after the
// marker is rotated.
std::vector<visualization_msgs::InteractiveMarkerControl>
FixedOrientationSixDofControls();

// Generates a 6 DOF controls whose orientations change as the marker's
// orientation changes.
std::vector<visualization_msgs::InteractiveMarkerControl>
FreeOrientationSixDofControls();

// Generates a 6 DOF controls, which can be added to an InteractiveMarker to
// make it draggable and rotatable.
std::vector<visualization_msgs::InteractiveMarkerControl> SixDofControls(
    uint8_t orientation_mode);
}  // namespace pbi

#endif  // _PBI_SIX_DOF_CONTROL_H_
