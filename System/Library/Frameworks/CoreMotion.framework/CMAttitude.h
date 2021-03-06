/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CMAttitude : NSObject <NSCopying, NSSecureCoding> {

	id _internal;

}

@property (nonatomic,readonly) double roll; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double yaw; 
@property (nonatomic,readonly) SCD_Struct_CM398 rotationMatrix; 
@property (nonatomic,readonly) SCD_Struct_CM397 quaternion; 
+(BOOL)supportsSecureCoding;
-(double)pitch;
-(double)roll;
-(void)multiplyByInverseOfAttitude:(id)arg1 ;
-(double)yaw;
-(void)setQuaternion:(SCD_Struct_CM397)arg1 ;
-(id)initWithQuaternion:(SCD_Struct_CM397)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(SCD_Struct_CM398)rotationMatrix;
-(SCD_Struct_CM397)quaternion;
-(void)encodeWithCoder:(id)arg1 ;
@end

