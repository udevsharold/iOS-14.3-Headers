/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSTimer;

@interface OZNotificationStub : NSObject {

	NSTimer* _pTimer;
	OZDocument* _pDocument;

}
-(void)fire;
-(void)dealloc;
-(void)createTimer;
-(void)releaseTimer;
-(id)initWithOZDocument:(OZDocument*)arg1 useTimer:(BOOL)arg2 ;
-(void)processNotifications:(id)arg1 ;
@end

