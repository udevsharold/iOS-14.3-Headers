/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssistantServices/AssistantServices-Structs.h>
@class CPDistributedMessagingCenter;

@interface AFContextManager : NSObject {

	CFArrayRef _contextProviders;
	CPDistributedMessagingCenter* _center;

}
+(id)defaultContextManager;
-(void)_startListening;
-(id)init;
-(void)dealloc;
-(id)_collateContexts;
-(void)_collateContextsIntoArray:(id)arg1 ;
-(BOOL)addContextProvider:(id)arg1 ;
-(void)startCenter:(id)arg1 ;
-(void)_stopListening;
-(void)nothing;
-(id)_serverName;
-(void)removeContextProvider:(id)arg1 ;
-(void)_shutdownServer;
@end

