/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WorkflowKit/WorkflowKit-Structs.h>
@class NSArray;

@interface RLMCollectionChange : NSObject {

	CollectionChangeSet* _indices;

}

@property (nonatomic,readonly) NSArray * deletions; 
@property (nonatomic,readonly) NSArray * insertions; 
@property (nonatomic,readonly) NSArray * modifications; 
-(id)initWithChanges:(CollectionChangeSet*)arg1 ;
-(NSArray *)deletions;
-(NSArray *)insertions;
-(NSArray *)modifications;
-(id)deletionsInSection:(unsigned long long)arg1 ;
-(id)insertionsInSection:(unsigned long long)arg1 ;
-(id)modificationsInSection:(unsigned long long)arg1 ;
@end

