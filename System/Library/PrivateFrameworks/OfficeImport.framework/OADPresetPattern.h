/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPattern.h>

@interface OADPresetPattern : OADPattern {

	int mType;
	BOOL mIsTypeOverridden;

}
+(id)defaultProperties;
+(id)nameForPresetPatternType:(int)arg1 ;
+(id)namedBitmapDataForPresetPatternType:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(int)arg1 ;
-(unsigned long long)hash;
-(int)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDefaults;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(BOOL)isTypeOverridden;
@end

