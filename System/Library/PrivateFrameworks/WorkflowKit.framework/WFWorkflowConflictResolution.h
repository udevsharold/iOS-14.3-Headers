/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WFWorkflowConflictResolution : NSObject {

	BOOL _keepLocal;
	BOOL _keepRemote;
	NSString* _localWorkflowID;
	NSString* _remoteWorkflowID;

}

@property (nonatomic,copy) NSString * localWorkflowID;               //@synthesize localWorkflowID=_localWorkflowID - In the implementation block
@property (nonatomic,copy) NSString * remoteWorkflowID;              //@synthesize remoteWorkflowID=_remoteWorkflowID - In the implementation block
@property (assign,nonatomic) BOOL keepLocal;                         //@synthesize keepLocal=_keepLocal - In the implementation block
@property (assign,nonatomic) BOOL keepRemote;                        //@synthesize keepRemote=_keepRemote - In the implementation block
-(BOOL)keepLocal;
-(void)setKeepLocal:(BOOL)arg1 ;
-(id)description;
-(NSString *)localWorkflowID;
-(void)setLocalWorkflowID:(NSString *)arg1 ;
-(NSString *)remoteWorkflowID;
-(void)setRemoteWorkflowID:(NSString *)arg1 ;
-(BOOL)keepRemote;
-(void)setKeepRemote:(BOOL)arg1 ;
@end

