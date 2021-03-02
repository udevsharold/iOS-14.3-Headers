/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimerUI/MobileTimerUI-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableSet, NSDate;

@interface MTUIBedtimeGraphColumnData : NSObject <NSFastEnumeration> {

	NSMutableSet* _intervals;

}

@property (nonatomic,retain) NSMutableSet * intervals;               //@synthesize intervals=_intervals - In the implementation block
@property (nonatomic,readonly) long long intervalCount; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
-(NSDate *)endDate;
-(id)init;
-(NSMutableSet *)intervals;
-(void)setIntervals:(NSMutableSet *)arg1 ;
-(void)addInterval:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MT3*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(NSDate *)startDate;
-(long long)intervalCount;
-(id)orderedIntervals;
@end
