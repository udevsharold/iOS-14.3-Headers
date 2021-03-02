/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VSViewModel.h>

@class NSURL, VSMessageQueue;

@interface VSWebAuthenticationViewModel : VSViewModel {

	NSURL* _sourceURL;
	VSMessageQueue* _messagesToWeb;
	VSMessageQueue* _messagesFromWeb;

}

@property (nonatomic,copy) NSURL * sourceURL;                                 //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) VSMessageQueue * messagesToWeb;                //@synthesize messagesToWeb=_messagesToWeb - In the implementation block
@property (nonatomic,readonly) VSMessageQueue * messagesFromWeb;              //@synthesize messagesFromWeb=_messagesFromWeb - In the implementation block
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(id)init;
-(VSMessageQueue *)messagesToWeb;
-(VSMessageQueue *)messagesFromWeb;
@end
