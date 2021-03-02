/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, AVOutputDevice;


@protocol AVOutputDeviceAuthorizationRequestImpl <NSObject>
@property (nonatomic,readonly) NSString * ID; 
@property (nonatomic,readonly) AVOutputDevice * outputDevice; 
@property (nonatomic,readonly) NSString * authorizationTokenType; 
@required
-(NSString *)ID;
-(NSString *)authorizationTokenType;
-(void)respondWithAuthorizationToken:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)cancel;
-(AVOutputDevice *)outputDevice;

@end
