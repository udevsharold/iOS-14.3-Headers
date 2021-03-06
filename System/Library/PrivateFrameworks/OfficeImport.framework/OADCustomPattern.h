/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPattern.h>

@class OADBlipRef;

@interface OADCustomPattern : OADPattern {

	OADBlipRef* mBlipRef;
	BOOL mIsBlipRefOverridden;

}
+(id)defaultProperties;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDefaults;
-(id)blipRef;
-(BOOL)isBlipRefOverridden;
-(void)setBlipRef:(id)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
@end

