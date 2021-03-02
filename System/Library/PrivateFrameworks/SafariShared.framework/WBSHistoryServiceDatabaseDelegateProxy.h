/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSHistoryServiceDatabaseDelegate.h>

@protocol NSXPCProxyCreating;
@class NSString;

@interface WBSHistoryServiceDatabaseDelegateProxy : NSObject <WBSHistoryServiceDatabaseDelegate> {

	id<NSXPCProxyCreating> _proxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleEvent:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)reportPermanentIDsForVisits:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reportPermanentIDsForItems:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(/*^block*/id)_defaultProxyErrorHandlerWithSimpleReplyCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithProxy:(id)arg1 ;
-(void)reportSevereError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
