/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsCore/TipsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface TPSDataCache : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _cacheType;
	long long _maxAge;
	unsigned long long _fileSize;
	NSString* _identifier;
	NSString* _lastModified;
	NSString* _languageCode;
	NSDate* _updatedDate;

}

@property (nonatomic,readonly) BOOL expired; 
@property (assign,nonatomic) unsigned long long cacheType;              //@synthesize cacheType=_cacheType - In the implementation block
@property (assign,nonatomic) long long maxAge;                          //@synthesize maxAge=_maxAge - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;               //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,retain) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * lastModified;                   //@synthesize lastModified=_lastModified - In the implementation block
@property (nonatomic,retain) NSString * languageCode;                   //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,retain) NSDate * updatedDate;                      //@synthesize updatedDate=_updatedDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMaxAge:(long long)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(long long)maxAge;
-(void)setLastModified:(NSString *)arg1 ;
-(NSString *)lastModified;
-(NSString *)languageCode;
-(void)setUpdatedDate:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(unsigned long long)cacheType;
-(BOOL)expired;
-(unsigned long long)fileSize;
-(void)setCacheType:(unsigned long long)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
-(id)debugDescription;
-(NSDate *)updatedDate;
-(void)encodeWithCoder:(id)arg1 ;
@end
