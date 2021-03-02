/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface PHAPrivateFederatedLearningAugmentersDecoder : NSObject {

	NSDictionary* _augmenterNameToClass;

}

@property (nonatomic,readonly) NSDictionary * augmenterNameToClass;              //@synthesize augmenterNameToClass=_augmenterNameToClass - In the implementation block
-(id)init;
-(BOOL)_generateError:(id*)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 ;
-(id)augmentersFromArray:(id)arg1 error:(id*)arg2 ;
-(id)instanceForAugmenterConfig:(id)arg1 error:(id*)arg2 ;
-(NSDictionary *)augmenterNameToClass;
@end
