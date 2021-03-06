/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADShade.h>

@interface OADLinearShade : OADShade {

	float mAngle;
	BOOL mIsAngleOverridden;
	BOOL mScaled;
	BOOL mIsScaledOverridden;

}
+(id)defaultProperties;
-(float)angle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(void)setAngle:(float)arg1 ;
-(void)setScaled:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDefaults;
-(BOOL)scaled;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)isAngleOverridden;
-(BOOL)isScaledOverridden;
@end

