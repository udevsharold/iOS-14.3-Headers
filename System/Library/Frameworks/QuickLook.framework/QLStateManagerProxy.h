/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLPreviewControllerStateProtocolHostOnly;
@interface QLStateManagerProxy : NSObject {

	id<QLPreviewControllerStateProtocolHostOnly> _stateManager;

}

@property (__weak) id<QLPreviewControllerStateProtocolHostOnly> stateManager;              //@synthesize stateManager=_stateManager - In the implementation block
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)dropMethod;
-(void)setStateManager:(id<QLPreviewControllerStateProtocolHostOnly>)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id<QLPreviewControllerStateProtocolHostOnly>)stateManager;
@end

