/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/CREquatable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CRCoding.h>

@class NSUUID, NSString;

@interface CRTimestamp : NSObject <CRDataType, CREquatable, NSCopying, CRCoding> {

	NSUUID* _replica;
	long long _counter;

}

@property (nonatomic,retain) NSUUID * replica;                      //@synthesize replica=_replica - In the implementation block
@property (assign,nonatomic) long long counter;                     //@synthesize counter=_counter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)compare:(id)arg1 ;
-(void)setReplica:(NSUUID *)arg1 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(NSUUID *)replica;
-(id)initWithReplica:(id)arg1 andCounter:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(id)tombstone;
-(BOOL)isEqualToTimestamp:(id)arg1 ;
-(id)nextTimestampForReplica:(id)arg1 ;
-(id)nextTimestamp;
-(id)earlierTimestamp:(id)arg1 ;
-(id)laterTimestamp:(id)arg1 ;
-(unsigned long long)hash;
-(long long)counter;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)encodeIntoProtobufTimestamp:(Timestamp*)arg1 coder:(id)arg2 ;
-(id)initWithProtobufTimestamp:(const Timestamp*)arg1 decoder:(id)arg2 ;
-(id)shortDescription;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)setCounter:(long long)arg1 ;
-(void)setDocument:(id)arg1 ;
@end
