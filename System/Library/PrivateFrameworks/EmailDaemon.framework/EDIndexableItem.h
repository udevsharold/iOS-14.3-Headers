/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, NSData;


@protocol EDIndexableItem <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * domainIdentifier; 
@property (assign,nonatomic) long long indexingType; 
@property (nonatomic,readonly) NSDate * dateReceived; 
@property (nonatomic,readonly) unsigned long long itemInstantiationTime; 
@property (nonatomic,readonly) unsigned long long estimatedSizeInBytes; 
@property (nonatomic,retain) NSData * underlyingData; 
@property (nonatomic,readonly) BOOL hasCompleteData; 
@property (nonatomic,readonly) BOOL alwaysMarkAsIndexed; 
@property (nonatomic,readonly) BOOL shouldExcludeFromIndex; 
@property (nonatomic,readonly) BOOL requiresPreprocessing; 
@required
-(long long)compare:(id)arg1;
-(NSString *)domainIdentifier;
-(id)searchableItem;
-(void)setIndexingType:(long long)arg1;
-(long long)indexingType;
-(BOOL)shouldExcludeFromIndex;
-(void)setNeedsAllAttributesIndexingType;
-(id)fetchIndexableAttachments;
-(NSData *)underlyingData;
-(void)preprocess;
-(NSString *)identifier;
-(NSDate *)dateReceived;
-(unsigned long long)estimatedSizeInBytes;
-(BOOL)alwaysMarkAsIndexed;
-(BOOL)requiresPreprocessing;
-(unsigned long long)itemInstantiationTime;
-(void)setUnderlyingData:(id)arg1;
-(BOOL)hasCompleteData;

@end

