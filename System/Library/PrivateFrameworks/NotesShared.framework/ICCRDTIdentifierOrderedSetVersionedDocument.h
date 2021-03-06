/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/TTVersionedDocument.h>

@class NSUUID, CROrderedSet, CRDocument;

@interface ICCRDTIdentifierOrderedSetVersionedDocument : TTVersionedDocument {

	NSUUID* _replica;
	CROrderedSet* _orderedSet;
	CRDocument* _document;

}

@property (nonatomic,retain) CROrderedSet * orderedSet;              //@synthesize orderedSet=_orderedSet - In the implementation block
@property (readonly) CRDocument * document;                          //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) NSUUID * replica;                     //@synthesize replica=_replica - In the implementation block
+(unsigned)minimumSupportedVersion;
+(unsigned)serializationVersion;
-(void)setOrderedSet:(CROrderedSet *)arg1 ;
-(CRDocument *)document;
-(NSUUID *)replica;
-(CROrderedSet *)orderedSet;
-(unsigned long long)mergeWithIdentifierOrderedSetVersionedDocument:(id)arg1 ;
-(void)mergeVersion:(unsigned)arg1 fromData:(id)arg2 ;
-(id)serializeCurrentVersion:(unsigned*)arg1 ;
@end

