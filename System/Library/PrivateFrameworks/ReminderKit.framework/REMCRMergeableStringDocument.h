/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMReplicaIDSource, TTMergeableStringVersionedDocument, NSString, NSAttributedString;

@interface REMCRMergeableStringDocument : NSObject <NSCopying, NSSecureCoding> {

	REMReplicaIDSource* _replicaIDSource;
	TTMergeableStringVersionedDocument* _document;

}

@property (nonatomic,retain) REMReplicaIDSource * replicaIDSource;                       //@synthesize replicaIDSource=_replicaIDSource - In the implementation block
@property (nonatomic,retain) TTMergeableStringVersionedDocument * document;              //@synthesize document=_document - In the implementation block
@property (nonatomic,readonly) NSString * string; 
@property (nonatomic,readonly) NSAttributedString * attributedString; 
+(BOOL)supportsSecureCoding;
+(id)documentFromSerializedData:(id)arg1 replicaIDSource:(id)arg2 forKey:(id)arg3 ofObjectID:(id)arg4 ;
-(id)serializedData;
-(TTMergeableStringVersionedDocument *)document;
-(void)setReplicaIDSource:(REMReplicaIDSource *)arg1 ;
-(NSString *)string;
-(id)initWithReplicaIDSource:(id)arg1 string:(id)arg2 ;
-(id)mutableDocument;
-(NSAttributedString *)attributedString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)mergedWithDocument:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(REMReplicaIDSource *)replicaIDSource;
-(id)initWithReplicaIDSource:(id)arg1 document:(id)arg2 ;
-(id)initWithReplicaIDSource:(id)arg1 serializedData:(id)arg2 error:(id*)arg3 ;
-(void)setDocument:(TTMergeableStringVersionedDocument *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

