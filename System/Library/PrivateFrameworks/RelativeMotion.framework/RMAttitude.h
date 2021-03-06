/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelativeMotion.framework/RelativeMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelativeMotion/RelativeMotion-Structs.h>
#import <RelativeMotion/RMLogItem.h>

@interface RMAttitude : RMLogItem {

	SCD_Struct_RM3 _quaternion;

}

@property (nonatomic,readonly) SCD_Struct_RM3 quaternion;              //@synthesize quaternion=_quaternion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(SCD_Struct_RM3)quaternion;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithQuaternion:(SCD_Struct_RM3)arg1 timestamp:(double)arg2 ;
@end

