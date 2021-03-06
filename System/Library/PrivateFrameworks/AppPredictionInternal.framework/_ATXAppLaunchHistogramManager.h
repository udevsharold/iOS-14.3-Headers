/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _ATXDataStore, NSObject, NSDictionary, NSMutableDictionary;

@interface _ATXAppLaunchHistogramManager : NSObject {

	_ATXDataStore* _datastore;
	NSObject*<OS_dispatch_queue> _backgroundSaverQueue;
	NSDictionary* _parameters;
	NSMutableDictionary* _histograms;
	NSMutableDictionary* _categoricalHistograms;
	long long _SSIDPruningMethod;
	int _maxSSIDCount;
	long long _actionConfirmsRejectsPruningMethod;
	int _maxActionConfirmsRejectsActionCount;
	int _maxAppSpecificLocationMaxKeyCount;
	int _maxAppCoarseLocationMaxKeyCount;
	int _maxAppZoom7GeoHashMaxKeyCount;
	long long _appJointContextPruningMethod;
	int _maxAppJointContextKeyCount;
	BOOL _persistentStore;

}

@property (nonatomic,readonly) BOOL persistentStore;              //@synthesize persistentStore=_persistentStore - In the implementation block
+(void)useTemporarySharedInstance:(id)arg1 ;
+(id)sharedInstance;
+(void)resetDataForCategoricalHistograms;
+(void)resetSharedInstance;
+(void)releaseTemporarySharedInstance;
+(BOOL)isHistogramDeprecated:(long long)arg1 ;
-(BOOL)persistentStore;
-(int)getHistogramMaxCategoryCountFromAsset:(id)arg1 ;
-(id)init;
-(id)categoricalHistogramForLaunchType:(long long)arg1 ;
-(id)histogramForLaunchType:(long long)arg1 ;
-(void)exchangeDatastore:(id)arg1 ;
-(id)initWithPersistentStore;
-(id)initAndPersist:(BOOL)arg1 ;
-(id)initWithInMemoryStore;
-(unsigned long long)getHistogramPruningMethodFromAsset:(id)arg1 ;
@end

