/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSMergePolicy.h>

@interface NoteResurrectionMergePolicy : NSMergePolicy
+(id)sharedNoteResurrectionMergePolicy;
-(BOOL)resolveConflicts:(id)arg1 error:(id*)arg2 ;
-(id)localStoreForNote:(id)arg1 ;
-(id)snapshotFromRecord:(id)arg1 ;
-(BOOL)accountExists:(id)arg1 ;
@end

