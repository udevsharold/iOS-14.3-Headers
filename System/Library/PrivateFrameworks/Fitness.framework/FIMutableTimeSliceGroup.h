/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FIMutableTimeSliceGroup : NSObject {

	NSArray* _slices;

}

@property (nonatomic,readonly) NSArray * slices;                     //@synthesize slices=_slices - In the implementation block
@property (nonatomic,readonly) BOOL allSlicesFinalized; 
+(id)timeSliceGroupForQuantityTypes:(id)arg1 startDate:(id)arg2 ;
-(NSArray *)slices;
-(id)initWithTimeSlices:(id)arg1 ;
-(void)commitAllSlicesToDate:(id)arg1 ;
-(void)updateSlicesWithEndDate:(id)arg1 ;
-(void)updateSlicesWithSample:(id)arg1 ;
-(BOOL)allSlicesFinalized;
@end
