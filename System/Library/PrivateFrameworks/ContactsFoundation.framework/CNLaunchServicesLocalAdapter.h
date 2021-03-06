/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNLaunchServicesAdapter.h>

@class LSApplicationWorkspace;

@interface CNLaunchServicesLocalAdapter : NSObject <CNLaunchServicesAdapter> {

	LSApplicationWorkspace* _workspace;

}

@property (nonatomic,retain) LSApplicationWorkspace * workspace;              //@synthesize workspace=_workspace - In the implementation block
+(id)lsApplicationWorkspaceForBundleId:(id)arg1 ;
-(id)initWithApplicationWorkspace:(id)arg1 ;
-(void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)setWorkspace:(LSApplicationWorkspace *)arg1 ;
-(void)applicationsForUserActivityType:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(LSApplicationWorkspace *)workspace;
-(void)openUserActivityData:(id)arg1 inApplication:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)applicationForBundleIdentifier:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)applicationsAvailableForHandlingURLScheme:(id)arg1 withReply:(/*^block*/id)arg2 ;
@end

