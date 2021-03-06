/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOLocation;

@interface MNTraceRouteSimulatorEvent : NSObject {

	double _timestamp;
	GEOLocation* _location;
	/*^block*/id _completion;

}

@property (nonatomic,readonly) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) GEOLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) id completion;                       //@synthesize completion=_completion - In the implementation block
-(double)timestamp;
-(GEOLocation *)location;
-(id)completion;
-(id)initWithLocation:(id)arg1 ;
-(id)description;
-(id)initWithTime:(double)arg1 completion:(/*^block*/id)arg2 ;
@end

