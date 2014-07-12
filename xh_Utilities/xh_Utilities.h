#ifndef xh_UTILITIES_H_INCLUDED
#define xh_UTILITIES_H_INCLUDED

#include "AppConfig.h"
#include "modules/juce_core/juce_core.h"
#include "modules/juce_gui_basics/juce_gui_basics.h"

///////////////////////////////////////////////////////////////////////////////

#include "misc/DestructionNotifier.h"
#include "misc/ArrayDuplicateScanner.h"
#include "misc/RelativeWeightSequence.h"
#include "misc/Version.h"

#include "templates/AsyncCallback.h"
#include "templates/SubClassWeakReference.h"
#include "templates/OverridableSharedResourcePointer.h"

#include "tasks/TaskSequence.h"
#include "tasks/ProgressiveTask.h"
#include "tasks/DummyTask.h"
#include "tasks/SerialTask.h"
#include "tasks/MemberFunctionTask.h"
#include "tasks/TaskHandler.h"
#include "tasks/TaskThread.h"

#include "tasks/ModalTaskPopup.h"
#include "tasks/TaskThreadWithProgressWindow.h"

///////////////////////////////////////////////////////////////////////////////

#endif  // xh_UTILITIES_H_INCLUDED
