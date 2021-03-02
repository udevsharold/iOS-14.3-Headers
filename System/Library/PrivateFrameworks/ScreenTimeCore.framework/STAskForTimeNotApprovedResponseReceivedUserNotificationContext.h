/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeCore/STUserNotificationContext.h>

@class NSString;

@interface STAskForTimeNotApprovedResponseReceivedUserNotificationContext : STUserNotificationContext {

	NSString* _parentName;
	NSString* _requestedResourceName;

}

@property (nonatomic,copy) NSString * parentName;                         //@synthesize parentName=_parentName - In the implementation block
@property (nonatomic,copy) NSString * requestedResourceName;              //@synthesize requestedResourceName=_requestedResourceName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)customizeNotificationContent:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(NSString *)parentName;
-(NSString *)requestedResourceName;
-(void)setParentName:(NSString *)arg1 ;
-(void)setRequestedResourceName:(NSString *)arg1 ;
-(id)initWithAskForTimeRequestIdentifier:(id)arg1 parentName:(id)arg2 requestedResourceName:(id)arg3 ;
@end
