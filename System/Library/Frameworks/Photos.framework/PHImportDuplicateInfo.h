/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, NSDate, NSNumber;

@interface PHImportDuplicateInfo : NSObject {

	NSMutableDictionary* _info;

}

@property (nonatomic,retain) NSMutableDictionary * info;                     //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) NSString * fileName; 
@property (nonatomic,readonly) NSDate * imageDate; 
@property (nonatomic,retain) NSDate * alternateImportImageDate; 
@property (nonatomic,readonly) NSNumber * fileSize; 
@property (nonatomic,readonly) BOOL isInTrash; 
@property (nonatomic,readonly) NSString * fingerprint; 
@property (nonatomic,readonly) NSString * avchdFingerprint; 
@property (nonatomic,readonly) double timezoneOffset; 
@property (nonatomic,readonly) BOOL hasVideoComplement; 
-(void)setAlternateImportImageDate:(NSDate *)arg1 ;
-(id)objectID;
-(NSDate *)alternateImportImageDate;
-(void)setInfo:(NSMutableDictionary *)arg1 ;
-(BOOL)isLegacy;
-(NSMutableDictionary *)info;
-(NSDate *)imageDate;
-(NSString *)fileName;
-(double)timezoneOffset;
-(id)description;
-(NSNumber *)fileSize;
-(NSString *)fingerprint;
-(NSString *)avchdFingerprint;
-(id)initWithAssetInfo:(id)arg1 ;
-(BOOL)hasVideoComplement;
-(id)originatingAssetIdentifier;
-(BOOL)isInTrash;
@end

