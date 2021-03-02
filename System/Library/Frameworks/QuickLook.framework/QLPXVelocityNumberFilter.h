/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLPXNumberFilter.h>

@interface QLPXVelocityNumberFilter : QLPXNumberFilter {

	double _minimumSampleInterval;
	double _previousVelocityWeight;
	double _lastValue;
	double _lastTime;
	double _velocity;
	double _previousVelocity;
	double _filteredVelocity;

}
+(id)gestureVelocityFilter;
-(id)initWithInput:(double)arg1 ;
-(double)updatedOutput;
@end
