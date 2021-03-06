/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSString, NSArray;

@interface EDAMManageNotebookSharesParameters : FATObject {

	NSString* _notebookGuid;
	NSString* _inviteMessage;
	NSArray* _membershipsToUpdate;
	NSArray* _invitationsToCreateOrUpdate;
	NSArray* _unshares;

}

@property (nonatomic,retain) NSString * notebookGuid;                            //@synthesize notebookGuid=_notebookGuid - In the implementation block
@property (nonatomic,retain) NSString * inviteMessage;                           //@synthesize inviteMessage=_inviteMessage - In the implementation block
@property (nonatomic,retain) NSArray * membershipsToUpdate;                      //@synthesize membershipsToUpdate=_membershipsToUpdate - In the implementation block
@property (nonatomic,retain) NSArray * invitationsToCreateOrUpdate;              //@synthesize invitationsToCreateOrUpdate=_invitationsToCreateOrUpdate - In the implementation block
@property (nonatomic,retain) NSArray * unshares;                                 //@synthesize unshares=_unshares - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)inviteMessage;
-(void)setInviteMessage:(NSString *)arg1 ;
-(NSString *)notebookGuid;
-(void)setNotebookGuid:(NSString *)arg1 ;
-(NSArray *)membershipsToUpdate;
-(void)setMembershipsToUpdate:(NSArray *)arg1 ;
-(NSArray *)invitationsToCreateOrUpdate;
-(void)setInvitationsToCreateOrUpdate:(NSArray *)arg1 ;
-(NSArray *)unshares;
-(void)setUnshares:(NSArray *)arg1 ;
@end

