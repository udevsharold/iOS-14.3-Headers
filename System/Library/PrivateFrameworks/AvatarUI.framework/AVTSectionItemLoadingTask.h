/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTPreloadingTask.h>

@protocol AVTAvatarAttributeEditorSectionItemPrefetching;
@class NSString;

@interface AVTSectionItemLoadingTask : NSObject <AVTPreloadingTask> {

	BOOL canceled;
	/*^block*/id _completionHandler;
	id<AVTAvatarAttributeEditorSectionItemPrefetching> _sectionItem;

}

@property (nonatomic,copy,readonly) id<AVTAvatarAttributeEditorSectionItemPrefetching> sectionItem;              //@synthesize sectionItem=_sectionItem - In the implementation block
@property (getter=isCanceled) BOOL canceled; 
@property (nonatomic,copy,readonly) id completionHandler;                                                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isCanceled;
-(id)completionHandler;
-(id)initWithSectionItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<AVTAvatarAttributeEditorSectionItemPrefetching>)sectionItem;
-(void)setCanceled:(BOOL)arg1 ;
-(void)cancel;
@end

