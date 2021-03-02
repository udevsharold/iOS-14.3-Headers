/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKAuthHandler <NSObject>
@required
-(void)reauthenticateWithContext:(id)arg1 completionWithResults:(/*^block*/id)arg2;
-(id)buildReauthenticationContextFromContext:(id)arg1 error:(id*)arg2;
-(void)reauthenticateWithContext:(id)arg1 completion:(/*^block*/id)arg2;

@end
