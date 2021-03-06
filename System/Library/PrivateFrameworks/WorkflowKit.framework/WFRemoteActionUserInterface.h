/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFRemoteUserInterface.h>

@protocol WFRemoteUserInterface;
@class NSString;

@interface WFRemoteActionUserInterface : NSObject <WFRemoteUserInterface> {

	NSString* _userInterfaceType;
	id<WFRemoteUserInterface> _remoteUserInterface;

}

@property (nonatomic,readonly) NSString * userInterfaceType;                               //@synthesize userInterfaceType=_userInterfaceType - In the implementation block
@property (nonatomic,readonly) id<WFRemoteUserInterface> remoteUserInterface;              //@synthesize remoteUserInterface=_remoteUserInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(NSString *)userInterfaceType;
-(id)initWithUserInterfaceType:(id)arg1 listenerEndpoint:(id)arg2 interface:(id)arg3 ;
-(id<WFRemoteUserInterface>)remoteUserInterface;
@end

