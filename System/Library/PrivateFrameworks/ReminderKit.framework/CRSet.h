/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/CRCoding.h>

@class CRDictionary, NSHashTable, CRDocument, NSArray, NSString;

@interface CRSet : NSObject <CRDataType, NSFastEnumeration, CRCoding> {

	CRDictionary* _dictionary;
	NSHashTable* _observers;

}

@property (nonatomic,retain) CRDictionary * dictionary;                 //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                   //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic,__weak) CRDocument * document; 
@property (readonly) unsigned long long count; 
@property (copy,readonly) NSArray * allObjects; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CRDocument *)document;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(id)init;
-(id)initWithCRCoder:(id)arg1 set:(const Dictionary*)arg2 ;
-(void)encodeWithCRCoder:(id)arg1 set:(Dictionary*)arg2 ;
-(void)encodeWithCRCoder:(id)arg1 set:(Dictionary*)arg2 elementValueCoder:(/*^block*/id)arg3 ;
-(id)initWithCRCoder:(id)arg1 set:(const Dictionary*)arg2 elementValueDecoder:(/*^block*/id)arg3 ;
-(void)removeObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(void)mergeWith:(id)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(id)tombstone;
-(void)removeObject:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSArray *)allObjects;
-(id)member:(id)arg1 ;
-(unsigned long long)hash;
-(id)anyObject;
-(void)setObject:(id)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CR4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(void)removeAllObjects;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)setUpdated:(id)arg1 ;
-(void)setDictionary:(CRDictionary *)arg1 ;
-(CRDictionary *)dictionary;
-(BOOL)containsObject:(id)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)setDocument:(CRDocument *)arg1 ;
@end

