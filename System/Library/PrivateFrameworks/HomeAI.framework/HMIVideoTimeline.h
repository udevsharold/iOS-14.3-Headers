/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@class HMIVideoEventBuffer;

@interface HMIVideoTimeline : HMFObject {

	HMIVideoEventBuffer* _buffer;

}
-(id)initWithMaxCapacity:(long long)arg1 ;
-(id)dateAtTime:(SCD_Struct_HM3)arg1 ;
-(void)addDate:(id)arg1 atTime:(SCD_Struct_HM3)arg2 ;
-(double)timeIntervalSinceDateAtTime:(SCD_Struct_HM3)arg1 ;
@end

