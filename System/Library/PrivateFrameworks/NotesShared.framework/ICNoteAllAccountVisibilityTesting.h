/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ICNoteVisibilityTesting.h>

@class NSString;

@interface ICNoteAllAccountVisibilityTesting : NSObject <ICNoteVisibilityTesting>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)supportsVisibilityTestingType:(long long)arg1 ;
-(id)predicateForSearchableNotes;
-(id)predicateForSearchableAttachments;
@end

