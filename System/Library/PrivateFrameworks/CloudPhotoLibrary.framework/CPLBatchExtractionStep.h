/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLBatchExtractionStrategyStorage;
@class NSString;

@interface CPLBatchExtractionStep : NSObject {

	id<CPLBatchExtractionStrategyStorage> _storage;
	NSString* _scopeIdentifier;

}

@property (nonatomic,readonly) id<CPLBatchExtractionStrategyStorage> storage;              //@synthesize storage=_storage - In the implementation block
@property (nonatomic,copy,readonly) NSString * scopeIdentifier;                            //@synthesize scopeIdentifier=_scopeIdentifier - In the implementation block
-(NSString *)scopeIdentifier;
-(id<CPLBatchExtractionStrategyStorage>)storage;
-(void)reset;
-(id)description;
-(id)shortDescription;
-(void)resetConditionallyFromNewIncomingChange:(id)arg1 ;
-(id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 ;
-(BOOL)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)shouldResetFromThisStepWithIncomingChange:(id)arg1 ;
@end

