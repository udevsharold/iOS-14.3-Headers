/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarDisplayItemRelation.h>

@class NSArray;

@interface _UIStatusBarDisplayItemGroupRelation : _UIStatusBarDisplayItemRelation {

	BOOL _requiresAll;
	NSArray* _relations;

}

@property (nonatomic,retain) NSArray * relations;              //@synthesize relations=_relations - In the implementation block
@property (assign,nonatomic) BOOL requiresAll;                 //@synthesize requiresAll=_requiresAll - In the implementation block
-(void)setRequiresAll:(BOOL)arg1 ;
-(void)setRelations:(NSArray *)arg1 ;
-(id)_ui_descriptionBuilder;
-(NSArray *)relations;
-(id)type;
-(BOOL)isFulfilled;
-(BOOL)requiresAll;
-(id)itemStates;
@end
