/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/_ATXAppLaunchCategoricalHistogram.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ATXBackgroundSaver, _ATXDataStore;

@interface _ATXAppLaunchCategoricalHistogramWithPersistentBackup : _ATXAppLaunchCategoricalHistogram <NSSecureCoding> {

	ATXBackgroundSaver* _saver;
	_ATXDataStore* _datastore;
	long long _histogramType;

}

@property (nonatomic,readonly) _ATXDataStore * datastore;              //@synthesize datastore=_datastore - In the implementation block
@property (nonatomic,readonly) long long histogramType;                //@synthesize histogramType=_histogramType - In the implementation block
-(long long)histogramType;
-(int)removeHistoryForBundleIds:(id)arg1 ;
-(void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 category:(id)arg3 ;
-(id)initWithDataStore:(id)arg1 histogramType:(long long)arg2 saveOnBackgroundQueue:(id)arg3 maxCategoryCount:(unsigned short)arg4 pruningMethod:(long long)arg5 ;
-(void)flush;
-(void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 category:(id)arg3 weight:(float)arg4 ;
-(void)resetHistogram:(id)arg1 ;
-(BOOL)removeHistoryForBundleId:(id)arg1 ;
-(BOOL)removeHistoryForCategory:(id)arg1 ;
-(_ATXDataStore *)datastore;
-(void)resetData;
-(id)initWithDataStore:(id)arg1 histogramType:(long long)arg2 ;
@end

