/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface _SFSafariDataSharingController : NSObject {

	NSObject*<OS_dispatch_queue> _dataSharingQueue;
	NSMutableArray* _appBundlesWithSeparateData;

}
+(id)sharedController;
-(id)init;
-(void)_loadAppBundlesWithSeparateDataIfNeeded;
-(void)clearAllWebsitesData;
-(id)systemDataContainerURLWithAppBundleID:(id)arg1 ;
-(void)checkInAppBundleIDIfNeeded:(id)arg1 ;
@end
