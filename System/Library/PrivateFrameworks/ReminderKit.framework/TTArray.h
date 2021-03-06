/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/CRCoding.h>
#import <libobjc.A.dylib/TTMergeableStringDelegate.h>
#import <libobjc.A.dylib/CRDataType.h>

@protocol CRUndoDelegate;
@class CRDocument, NSObject, TTMergeableAttributedString, NSString, NSArray, NSUUID;

@interface TTArray : NSObject <CRCoding, TTMergeableStringDelegate, CRDataType> {

	CRDocument* _document;
	NSObject*<CRUndoDelegate> _delegate;
	TTMergeableAttributedString* _contents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TTMergeableAttributedString * contents;               //@synthesize contents=_contents - In the implementation block
@property (nonatomic,readonly) NSArray * nsArray; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSUUID * replicaUUID; 
@property (assign,nonatomic,__weak) CRDocument * document;                           //@synthesize document=_document - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CRUndoDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeLastObject;
-(void)edited:(unsigned long long)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 ;
-(CRDocument *)document;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(id)init;
-(id)initWithCRCoder:(id)arg1 stringArray:(const StringArray*)arg2 ;
-(id)serializeDataFromArchive:(const StringArray*)arg1 ;
-(void)beginEditing;
-(void)mergeWith:(id)arg1 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(NSArray *)nsArray;
-(id)tombstone;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)wantsUndoCommands;
-(unsigned long long)hash;
-(TTMergeableAttributedString *)contents;
-(id)initWithDocument:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)endEditing;
-(unsigned long long)count;
-(void)setDelegate:(NSObject*<CRUndoDelegate>)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(void)saveToArchive:(StringArray*)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(id)initWithArchive:(const StringArray*)arg1 andReplicaID:(id)arg2 ;
-(id)initWithContents:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(id)textAttachmentAtIndex:(unsigned long long)arg1 ;
-(void)addUndoCommand:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(NSObject*<CRUndoDelegate>)delegate;
-(void)setDocument:(CRDocument *)arg1 ;
-(NSUUID *)replicaUUID;
@end

