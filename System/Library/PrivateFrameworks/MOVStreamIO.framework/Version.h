/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MOVStreamIO/MOVStreamIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface Version : NSObject <NSCopying> {

	unsigned _major;
	unsigned _minor;
	unsigned _bugfix;
	NSString* _modifier;

}

@property (readonly) unsigned major;                   //@synthesize major=_major - In the implementation block
@property (readonly) unsigned minor;                   //@synthesize minor=_minor - In the implementation block
@property (readonly) unsigned bugfix;                  //@synthesize bugfix=_bugfix - In the implementation block
@property (readonly) NSString * modifier;              //@synthesize modifier=_modifier - In the implementation block
+(id)versionZero;
+(id)pre3_15_0_Mapping;
+(id)allVersionedKeysForKey:(id)arg1 modifier:(id)arg2 ;
-(unsigned)major;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToVersion:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned)bugfix;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)modifier;
-(unsigned)minor;
-(long long)compareToVersion:(id)arg1 ;
-(id)initWithVersionString:(id)arg1 error:(id*)arg2 ;
-(BOOL)isAllDigitsInString:(id)arg1 ;
-(id)getVersionAsString;
-(id)versionedKey:(id)arg1 modifier:(id)arg2 ;
@end

