/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface ATXWidgetLogUploadAllowList : NSObject {

	BOOL _allowListEnabled;
	NSSet* _allowedWidgetBundleIds;

}
-(id)init;
-(id)initWithAssets:(id)arg1 ;
-(BOOL)logUploadAllowedForWidgetBundleId:(id)arg1 ;
@end
