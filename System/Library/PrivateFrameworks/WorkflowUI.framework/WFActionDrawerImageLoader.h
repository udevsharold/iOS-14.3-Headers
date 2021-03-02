/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSCache;

@interface WFActionDrawerImageLoader : NSObject {

	NSObject*<OS_dispatch_queue> _imageLoadingQueue;
	NSCache* _imageCache;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> imageLoadingQueue;              //@synthesize imageLoadingQueue=_imageLoadingQueue - In the implementation block
@property (nonatomic,readonly) NSCache * imageCache;                                        //@synthesize imageCache=_imageCache - In the implementation block
+(id)sharedInstance;
-(NSCache *)imageCache;
-(id)init;
-(NSObject*<OS_dispatch_queue>)imageLoadingQueue;
-(id)loadImagesForInteractionDonation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
