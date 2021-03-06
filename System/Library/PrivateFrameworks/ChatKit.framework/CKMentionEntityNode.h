/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableSet, NSMutableDictionary;

@interface CKMentionEntityNode : NSObject {

	NSString* _key;
	NSMutableSet* _entities;
	NSMutableSet* _possibleEntities;
	NSMutableDictionary* _children;

}

@property (nonatomic,retain) NSString * key;                               //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSMutableSet * entities;                      //@synthesize entities=_entities - In the implementation block
@property (nonatomic,retain) NSMutableSet * possibleEntities;              //@synthesize possibleEntities=_possibleEntities - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * children;               //@synthesize children=_children - In the implementation block
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(NSMutableSet *)entities;
-(void)addChild:(id)arg1 ;
-(void)setPossibleEntities:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)children;
-(void)setEntities:(NSMutableSet *)arg1 ;
-(void)addEntity:(id)arg1 ;
-(NSMutableSet *)possibleEntities;
-(void)addPossibleEntity:(id)arg1 ;
-(void)setChildren:(NSMutableDictionary *)arg1 ;
@end

