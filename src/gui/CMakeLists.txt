SET(LMMS_SRCS
	${LMMS_SRCS}
	gui/ActionGroup.cpp
	gui/AudioAlsaSetupWidget.cpp
	gui/AudioDeviceSetupWidget.cpp
	gui/AutomatableModelView.cpp
	gui/ControlLayout.cpp
	gui/ControllerDialog.cpp
	gui/ControllerRackView.cpp
	gui/ControllerView.cpp
	gui/Controls.cpp
	gui/EffectControlDialog.cpp
	gui/EffectRackView.cpp
	gui/EffectView.cpp
	gui/embed.cpp
	gui/FileBrowser.cpp
	gui/GuiApplication.cpp
	gui/LadspaControlView.cpp
	gui/LfoControllerDialog.cpp
	gui/LinkedModelGroupViews.cpp
	gui/LmmsPalette.cpp
	gui/LmmsStyle.cpp
	gui/Lv2ViewBase.cpp
	gui/MainApplication.cpp
	gui/MainWindow.cpp
	gui/MicrotunerConfig.cpp
	gui/MidiCCRackView.cpp
	gui/MidiSetupWidget.cpp
	gui/MixerLine.cpp
	gui/MixerView.cpp
	gui/ModelView.cpp
	gui/PeakControllerDialog.cpp
	gui/PluginBrowser.cpp
	gui/ProjectNotes.cpp
	gui/RowTableView.cpp
	gui/SampleTrackWindow.cpp
	gui/SendButtonIndicator.cpp
	gui/SideBar.cpp
	gui/SideBarWidget.cpp
	gui/StringPairDrag.cpp
	gui/SubWindow.cpp
	gui/ToolPluginView.cpp

	gui/clips/AutomationClipView.cpp
	gui/clips/ClipView.cpp
	gui/clips/MidiClipView.cpp
	gui/clips/PatternClipView.cpp
	gui/clips/SampleClipView.cpp

	gui/editors/AutomationEditor.cpp
	gui/editors/Editor.cpp
	gui/editors/PatternEditor.cpp
	gui/editors/PianoRoll.cpp
	gui/editors/PositionLine.cpp
	gui/editors/Rubberband.cpp
	gui/editors/SongEditor.cpp
	gui/editors/StepRecorderWidget.cpp
	gui/editors/TimeLineWidget.cpp
	gui/editors/TrackContainerView.cpp

	gui/instrument/EnvelopeAndLfoView.cpp
	gui/instrument/InstrumentFunctionViews.cpp
	gui/instrument/InstrumentMidiIOView.cpp
	gui/instrument/InstrumentMiscView.cpp
	gui/instrument/InstrumentSoundShapingView.cpp
	gui/instrument/InstrumentTrackWindow.cpp
	gui/instrument/InstrumentView.cpp
	gui/instrument/PianoView.cpp

	gui/menus/MidiPortMenu.cpp
	gui/menus/RecentProjectsMenu.cpp
	gui/menus/TemplatesMenu.cpp

	gui/modals/AboutDialog.cpp
	gui/modals/ColorChooser.cpp
	gui/modals/ControllerConnectionDialog.cpp
	gui/modals/EffectSelectDialog.cpp
	gui/modals/ExportProjectDialog.cpp
	gui/modals/FileDialog.cpp
	gui/modals/RenameDialog.cpp
	gui/modals/SetupDialog.cpp
	gui/modals/VersionedSaveDialog.cpp

	gui/tracks/AutomationTrackView.cpp
	gui/tracks/FadeButton.cpp
	gui/tracks/InstrumentTrackView.cpp
	gui/tracks/PatternTrackView.cpp
	gui/tracks/SampleTrackView.cpp
	gui/tracks/TrackContentWidget.cpp
	gui/tracks/TrackLabelButton.cpp
	gui/tracks/TrackOperationsWidget.cpp
	gui/tracks/TrackRenameLineEdit.cpp
	gui/tracks/TrackView.cpp

	gui/widgets/AutomatableButton.cpp
	gui/widgets/AutomatableSlider.cpp
	gui/widgets/CPULoadWidget.cpp
	gui/widgets/CaptionMenu.cpp
	gui/widgets/ComboBox.cpp
	gui/widgets/CustomTextKnob.cpp
	gui/widgets/Fader.cpp
	gui/widgets/Graph.cpp
	gui/widgets/GroupBox.cpp
	gui/widgets/Knob.cpp
	gui/widgets/LcdFloatSpinBox.cpp
	gui/widgets/LcdSpinBox.cpp
	gui/widgets/LcdWidget.cpp
	gui/widgets/LedCheckBox.cpp
	gui/widgets/LeftRightNav.cpp
	gui/widgets/MeterDialog.cpp
	gui/widgets/MixerLineLcdSpinBox.cpp
	gui/widgets/NStateButton.cpp
	gui/widgets/Oscilloscope.cpp
	gui/widgets/PixmapButton.cpp
	gui/widgets/SimpleTextFloat.cpp
	gui/widgets/TabBar.cpp
	gui/widgets/TabWidget.cpp
	gui/widgets/TempoSyncKnob.cpp
	gui/widgets/TextFloat.cpp
	gui/widgets/TimeDisplayWidget.cpp
	gui/widgets/ToolButton.cpp

	PARENT_SCOPE
)

set(LMMS_UIS
	${LMMS_UIS}
	gui/modals/about_dialog.ui
	gui/modals/EffectSelectDialog.ui
	gui/modals/export_project.ui

	PARENT_SCOPE
)
