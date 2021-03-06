/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, ATXApp2VecMapping;

@interface ATXNotificationsPriors : NSObject {

	NSDictionary* _parameters;
	double _defaultPrior;
	ATXApp2VecMapping* _appFeatures;

}
+(id)sharedInstance;
-(id)init;
-(id)initWithAssetClass:(Class)arg1 andPathToAppFeatures:(id)arg2 ;
-(double)getPriorForAppId:(id)arg1 ;
-(double)getAppBiasForBundleId:(id)arg1 ;
@end

