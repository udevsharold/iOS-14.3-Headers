/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLPXNumberFilter.h>

@interface QLPXChangeDirectionNumberFilter : QLPXNumberFilter {

	double _threshold;
	double _minimumChange;

}

@property (assign,nonatomic) double minimumChange;              //@synthesize minimumChange=_minimumChange - In the implementation block
-(double)initialOutputForInput:(double)arg1 ;
-(void)setMinimumChange:(double)arg1 ;
-(double)minimumChange;
-(id)initWithInput:(double)arg1 ;
-(double)updatedOutput;
@end

