/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Coherence.framework/Coherence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Coherence/Coherence-Structs.h>
@class NSString;

@interface Coherence.ObjCRenameSequence : NSObject {

	 renameSequence;
	 renameAddedBySequence;

}

@property (readonly,nonatomic) BOOL isEmpty; 
@property (readonly,nonatomic) NSString * description; 
-(BOOL)isEmpty;
-(id)init;
-(NSString *)description;
-(void)addWithReplica:(id)arg1 range:(NSRange)arg2 ;
-(void)addAddedByReplica:(id)arg1 range:(NSRange)arg2 ;
-(void)addAddedByVersion:(id)arg1 ;
@end

