/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLColumn.h>

@class NSSet;

@interface NSSQLAttribute : NSSQLColumn

@property (nonatomic,readonly) NSSet * triggerKeys; 
-(BOOL)isFileBackedFuture;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)dealloc;
-(BOOL)isDerivedAttribute;
-(NSSet *)triggerKeys;
-(unsigned char)_sqlTypeForAttributeType:(unsigned long long)arg1 flags:(unsigned long long)arg2 ;
-(id)initForReadOnlyFetchWithExpression:(id)arg1 ;
-(id)attributeDescription;
-(void)addKeyForTriggerOnRelationship:(id)arg1 ;
-(BOOL)shouldIndex;
-(BOOL)isBackedByTrigger;
-(void)_setIsBackedByTrigger:(BOOL)arg1 ;
@end

