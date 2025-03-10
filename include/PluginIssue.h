/*
 * PluginIssue.h - PluginIssue class
 *
 * Copyright (c) 2019 Johannes Lorenz <j.git$$$lorenz-ho.me, $$$=@>
 *
 * This file is part of LMMS - https://lmms.io
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program (see COPYING); if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA.
 *
 */

#ifndef LMMS_PLUGIN_ISSUE_H
#define LMMS_PLUGIN_ISSUE_H

#include <QDebug>
#include <string>

namespace lmms
{

//! Types of issues that can cause LMMS to not load a plugin
//! LMMS Plugins should use this to indicate errors
enum PluginIssueType
{
	// port flow & type
	unknownPortFlow,
	unknownPortType,
	// channel count
	tooManyInputChannels,
	tooManyOutputChannels,
	tooManyMidiInputChannels,
	tooManyMidiOutputChannels,
	noOutputChannel,
	// port metadata
	portHasNoDef,
	portHasNoMin,
	portHasNoMax,
	minGreaterMax,
	defaultValueNotInRange,
	logScaleMinMissing,
	logScaleMaxMissing,
	logScaleMinMaxDifferentSigns,
	// features
	featureNotSupported, //!< plugin requires functionality LMMS can't offer
	// misc
	badPortType, //!< port type not supported
	blacklisted,
	noIssue
};

//! Issue type bundled with informational string
class PluginIssue
{
	static const char* msgFor(const PluginIssueType& it);

	PluginIssueType m_issueType;
	std::string m_info;

public:
	PluginIssue(PluginIssueType it, std::string msg = std::string())
		: m_issueType(it), m_info(msg)
	{
	}
	PluginIssueType type() const { return m_issueType; }
	bool operator==(const PluginIssue& other) const;
	bool operator<(const PluginIssue& other) const;
	friend QDebug operator<<(QDebug stream, const PluginIssue& iss);
};

QDebug operator<<(QDebug stream, const PluginIssue& iss);

} // namespace lmms

#endif // LMMS_PLUGIN_ISSUE_H
