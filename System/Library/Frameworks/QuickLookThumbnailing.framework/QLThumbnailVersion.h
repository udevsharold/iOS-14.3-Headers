/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString, NSData;

@interface QLThumbnailVersion : NSObject <NSSecureCoding> {

	NSDate* _modificationDate;
	unsigned long long _fileSize;
	NSString* _generatorID;
	NSString* _generatorVersion;
	NSData* _versionIdentifier;
	unsigned long long _ino;

}

@property (copy) NSString * generatorID;                                                       //@synthesize generatorID=_generatorID - In the implementation block
@property (copy) NSString * generatorVersion;                                                  //@synthesize generatorVersion=_generatorVersion - In the implementation block
@property (copy) NSDate * modificationDate;                                                    //@synthesize modificationDate=_modificationDate - In the implementation block
@property (copy) NSData * versionIdentifier;                                                   //@synthesize versionIdentifier=_versionIdentifier - In the implementation block
@property (assign) unsigned long long fileSize;                                                //@synthesize fileSize=_fileSize - In the implementation block
@property (getter=isDefaultVersion,readonly) BOOL defaultVersion; 
@property (getter=isAutomaticallyGenerated,readonly) BOOL automaticallyGenerated; 
@property (assign) unsigned long long ino;                                                     //@synthesize ino=_ino - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSDate *)modificationDate;
-(unsigned long long)ino;
-(NSData *)versionIdentifier;
-(id)init;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setVersionIdentifier:(NSData *)arg1 ;
-(unsigned long long)fileSize;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setFileSize:(unsigned long long)arg1 ;
-(void)setIno:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isDefaultVersion;
-(id)initWithFileURL:(id)arg1 automaticallyGenerated:(BOOL)arg2 ;
-(void)setGeneratorID:(NSString *)arg1 ;
-(void)setGeneratorVersion:(NSString *)arg1 ;
-(id)initWithFPItem:(id)arg1 automaticallyGenerated:(BOOL)arg2 ;
-(id)initWithModificationDate:(id)arg1 fileSize:(unsigned long long)arg2 versionIdentifier:(id)arg3 ino:(unsigned long long)arg4 generatorID:(id)arg5 generatorVersion:(id)arg6 ;
-(void)getGeneratorID:(id*)arg1 version:(id*)arg2 ;
-(id)initWithFileURL:(id)arg1 generatorID:(id)arg2 generatorVersion:(id)arg3 ;
-(id)initWithFPItem:(id)arg1 generatorID:(id)arg2 generatorVersion:(id)arg3 ;
-(NSString *)generatorID;
-(NSString *)generatorVersion;
-(BOOL)shouldBeInvalidatedByThumbnailWithVersion:(id)arg1 ;
-(BOOL)isAutomaticallyGenerated;
@end
