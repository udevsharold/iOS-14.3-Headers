/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSPersistentHTTPCookie2Storage, NSMemoryHTTPCookie2Storage, NSObject;

@interface NSHTTPCookie2Storage : NSObject {

	NSPersistentHTTPCookie2Storage* persistentStore;
	NSMemoryHTTPCookie2Storage* memoryStore;
	NSObject*<OS_dispatch_queue> _workQueue;
	/*^block*/id _defaultNotificationHandler;

}
+(id)sharedNSHTTPCookie2Storage;
-(id)initWithPath:(id)arg1 ;
-(void)deleteCookiesWithFilter:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCookies:(id)arg1 withFilter:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initInNSMemoryHTTPCookie2Storage;
-(void)deleteCookie:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getAllCookiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)getCookiesWithFilter:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteAllCookiesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCookie:(id)arg1 withFilter:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)identifyingData;
-(id)initWithIdentifyingData:(id)arg1 ;
@end
