/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSUserMediaPermissionController.h>

@interface _SFUserMediaPermissionController : WBSUserMediaPermissionController
-(void)savePendingChanges;
-(void)coalescedAsynchronousWriter:(id)arg1 didFinishWritingData:(id)arg2 ;
-(void)requestUserMediaAuthorizationForDevices:(unsigned long long)arg1 url:(id)arg2 mainFrameURL:(id)arg3 decisionHandler:(/*^block*/id)arg4 dialogPresenter:(id)arg5 ;
-(void)_didRetrieveUserMediaPermission:(unsigned long long)arg1 forDevices:(unsigned long long)arg2 url:(id)arg3 mainFrameURL:(id)arg4 decisionHandler:(/*^block*/id)arg5 dialogPresenter:(id)arg6 ;
@end
