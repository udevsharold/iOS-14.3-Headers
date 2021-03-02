/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNSteppingLocationTracker.h>

@class GEOTransitRouteMatcher, GEORoadMatcher, NSDate, MNLocation;

@interface MNTransitLocationTracker : MNSteppingLocationTracker {

	GEOTransitRouteMatcher* _transitRouteMatcher;
	GEORoadMatcher* _roadMatcher;
	NSDate* _lastLocationTimestamp;
	NSDate* _lastAccurateLocationDate;
	MNLocation* _lastMatchedLocation;
	NSDate* _startDate;
	BOOL _hasArrived;
	BOOL _debugSnapToTransitLines;

}

@property (assign,nonatomic) BOOL debugSnapToTransitLines;              //@synthesize debugSnapToTransitLines=_debugSnapToTransitLines - In the implementation block
-(int)transportType;
-(void)stopTracking;
-(void)startTracking;
-(id)_matchedLocationForLocation:(id)arg1 ;
-(id)initWithNavigationSession:(id)arg1 ;
-(BOOL)_isInaccurateLocation:(id)arg1 ;
-(id)_locationForInaccurateLocation:(id)arg1 ;
-(double)_timeToDisplayStaleGPSLocation;
-(id)_correctedLocationForLocation:(id)arg1 ;
-(id)_roadMatchForOffRouteLocation:(id)arg1 routeMatch:(id)arg2 ;
-(BOOL)debugSnapToTransitLines;
-(void)setDebugSnapToTransitLines:(BOOL)arg1 ;
@end
