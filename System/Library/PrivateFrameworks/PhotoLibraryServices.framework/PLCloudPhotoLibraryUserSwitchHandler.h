/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UMUserSwitchStakeholder.h>

@protocol PLCloudUserSessionHandling;
@class NSString;

@interface PLCloudPhotoLibraryUserSwitchHandler : NSObject <UMUserSwitchStakeholder> {

	id<PLCloudUserSessionHandling> _sessionHandler;

}

@property (retain) id<PLCloudUserSessionHandling> sessionHandler;              //@synthesize sessionHandler=_sessionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PLCloudUserSessionHandling>)sessionHandler;
-(void)setSessionHandler:(id<PLCloudUserSessionHandling>)arg1 ;
-(void)dealloc;
-(void)willSwitchUser;
@end

