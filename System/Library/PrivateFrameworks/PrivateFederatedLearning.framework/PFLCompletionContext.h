/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSData;

@interface PFLCompletionContext : NSObject {

	NSError* _error;
	NSData* _privatizedDiffs;

}

@property (nonatomic,readonly) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSData * privatizedDiffs;              //@synthesize privatizedDiffs=_privatizedDiffs - In the implementation block
-(NSError *)error;
-(NSData *)privatizedDiffs;
-(id)initWithPrivatizedDiffs:(id)arg1 error:(id)arg2 ;
@end

