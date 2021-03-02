/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ENCypher;
@class ENGroupID, _ENGroupInfo, NSArray, NSData, NSSet;

@interface ENGroup : NSObject <NSSecureCoding> {

	ENGroupID* _groupID;
	id<ENCypher> _cypher;
	_ENGroupInfo* _groupInfo;

}

@property (nonatomic,retain) _ENGroupInfo * groupInfo;                      //@synthesize groupInfo=_groupInfo - In the implementation block
@property (nonatomic,retain) id<ENCypher> cypher;                           //@synthesize cypher=_cypher - In the implementation block
@property (nonatomic,readonly) ENGroupID * groupID;                         //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,readonly) NSArray * participants; 
@property (nonatomic,readonly) NSData * sharedApplicationData; 
@property (nonatomic,readonly) NSSet * destinations; 
+(BOOL)supportsSecureCoding;
+(id)sortedGroupsFromGroups:(id)arg1 ;
-(id)verifyAndRevealData:(id)arg1 sendingDevice:(id)arg2 cypherIdentifier:(id)arg3 error:(id*)arg4 ;
-(void)setGroupInfo:(_ENGroupInfo *)arg1 ;
-(_ENGroupInfo *)groupInfo;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id<ENCypher>)cypher;
-(NSArray *)participants;
-(id)description;
-(NSSet *)destinations;
-(id)accountIdentity;
-(BOOL)isEqual:(id)arg1 ;
-(ENGroupID *)groupID;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)sharedApplicationData;
-(id)initWithGroupInfo:(id)arg1 groupID:(id)arg2 cypher:(id)arg3 ;
-(void)setCypher:(id<ENCypher>)arg1 ;
-(id)signAndConcealData:(id)arg1 cypherIdentifier:(id*)arg2 error:(id*)arg3 ;
@end
