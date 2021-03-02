/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CMAttitude;

@interface CMPoseInternal : NSObject <NSCopying> {

	CMAttitude* fAttitude;
	SCD_Struct_CM392 fTranslation;
	double fConsumedAuxTimestamp;
	double fReceivedAuxTimestamp;
	double fMachAbsTimestamp;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)isEqualToPoseInternal:(id)arg1 ;
-(id)initWithPose:(SCD_Struct_CM450)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end
