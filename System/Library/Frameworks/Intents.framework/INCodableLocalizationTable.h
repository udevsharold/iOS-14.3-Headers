/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface INCodableLocalizationTable : NSObject <NSSecureCoding, NSCopying> {

	NSString* _bundleIdentifier;
	NSString* _tableName;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * tableName;                     //@synthesize tableName=_tableName - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)tableName;
-(id)initWithBundleIdentifier:(id)arg1 tableName:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(void)setTableName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
@end

