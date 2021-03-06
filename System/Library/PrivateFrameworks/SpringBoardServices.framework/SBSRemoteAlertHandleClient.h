/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSRemoteAlertHandleClient <NSObject>
@required
-(id)remoteAlertHandlesForDefinition:(id)arg1 allowsCreation:(BOOL)arg2 configurationContext:(id)arg3;
-(id)createRemoteAlertHandleWithDefinition:(id)arg1 configurationContext:(id)arg2;
-(void)activateRemoteAlertHandle:(id)arg1 withContext:(id)arg2;
-(void)invalidateRemoteAlertHandle:(id)arg1;

@end

