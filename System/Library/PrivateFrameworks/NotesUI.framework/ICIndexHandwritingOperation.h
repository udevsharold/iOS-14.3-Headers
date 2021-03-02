/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSManagedObjectID, NSManagedObjectContext;

@interface ICIndexHandwritingOperation : NSOperation {

	NSManagedObjectID* _attachmentObjectID;
	NSManagedObjectContext* _context;

}

@property (nonatomic,retain) NSManagedObjectID * attachmentObjectID;              //@synthesize attachmentObjectID=_attachmentObjectID - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * context;                    //@synthesize context=_context - In the implementation block
+(id)sharedOperationQueue;
-(void)main;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
-(NSManagedObjectContext *)context;
-(id)initWithAttachmentObjectID:(id)arg1 context:(id)arg2 ;
-(void)setAttachmentObjectID:(NSManagedObjectID *)arg1 ;
-(NSManagedObjectID *)attachmentObjectID;
@end
