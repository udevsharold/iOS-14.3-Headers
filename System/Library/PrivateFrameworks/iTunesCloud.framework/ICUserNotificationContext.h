/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@interface ICUserNotificationContext : NSObject {

	/*^block*/id _completionHandler;
	CFRunLoopSourceRef _runLoopSourceRef;

}

@property (nonatomic,copy) id completionHandler;                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef runLoopSourceRef;              //@synthesize runLoopSourceRef=_runLoopSourceRef - In the implementation block
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)clearRunLoop;
-(CFRunLoopSourceRef)runLoopSourceRef;
-(void)setRunLoopSourceRef:(CFRunLoopSourceRef)arg1 ;
@end
