/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class NSString;

@interface BRCSharingCopyWebAuthTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass> {

	NSString* _ckContainerID;

}

@property (nonatomic,retain) NSString * ckContainerID;              //@synthesize ckContainerID=_ckContainerID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(NSString *)ckContainerID;
-(id)initWithSyncContext:(id)arg1 ckContainerID:(id)arg2 ;
-(void)setCkContainerID:(NSString *)arg1 ;
@end
