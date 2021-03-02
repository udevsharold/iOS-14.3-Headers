/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/BWNodeMessage.h>

@class BWStillImageSettings;

@interface BWNodeStillImagePrewarmMessage : BWNodeMessage {

	BWStillImageSettings* _stillImageSettings;

}

@property (readonly) BWStillImageSettings * stillImageSettings; 
+(id)newMessageWithStillImageSettings:(id)arg1 ;
-(void)dealloc;
-(BWStillImageSettings *)stillImageSettings;
-(id)_initWithStillImageSettings:(id)arg1 ;
@end
