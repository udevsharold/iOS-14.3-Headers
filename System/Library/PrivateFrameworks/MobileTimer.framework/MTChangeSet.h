/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSDictionary, NSArray;

@interface MTChangeSet : NSObject {

	NSSet* _changedProperties;
	NSDictionary* _changeDictionary;

}

@property (nonatomic,retain) NSSet * changedProperties;                    //@synthesize changedProperties=_changedProperties - In the implementation block
@property (nonatomic,retain) NSDictionary * changeDictionary;              //@synthesize changeDictionary=_changeDictionary - In the implementation block
@property (nonatomic,readonly) NSArray * changes; 
+(id)changeSetWithChangesFromObject:(id)arg1 toObject:(id)arg2 inProperties:(id)arg3 ;
+(id)changeSetWithChangesFromObject:(id)arg1 toObject:(id)arg2 ;
+(id)dictionaryFromChanges:(id)arg1 ;
-(id)initWithChanges:(id)arg1 ;
-(NSArray *)changes;
-(NSSet *)changedProperties;
-(BOOL)_isEqualToChangeSet:(id)arg1 checkOriginalValues:(BOOL)arg2 ;
-(id)changedValueForProperty:(id)arg1 hasProperty:(BOOL*)arg2 ;
-(id)_deserializer;
-(id)description;
-(BOOL)hasChangesInProperties:(id)arg1 ;
-(BOOL)isEquivalentToChangeSet:(id)arg1 ;
-(id)changeSetByAddingChangeSet:(id)arg1 ;
-(BOOL)hasChangeForProperty:(id)arg1 ;
-(BOOL)hasChangesInCommonWithChangeSet:(id)arg1 ;
-(id)deserializedChangedValueForProperty:(id)arg1 hasProperty:(BOOL*)arg2 ;
-(void)setChangedProperties:(NSSet *)arg1 ;
-(void)setChangeDictionary:(NSDictionary *)arg1 ;
-(id)initWithChangeDictionary:(id)arg1 ;
-(NSDictionary *)changeDictionary;
-(BOOL)isEqual:(id)arg1 ;
@end

