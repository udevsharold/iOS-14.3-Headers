/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface CPSImageDownloader : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _requests;

}
-(id)init;
-(void)_downloadImageWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)downloadImageWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

