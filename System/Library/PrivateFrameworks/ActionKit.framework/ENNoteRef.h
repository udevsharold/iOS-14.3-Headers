/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/WFSerializableContent.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ENLinkedNotebookRef;

@interface ENNoteRef : NSObject <WFSerializableContent, NSCoding, NSCopying> {

	long long _type;
	NSString* _guid;
	ENLinkedNotebookRef* _linkedNotebook;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * guid;                                     //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) ENLinkedNotebookRef * linkedNotebook;              //@synthesize linkedNotebook=_linkedNotebook - In the implementation block
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(id)noteRefFromData:(id)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)asData;
-(NSString *)guid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)wfSerializedRepresentation;
-(ENLinkedNotebookRef *)linkedNotebook;
-(void)setLinkedNotebook:(ENLinkedNotebookRef *)arg1 ;
@end

