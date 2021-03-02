/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>
#import <AXSpringBoardServerInstance/AXViewServiceHandler.h>

@class NSMutableDictionary, NSString;

@interface AXSpringBoardServerAlertManager : NSObject <SBSRemoteAlertHandleObserver, AXViewServiceHandler> {

	NSMutableDictionary* _handlesByService;

}

@property (nonatomic,retain) NSMutableDictionary * handlesByService;              //@synthesize handlesByService=_handlesByService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHandlesByService:(NSMutableDictionary *)arg1 ;
-(BOOL)isShowingAXUIViewService:(id)arg1 ;
-(void)hideAXUIViewService:(id)arg1 ;
-(void)showAXUIViewService:(id)arg1 withData:(id)arg2 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(NSMutableDictionary *)handlesByService;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
@end
