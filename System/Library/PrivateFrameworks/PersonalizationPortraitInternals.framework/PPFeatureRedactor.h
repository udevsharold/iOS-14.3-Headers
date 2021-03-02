/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASLock, PPTrialWrapper;

@interface PPFeatureRedactor : NSObject {

	_PASLock* _lock;
	PPTrialWrapper* _trialWrapper;

}
-(id)initWithTrialWrapper:(id)arg1 namespaceName:(id)arg2 ;
-(void)_loadAssetsWithNamespaceName:(id)arg1 ;
-(void)_loadWithAssetData:(id)arg1 ;
-(void)transformFeaturesInPlace:(id)arg1 ;
@end
