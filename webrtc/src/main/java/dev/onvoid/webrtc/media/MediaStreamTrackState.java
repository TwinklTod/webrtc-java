/*
 * Copyright 2019 Alex Andres
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package dev.onvoid.webrtc.media;

public enum MediaStreamTrackState {

	/**
	 * The track is active (the track's underlying media source is making a
	 * best-effort attempt to provide data in real time). The output of a track
	 * in the live state can be switched on and off.
	 */
	LIVE,

	/**
	 * The track has ended (the track's underlying media source is no longer
	 * providing data, and will never provide more data for this track). Once a
	 * track enters this state, it never exits it.
	 */
	ENDED;

}
