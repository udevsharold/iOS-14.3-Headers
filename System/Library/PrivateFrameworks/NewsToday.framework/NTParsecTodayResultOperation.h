/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NTTodayResultOperation.h>

@class NTTodayResults, NSDictionary, NTPBTodayResultOperationFetchInfo;

@interface NTParsecTodayResultOperation : NTTodayResultOperation {

	NTTodayResults* _resultTodayResults;
	NSDictionary* _resultAssetHandlesByAssetID;
	NTPBTodayResultOperationFetchInfo* _resultFetchInfo;

}

@property (nonatomic,copy) NTTodayResults * resultTodayResults;                              //@synthesize resultTodayResults=_resultTodayResults - In the implementation block
@property (nonatomic,copy) NSDictionary * resultAssetHandlesByAssetID;                       //@synthesize resultAssetHandlesByAssetID=_resultAssetHandlesByAssetID - In the implementation block
@property (nonatomic,copy) NTPBTodayResultOperationFetchInfo * resultFetchInfo;              //@synthesize resultFetchInfo=_resultFetchInfo - In the implementation block
-(void)operationWillFinishWithError:(id)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)setResultTodayResults:(NTTodayResults *)arg1 ;
-(void)_updateUseParsecEnabledWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_fetchTodayResultsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setResultAssetHandlesByAssetID:(NSDictionary *)arg1 ;
-(void)setResultFetchInfo:(NTPBTodayResultOperationFetchInfo *)arg1 ;
-(NTTodayResults *)resultTodayResults;
-(NSDictionary *)resultAssetHandlesByAssetID;
-(NTPBTodayResultOperationFetchInfo *)resultFetchInfo;
-(id)_aggregateSectionsWithSectionDescriptor:(id)arg1 headlines:(id)arg2 ;
-(id)_todayResultsWithSectionDescriptor:(id)arg1 aggregationResult:(id)arg2 searchResultsByHeadline:(id)arg3 ZKWNewsOperation:(id)arg4 ;
-(void)_fetchThumbnailsForTodayResults:(id)arg1 withSearchResultsByHeadline:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

