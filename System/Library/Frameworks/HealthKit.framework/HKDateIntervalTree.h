/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HealthKit/HealthKit-Structs.h>
@interface HKDateIntervalTree : NSObject {

	unique_ptr<HKIntervalTree<double>, std::__1::default_delete<HKIntervalTree<double> > >* _tree;

}
-(id)init;
-(void)insertInterval:(id)arg1 ;
-(id)mergedIntervals;
-(BOOL)hasOverlapWithInterval:(id)arg1 ;
@end
