/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Trial/Trial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface TRIVersion : NSObject <NSCopying> {

	NSNumber* _majorVersion;
	NSNumber* _minorVersion;
	NSNumber* _patchVersion;

}

@property (nonatomic,readonly) NSNumber * majorVersion;              //@synthesize majorVersion=_majorVersion - In the implementation block
@property (nonatomic,readonly) NSNumber * minorVersion;              //@synthesize minorVersion=_minorVersion - In the implementation block
@property (nonatomic,readonly) NSNumber * patchVersion;              //@synthesize patchVersion=_patchVersion - In the implementation block
+(id)parseVersionFromString:(id)arg1 withPrefix:(id)arg2 ;
+(id)versionWithMajorVersion:(id)arg1 minorVersion:(id)arg2 patchVersion:(id)arg3 ;
-(long long)compare:(id)arg1 ;
-(id)init;
-(id)initWithMajorVersion:(id)arg1 minorVersion:(id)arg2 patchVersion:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToVersion:(id)arg1 ;
-(id)copyWithReplacementMajorVersion:(id)arg1 ;
-(id)copyWithReplacementMinorVersion:(id)arg1 ;
-(id)copyWithReplacementPatchVersion:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSNumber *)minorVersion;
-(NSNumber *)majorVersion;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)patchVersion;
@end

