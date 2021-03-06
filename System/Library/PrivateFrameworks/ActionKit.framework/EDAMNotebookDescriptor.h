/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMNotebookDescriptor : FATObject {

	NSString* _guid;
	NSString* _notebookDisplayName;
	NSString* _contactName;
	NSNumber* _hasSharedNotebook;
	NSNumber* _joinedUserCount;

}

@property (nonatomic,retain) NSString * guid;                             //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSString * notebookDisplayName;              //@synthesize notebookDisplayName=_notebookDisplayName - In the implementation block
@property (nonatomic,retain) NSString * contactName;                      //@synthesize contactName=_contactName - In the implementation block
@property (nonatomic,retain) NSNumber * hasSharedNotebook;                //@synthesize hasSharedNotebook=_hasSharedNotebook - In the implementation block
@property (nonatomic,retain) NSNumber * joinedUserCount;                  //@synthesize joinedUserCount=_joinedUserCount - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)contactName;
-(NSString *)guid;
-(void)setContactName:(NSString *)arg1 ;
-(NSString *)notebookDisplayName;
-(void)setNotebookDisplayName:(NSString *)arg1 ;
-(NSNumber *)hasSharedNotebook;
-(void)setHasSharedNotebook:(NSNumber *)arg1 ;
-(NSNumber *)joinedUserCount;
-(void)setJoinedUserCount:(NSNumber *)arg1 ;
@end

